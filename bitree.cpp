#include "bitree.h"
#include<iostream>
#include <QDebug>

using namespace std;

BiTNode::BiTNode()
{
    lchild = nullptr;
    rchild = nullptr;
	lTag = 0;
	rTag = 0;
    leafNum = 0;
}

Status BiTNode::root(QString s)
{
    lchild=new BiTNode;
    rchild=lchild;
    lchild->createBiTree(s);
    return OK;
}

Status BiTNode::isEmpty()
{
    if(lchild==rchild&&lchild==nullptr)
        return OK;
    else
        return FALSE;
}

Status BiTNode::createBiTree(QString s)
{
    static int i = 0,l = 0;

	if (l > i)
		l = 0;

	if (s[i] == '#')
		return OK;
    data = s[i];

    //qDebug()<<data<<endl;

    i++;
	if (s[i] == '#')
        lchild = nullptr;
	else
	{
		lchild = new BiTNode;
        lchild->createBiTree(s);
	}
    i++;
	if (s[i] == '#')
	{
        rchild = nullptr;
		if (this->lchild == nullptr&&this->rchild == nullptr)
			l++;
		leafNum = l;
		if (i == s.length() - 1)
			i = 0;
		return OK;
	}
	else
	{
		rchild = new BiTNode;
        rchild->createBiTree(s);
    }//abc##d##ef###
    if(this->lchild==nullptr&&this->rchild==nullptr)
        l++;
    leafNum=l;
	if (i == s.length() - 1)
		i = 0;
    return OK;
}

Status BiTNode::preOrder(QString *preString)
{
    preString->append(data);

    if (lchild!=nullptr)
        lchild->preOrder(preString);
    if (rchild!=nullptr)
        rchild->preOrder(preString);
	return OK;
}

Status BiTNode::inOrder(QString *inString)
{
    if (lchild!=nullptr)
        lchild->inOrder(inString);
    inString->append(data);
    if (rchild!=nullptr)
        rchild->inOrder(inString);
	return OK;
}

Status BiTNode::postOrder(QString *postString)
{
    if (lchild!=nullptr)
        lchild->postOrder(postString);
    if (rchild!=nullptr)
        rchild->postOrder(postString);
    postString->append(data);
	return OK;
}

Status BiTNode::levelOrderTraverse()
{
	int i = 0, j = 1;
	BiTNode *queue[1000];
	queue[i] = this;
	while (1)
	{
		if (queue[i]->lchild)
		{
			queue[j] = queue[i]->lchild;
			j++;
		}
			
		if (queue[i]->rchild)
		{
			queue[j] = queue[i]->rchild;
			j++;
		}

		i++;
		if (i == j)
			break;
	}
	return OK;
}

Status BiTNode::preOrderTraverse()
{
    //qDebug()<<preString;
    return OK;
}

Status BiTNode::inOrderTraverse()
{
    //qDebug()<<inString;

    return OK;
}

Status BiTNode::postOrderTraverse()
{
    //qDebug()<<postString;

    return OK;
}


BiTNode::~BiTNode()
{
    if(lchild != nullptr&&lchild->lchild==nullptr&&lchild->rchild==nullptr)
    {
        delete lchild;
        lchild=nullptr;
    }

    if(rchild != nullptr&&rchild->lchild==nullptr&&rchild->rchild==nullptr)
    {
        delete rchild;
        rchild=nullptr;
    }


    if (lchild!=nullptr)
        lchild->~BiTNode();
    if (rchild!=nullptr)
        rchild->~BiTNode();

}

Status BiTNode::destroy()
{
	
    if(lchild!=nullptr&&lchild->lchild==nullptr&&lchild->rchild==nullptr)
    {
        delete lchild;
        lchild=nullptr;
    }

    if(rchild != nullptr&&rchild->lchild==nullptr&&rchild->rchild==nullptr)
    {
        delete rchild;
        rchild=nullptr;
    }


    if (lchild!=nullptr)
        lchild->destroy();
    if (rchild!=nullptr)
        rchild->destroy();

    return OK;
}

int BiTNode::Leaves()
{
    return  this->leafNum;
}

Status BiTNode::preOrderThreading()
{
    static BiTNode *pre=nullptr;
    if(pre!=nullptr&&pre->rTag)
        pre->rchild=this;
    
    if(lchild==nullptr)
    {
        lTag=1;
        lchild=pre;
    }
    if(rchild==nullptr)
        rTag=1;
	
	pre=this;
	if(lTag==false)
		lchild->preOrderThreading();
	if(rTag==false)
		rchild->preOrderThreading();
    return OK;

}

Status BiTNode::inOrderThreading()
{
	static BiTNode *pre = nullptr;
	if (pre != nullptr&&pre->rTag)
		pre->rchild = this;

	if (lchild == nullptr)
	{
		lTag = 1;
		lchild = pre;
	}
	if (rchild == nullptr)
		rTag = 1;

	if (lTag == false)
		lchild->preOrderThreading();
	pre = this;
	if (rTag == false)
		rchild->preOrderThreading();
	return OK;
}

Status BiTNode::postOrderThreading()
{
	static BiTNode *pre = nullptr;
	if (pre != nullptr&&pre->rTag)
		pre->rchild = this;

	if (lchild == nullptr)
	{
		lTag = 1;
		lchild = pre;
	}
	if (rchild == nullptr)
		rTag = 1;

	if (lTag == false)
		lchild->preOrderThreading();
	
	if (rTag == false)
		rchild->preOrderThreading();
	pre = this;
	return OK;
}

int BiTNode::getHeight()
{
    int num=this->getHeight(this);return num;
}

int BiTNode::getHeight(BiTNode*r)
    {
	if (r == nullptr)
		return 0;
	int i = getHeight(r->lchild);
	int j = getHeight(r->rchild);
	return (i < j) ? j + 1 : i + 1;
    }

