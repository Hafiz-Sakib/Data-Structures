#include <bits/stdc++.h>
using namespace std;

struct person
{
    int age;
    string name;
};

int main()
{
    person a, b;
    person *ptr = &a;

    a.name = "Hania Amir";

    a.age = 19;
    cout << a.name << " is " << a.age << " Years Old " << endl;

    (*ptr).age = 20;
    cout << a.name << " is " << a.age << " Years Old " << endl;

    ptr->age = 21;
    cout << a.name << " is " << a.age << " Years Old " << endl;

    return 0;
}
