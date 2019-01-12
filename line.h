#ifndef ROW_H
#define ROW_H

#include <QWidget>

namespace Ui {
class Row;
}

class Row : public QWidget
{
    Q_OBJECT

public:
    explicit Row(QWidget *parent = 0);
    ~Row();

private:
    Ui::Row *ui;
};

#endif // ROW_H
