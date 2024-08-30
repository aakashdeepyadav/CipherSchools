#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    int add, sub, mul, mod;
    float div;
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    if(num2!=0){
        div = float(num1) / num2;
    }else{
        div=0;
    }
    
    mod = num1 % num2;

    cout << "Addition: " << add << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    cout << "Modulus: " << mod << endl;

    return 0;
}