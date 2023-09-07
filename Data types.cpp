/*
Finding the type of any variable

*/
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int IQ = 188;
    char name[] = "Sherlock Holmes";
    float average = 10.01;
    cout << "data type of IQ is " << typeid(IQ).name() << endl;
    cout << "data type of name is " << typeid(name).name() << endl;
    cout << "data type of average is " << typeid(average).name() << endl;
    return 0;
}