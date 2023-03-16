#include "head.h"

void trem::setNum(int num){
    this->num = num;
}

int trem::getNum(){
    return num;
}


node *node::montaNode(trem n)
{

    node *p = new node;

    if (p)
    {
        p->num = n;
        p->next = 0;
    }

    return p;
}

void node::desmontaNode(node *p)
{
    delete p;
}

stack::stack()
{
    top = 0;
    N = 0;
}
stack::~stack()
{
    stack::clear();
}

bool stack::push(trem t)
{
    node *p = node::montaNode(t);

    if (p)
    {
        p->next = top;
        top = p;
        N++;
        return true;
    }
    return false;
}

void stack::pop()
{
    node *p;
    if (top)
    {
        p = top;
        top = top->next;
        node::desmontaNode(p);
        N--;
    }
}

trem stack::topTrem()
{
    return top->num;
}

int stack::size()
{
    return N;
}

bool stack::empty(){
    return top == 0;
}

void stack::clear(){
    node *p;
    while (top)
    {
        p = top;
        top = top->next;
        node::desmontaNode(p);
    }
    N = 0;
}
