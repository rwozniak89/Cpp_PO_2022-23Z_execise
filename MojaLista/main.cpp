#include <iostream>
#include "MyList.h"


using namespace std;

int main()
{
    cout << "MojaLista!" << endl;

    MyList* mojaLista = new MyList();

    mojaLista->printList();

    mojaLista->addToEnd(1);
    mojaLista->addToEnd(2);
    mojaLista->addToEnd(3);
    mojaLista->printList();

    mojaLista->addToBeginning(0);
    mojaLista->addToBeginning(-1);
    mojaLista->printList();

    mojaLista->addToBeginning(1);
    mojaLista->addToEnd(4);
    mojaLista->printList();

    cout << "check contains... ";
    cout << mojaLista->contains(4) << endl;

    if (mojaLista->contains(4))
    {
        cout << "contains 4" << endl;
    }
    else
    {
        cout << "not contains 4" << endl;
    }

    if (mojaLista->contains(5))
    {
        cout << "contains 5" << endl;
    }
    else
    {
        cout << "not contains 5" << endl;
    }

    mojaLista->removeKey(3);
    mojaLista->printList();

    mojaLista->removeKey(5);
    mojaLista->printList();

    mojaLista->removeKey(1);
    mojaLista->printList();

    mojaLista->clearAll();
    mojaLista->addToEnd(0);
    mojaLista->printList();

    return 0;
}
