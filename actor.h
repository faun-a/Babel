#ifndef ACTOR_H
#define ACTOR_H

#include <QObject>

class Actor : public QObject
{
    Q_OBJECT
public:
    explicit Actor(QObject *parent = 0);

signals:

public slots:
};

#endif // ACTOR_H