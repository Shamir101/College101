/*
Here we show how to find the sizes of datatypes
*/
#include <iostream>
using namespace std;
int main()
{
    // Using sizeof() operator in C++ we can find the size of any datatype
    cout << "size of int is " << sizeof(char) << " bytes" << endl;
    cout << "size of int is " << sizeof(float) << " bytes" << endl;
    cout << "size of int is " << sizeof(int) << " bytes" << endl;
    cout << "size of int is " << sizeof(double) << " bytes" << endl;
    cout << "size of int is " << sizeof(bool) << " bytes" << endl;

    return 0;
}