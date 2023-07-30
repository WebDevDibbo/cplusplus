#include <iostream>
using namespace std;

int main(){
    // question 1
    int x = 2, y = 4;
    cout << "Output : " << (x * y) << endl; 

    // question 2
    char ch = 'U';
    cout << "ASCII : " << (int)ch << endl;

    // question 3
    int length = 7, breadth = 4;
    int area = length * breadth;
    cout << "Area : " << area << endl;

    // question 4
    int number = 4;
    int cube = number * number * number;
    cout << "Cube : " << cube << endl;

    // question 5
    cout << "Size : " << sizeof(short) << endl;

    // question 6
    int a = 2, b = 3, temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a : "<< a << endl;
    cout << "b : "<< b << endl;
    return 0;
}