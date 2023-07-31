#include <iostream>
using namespace std;

int main(){
    //question 1
    int length,breadth;
    cout << "Enter the lenght: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    if(length == breadth){
        cout << "It is a square" << endl;
    }
    else{
        cout << "It is a rectangle" << endl;
    }

    //question 2
    int x;
    cout << "Enter a number : ";
    cin >> x;
    if(x < 0){
        x = x*(-1);
    }
    cout << "Absolute value is : " << x << endl;
    
    //question 3
    int costPrice,salePrice,profit,loss;
    cout << "Enter cost price : ";
    cin >> costPrice;
    cout << "Enter sale price : ";
    cin >> salePrice;
    if(salePrice > costPrice){
        profit = salePrice - costPrice;
        cout << "Profit = " << profit << endl;
    }
    else if(costPrice > salePrice){
        loss = salePrice - costPrice;
        cout << "loss = " << loss << endl;
    }
    else{
        cout << "No profit no loss";
    }

    //question 4
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if(num < 0){
        cout << "The number is negative and skipped";
    }
    else{
        cout << "the positive number is " << num << endl;
    }

    //question 5
    char operat;
    int a,b;
    cout << "Enter a operator (+,-,*,/) : ";
    cin >> operat;
    cout << "Enter two numbers : ";
    cin >> a;
    cin >> b;
    switch(operat) {
        case '+': 
            cout << "Sum = " << (a + b) << endl;
            break;
        case '-': 
            cout << "difference = " << (a - b) << endl;
            break;
        case '*':
            cout << "Multiplication = " << (a * b) << endl;
            break;
        case '/':
            cout << "Division = " << (a / b) << endl;
            break;
        default : cout << "Invalid Operator";           
    }

    //question 6
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if(marks >=90){
        cout << "Your Grade is A+" << endl; 
    }
    else if(marks >= 80){
         cout << "Your Grade is A" << endl;
    }
    else if(marks >= 70){
        cout << "Your Grade is B+" << endl;
    }
    else if(marks >= 60){
        cout << "Your Grade is B" << endl;
    }
    else if(marks >= 50){
        cout << "Your Grade is C" << endl;
    }
    else if(marks >= 40){
        cout << "Your Grade is D" << endl;
    }
    else if(marks >= 30){
        cout << "Your Grade is E" << endl;
    }
    else if(marks <= 30) {
        cout << "Your Grade is F" << endl;
    }
    else {
        cout << "Enter valid marks";
    }
    return 0;
}