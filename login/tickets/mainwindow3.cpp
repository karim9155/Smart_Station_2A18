#include "mainwindow3.h"

#include <QtWidgets>
#include <QVector>
#include <QSqlQuery>


//! [0]
MainWindow3::MainWindow3()
{
    selectedDate = QDate::currentDate();
    fontSize = 10;

    QWidget *centralWidget = new QWidget;
//! [0]

//! [1]
    QLabel *dateLabel = new QLabel(tr("Date:"));
    QComboBox *monthCombo = new QComboBox;

    for (int month = 1; month <= 12; ++month)
        monthCombo->addItem(QLocale::system().monthName(month));

    QDateTimeEdit *yearEdit = new QDateTimeEdit;
    yearEdit->setDisplayFormat("yyyy");
    yearEdit->setDateRange(QDate(2000, 1, 1), QDate(2030, 1, 1));
//! [1]

    monthCombo->setCurrentIndex(selectedDate.month() - 1);
    yearEdit->setDate(selectedDate);

//! [2]
    QLabel *fontSizeLabel = new QLabel(tr("Font size:"));
    QSpinBox *fontSizeSpinBox = new QSpinBox;
    fontSizeSpinBox->setRange(1, 64);

    editor = new QTextBrowser;
    insertCalendar();
//! [2]

//! [3]
    connect(monthCombo, QOverload<int>::of(&QComboBox::activated),
            this, &MainWindow3::setMonth);
    connect(yearEdit, &QDateTimeEdit::dateChanged,
            this, &MainWindow3::setYear);
    connect(fontSizeSpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            this, &MainWindow3::setFontSize);
//! [3]

    fontSizeSpinBox->setValue(10);

//! [4]
    QHBoxLayout *controlsLayout = new QHBoxLayout;
    controlsLayout->addWidget(dateLabel);
    controlsLayout->addWidget(monthCombo);
    controlsLayout->addWidget(yearEdit);
    controlsLayout->addSpacing(24);
    controlsLayout->addWidget(fontSizeLabel);
    controlsLayout->addWidget(fontSizeSpinBox);
    controlsLayout->addStretch(1);

    QVBoxLayout *centralLayout = new QVBoxLayout;
    centralLayout->addLayout(controlsLayout);
    centralLayout->addWidget(editor, 1);
    centralWidget->setLayout(centralLayout);

    setCentralWidget(centralWidget);
//! [4]
}

//! [5]
void MainWindow3::insertCalendar()
{



    editor->clear();
    QTextCursor cursor = editor->textCursor();
    cursor.beginEditBlock();

    QDate date(selectedDate.year(), selectedDate.month(), 1);
//! [5]

//! [6]
    QTextTableFormat tableFormat;
    tableFormat.setAlignment(Qt::AlignHCenter);
    tableFormat.setBackground(QColor("#e0e0e0"));
    tableFormat.setCellPadding(2);
    tableFormat.setCellSpacing(4);
//! [6] //! [7]
    QVector<QTextLength> constraints;
    constraints << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14)
                << QTextLength(QTextLength::PercentageLength, 14);
    tableFormat.setColumnWidthConstraints(constraints);
//! [7]

//! [8]
    QTextTable *table = cursor.insertTable(1, 7, tableFormat);
//! [8]

//! [9]
    QTextFrame *frame = cursor.currentFrame();
    QTextFrameFormat frameFormat = frame->frameFormat();
    frameFormat.setBorder(1);
    frame->setFrameFormat(frameFormat);
//! [9]

//! [10]
    QTextCharFormat format = cursor.charFormat();
    format.setFontPointSize(fontSize);

    QTextCharFormat boldFormat = format;
    boldFormat.setFontWeight(QFont::Bold);

    QTextCharFormat highlightedFormat = boldFormat;
    highlightedFormat.setBackground(Qt::yellow);
//! [10]

//! [11]
    for (int weekDay = 1; weekDay <= 7; ++weekDay) {
        QTextTableCell cell = table->cellAt(0, weekDay-1);
//! [11] //! [12]
        QTextCursor cellCursor = cell.firstCursorPosition();
        cellCursor.insertText(QLocale::system().dayName(weekDay), boldFormat);
    }
//! [12]

//! [13]
    table->insertRows(table->rows(), 1);
//! [13]

    while (date.month() == selectedDate.month()) {
        int weekDay = date.dayOfWeek();
        QTextTableCell cell = table->cellAt(table->rows()-1, weekDay-1);
        QTextCursor cellCursor = cell.firstCursorPosition();
        // TRAVAIL DU DATE TICKET !
        QSqlQuery q;
        QVector<QString> vec;
        q.prepare("select t_date from ticket ");
        if(q.exec()){
            while(q.next()){
            vec.push_back(q.value(0).toString());
            }
        }
        QVectorIterator<QString> i(vec);
        while (i.hasNext())
        {
            QDate tt = QDate::fromString(i.next(),"dd/MM/yyyy");
            if (date == tt)
                cellCursor.insertText(QString("%1").arg(date.day()), highlightedFormat);
        }
        cellCursor.insertText(QString("%1").arg(date.day()), format);

        date = date.addDays(1);
        if (weekDay == 7 && date.month() == selectedDate.month())
            table->insertRows(table->rows(), 1);

    }

    cursor.endEditBlock();
//! [14]
    setWindowTitle(tr("Calendar for %1 %2"
        ).arg(QLocale::system().monthName(selectedDate.month())
        ).arg(selectedDate.year()));
}
//! [14]

//! [15]
void MainWindow3::setFontSize(int size)
{
    fontSize = size;
    insertCalendar();
}
//! [15]

//! [16]
void MainWindow3::setMonth(int month)
{
    selectedDate = QDate(selectedDate.year(), month + 1, selectedDate.day());
    insertCalendar();
}
//! [16]

//! [17]
void MainWindow3::setYear(QDate date)
{
    selectedDate = QDate(date.year(), selectedDate.month(), selectedDate.day());
    insertCalendar();
}
//! [17]
