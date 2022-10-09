#include <iostream>
#include <math.h>
using namespace std;

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

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }
    return 0;
}