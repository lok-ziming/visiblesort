#ifndef SORT_H
#define SORT_H
#include<QVector>
class Sort{
public:
    virtual void sort(QVector<int>& vec) = 0;
signals:
    swap(int,int);
    look(int);
}
#endif // SORT_H
