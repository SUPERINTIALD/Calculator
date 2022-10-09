#include <iostream>
#include <math.h>
using namespace std;
// TO-DO
/* 
Basic Outline of orders? Needs to be changed....
1. Make header file,
2. Make operations file, (exponent, sum, subtract, multiply, divide, logs, e, square root)
3. Make regular algebraic calculator?
4. Make trig determiner? Furthermore hyperbolic functions
5. Make trig solver thing? Also for hyperbolic functions.
7. Make sure to determine constants and make it = 0.
8. Make power-rule file
9. Make Quotient-rule? Maybe it can go in power rule file.
10. Make chain-rule file

*/
int main(){
    // decalre variable for radius and volume
    float coefficient, exponent, equation;
    char x;
    cout <<"Please enter the coefficient: ";
    cin >>coefficient;
    cout << coefficient << endl;

    cout <<"Please enter the exponent ";
    cin >>exponent;
    cout << exponent << endl;

    equation = coefficient * pow(char(x),exponent);

    float num1, num2;   
  cout << "Enter operator: +, -, *, /: ";
  cin >> opertion;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
 // Baisc Operations... 
 // May need to make another operations file.. 
  switch(op) {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    case '^':
        cout << num1 << "^" << num2<< "=" << pow(num1, num2);
        break;
    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error!";
      break;
  }
    return 0;
}