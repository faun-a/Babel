#include "actorsview.h"
#include "ui_actorsview.h"

ActorsView::ActorsView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ActorsView)
{
    ui->setupUi(this);
}

ActorsView::~ActorsView()
{
    delete ui;
}
