#include<string>
#include <cstdlib>
#include <QString>

#define TRUE		1
#define FALSE		0
#define OK		1
#define ERROR		0
#define INFEASIBLE	-1
#define Overflow	-2

typedef int Status;

typedef QChar ElemType;

typedef class BiTNode {
protected:
    ElemType data;
    bool lTag,rTag;
	BiTNode *lchild, *rchild;
    int leafNum;
public:
	BiTNode();
    ~BiTNode();
    Status root(QString s);
    Status isEmpty();
    Status createBiTree(QString s);
    Status preOrder(QString *preString);
    Status inOrder(QString *inString);
    Status postOrder(QString *postString);
    Status preOrderTraverse();
    Status inOrderTraverse();
    Status postOrderTraverse();
    Status levelOrderTraverse();
    Status preOrderThreading();
    Status inOrderThreading();
    Status postOrderThreading();
    int Leaves();
    int getHeight();
    int getHeight(BiTNode *r);
    Status destroy();
    friend class Paint;
}*BiTreeP;
