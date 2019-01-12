#include "row.h"
#include "ui_row.h"

Row::Row(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Row)
{
    ui->setupUi(this);
}

Row::~Row()
{
    delete ui;
}
