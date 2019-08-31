#include <QWidget>
#include "bitree.h"


class Paint : public QWidget
{
    Q_OBJECT

public:
    explicit Paint(QWidget *parent = nullptr);
    void setBiTree(BiTreeP root);
protected:
    void paintEvent(QPaintEvent *);
    //void draw(BiTreeP node, int x, int y, int angle, bool isLeft, int depth, QPainter *p);
private:
    BiTreeP beTree;
    const int rootLengt=160;
    const double PI=3.1415926;
};
