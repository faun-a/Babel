#include "linesview.h"
#include "ui_linesview.h"

LinesView::LinesView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LinesView)
{
    ui->setupUi(this);
}

LinesView::~LinesView()
{
    delete ui;
}
