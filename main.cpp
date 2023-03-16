
#include <iostream>
#include "head.h"

using namespace std;

int main()
{

    trem n1;
    stack p1;

    n1.setNum(10);
    p1.push(n1);
    n1.setNum(20);
    p1.push(n1);
    n1.setNum(30);
    p1.push(n1);

    cout << "Size: " << p1.size() << endl;
    cout << "Topo: " << p1.topTrem().getNum() << endl;
    p1.pop();
    cout << "Size: " << p1.size() << endl;
    cout << "Topo: " << p1.topTrem().getNum() << endl;

    system("pause");
}
