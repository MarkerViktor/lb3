#include <iostream>
#include "LinkedList.h"
#include "DoublyLinkedList.h"

using namespace std;


int main() {
    cout << "\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\t13" << endl;

    auto list = new LinkedList<int>();

    for (int q = 0; q < 10; q++)
        list->push_front(rand());
    cout << "___\t" << list->toString() << endl;

    list->clear();
    cout << "___\t" << list->toString() << endl;

    for (int q = 0; q < 8; q++)
        list->push_back(rand());
    cout << "___\t" << list->toString() << endl;

    for (int q = 0; q < 6; q++) {
        int place = rand() % list->size();
        cout << place << "\t";
        list->insert(rand(), place);
        cout << list->toString() << endl;
    }
    cout << "___\t" << list->toString() << endl;

    for (int q = 0; q < 4; q++) {
        int place = rand() % list->size();
        cout << place << "\t";
        list->erase(place);
        cout << list->toString() << endl;
    }
    cout << "___\t" << list->toString() << endl;

    delete list;
}
