#ifndef MyClass_H
#define MyClass_H

using namespace std;

class MyClass
{
public:
    int id;
    int valueInt;
    float valueFloat;
    bool valueBool;

    MyClass() { cout << "Obcject created" << endl; }
    MyClass(int i) : id(i) { cout << "Obcject created with id: " << id << endl; }

    ~MyClass() { cout << "Obcject destoyed" << endl; }

    MyClass(const MyClass& other) { cout << "Obcject copied" << endl; }
};

#endif // MyClass_H
