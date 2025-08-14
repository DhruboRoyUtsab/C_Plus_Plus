/*Write a C++ Program which is going to declare and initialize two pointers. 
Then the output will show the memory address and values respectively*/
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 10;

    int* ptrX = &x;
    int* ptrY = &y;

    cout << "Memory address of x: " << ptrX << "\n Value of x: " << *ptrX << endl;
    cout << "Memory address of y: " << ptrY << "\n Value of y: " << *ptrY << endl;

    return 0;
}