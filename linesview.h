#ifndef LINESVIEW_H
#define LINESVIEW_H

#include <QMainWindow>

namespace Ui {
class LinesView;
}

class LinesView : public QMainWindow
{
    Q_OBJECT

public:
    explicit LinesView(QWidget *parent = 0);
    ~LinesView();

private:
    Ui::LinesView *ui;
};

#endif // LINESVIEW_H
