#include <iostream>
#include "structure.h"
using namespace std;


using namespace std;

int main()
{

    SLinkedList<int>* mySLinked = new SLinkedList<int>();
    mySLinked->addFront(2);
    mySLinked->addFront(3);
    mySLinked->addFront(4);
    mySLinked->addFront(5);

    cout<<mySLinked->getElem(1)<<endl;
    return 0;
}
