
class trem{
    int num;
public:
    void setNum(int num);
    int getNum();
};



class node{
public:
    node *next;
    trem num;

    static node *montaNode(trem n);
    static void desmontaNode(node *p);
};

class stack{
    node *top;
    int N;

public:
    stack();
    ~stack();
    bool push(trem t);
    void pop();
    trem topTrem();
    bool empty();
    int size();
    void clear();
};