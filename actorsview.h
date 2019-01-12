#ifndef ACTORSVIEW_H
#define ACTORSVIEW_H

#include <QMainWindow>

namespace Ui {
class ActorsView;
}

class ActorsView : public QMainWindow
{
    Q_OBJECT

public:
    explicit ActorsView(QWidget *parent = 0);
    ~ActorsView();

private:
    Ui::ActorsView *ui;
};

#endif // ACTORSVIEW_H
