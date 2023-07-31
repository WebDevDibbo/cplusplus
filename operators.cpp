#include <iostream>
using namespace std;

int main()
{
    // question 1
    int a;
    int b;
    cout  << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << (a==b)? 1 : 0;
    cout << endl;

    // question 2
    int x,y;
    cout  << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << ((x < 50) && (x < y))? 1 : 0;

    // question 3
    int total, boys, girls;
    boys = 17;
    total = (80 * 45) / 100;
    girls = total - boys;
    cout << "Number of girls getting grade A = " << girls << endl;

    // question 4
    int n, first, second, third, fourth, fifth, sum;
    n = 12345;
    /*Take out each digit of this number and then finally add the first and the second last digits*/
    first = n / 10000; // first digit
    n = n % 10000;
    second = n / 1000; // second digit
    n = n % 1000;
    third = n / 100; // third digit
    n = n % 100;
    fourth = n / 10; // fourth digit
    fifth = n % 10;  // fifth digit
    sum = first + fourth;
    cout << "sum of first and fourth digit is: " << sum << endl;

    // question 5
    int m,frst,secon,s = 0,thrd;
    m = 123;
    frst = m / 100;
    m = m % 100;
    secon = m / 10;
    thrd = m % 10;
    s = frst + secon + thrd;
    cout << "Sum of digits is: " << s << endl;

    // question 6
    int c = 8,d = 10;
    cout << "Sum = " << (c + d) << endl;
    cout << "Difference = " << (c - d) << endl;
    cout << "Product = " << (c * d) << endl;
    cout << "Division = " << ((float)c / d) << endl;
    return 0;
}