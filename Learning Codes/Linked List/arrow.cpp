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

    a.age = 19;
    a.name = "Hania Amir";

    (*ptr).age = 20;
    ptr->age = 21;

    cout << a.name << " is " << a.age << " Years Old " << endl;

    return 0;
}
