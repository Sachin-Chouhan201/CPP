/* C++ program to compare swap function of two numbers by comparing 
pass by pointer vs pass by reference vs pass by value */
#include <iostream>
using namespace std;
// Function to swap two numbers using
// pass by pointer.
void swapp(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
// Function to swap two numbers using
// pass by reference.
void swapr(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}
void swapv(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
    swapp(&a, &b);
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";
    a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
    swapr(a, b);
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
    swapv(a, b);
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
 return 0;   
}
