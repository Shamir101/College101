/*
@Operators used in C++
*/
#include <iostream>
using namespace std;
int main()
{
    int x = 55;
    int y = 5;
    // Arithmetic Operators
    cout << "Given are the results of arthimetic operations " << endl;
    cout << "Adding x and y is " << x + y << endl;
    cout << "Subtracting x and y is " << x - y << endl;
    cout << "Multiplicating x and y is " << x * y << endl;
    cout << "Dividing of x over y is " << x / y << endl;
    cout << "Modulus of x over y is " << x % y << endl;
    cout << "Increasing x variable by 1, using postincrement " << x++ << endl;
    cout << "Increasing y variable by 1 using preincrement " << ++x << endl;
    cout << "Decreasing y variable by 1 using postincrement " << y-- << endl;
    cout << "Decreasing y variable by 1 using preincrement " << --y << endl;
    cout << "___________________________" << endl;
    // Assignment Operators
    cout << "Result of Compound Assignment & Assignment operators are " << endl;
    int value = 5;
    cout << "The value is " <<value << endl;
    // More Assignment Operators
    value += 8;
    value -= 7;
    value *= 4;
    value /= 2;
    // Comparison Operatos
    cout << (x < y) << endl;
    cout << (x != y) << endl;
    cout << (x == y) << endl;
    cout << (x > y) << endl;
    cout << (x >= y) << endl;
    cout << (x <= y) << endl;
    // Logical Operators
    bool isLearning = true;
    bool isCpp = true;
    cout << "____________________" << endl;
    cout << "Result of logical Operators are " << endl;
    cout << (isLearning && isCpp) << endl;
    cout << (isLearning || isCpp) << endl;
    cout << !(isLearning) << endl;
    return 0;
}