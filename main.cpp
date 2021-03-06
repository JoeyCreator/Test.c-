#include <iostream>
using namespace std;

//Function prototype
int solve(int, int, char);

int main()
 {
 //Declare variables
 int solution, num1, num2;
 char oper;

 //Output
 cout << "Calculator\n----------\n" << endl;
 cout << "Syntax:\n" << endl;
 cout << "1 + 3\n" << endl;
 cout << "Operators: +, -, *, /\n" << endl;
 cout << "Equation: ";

 //Input
 cin >> num1 >> oper >> num2;

 //Solve and output
 solution = solve(num1, num2, oper);
 cout << "Answer: " << solution << endl;

 //Pause [until enter key] and exit
 cin.ignore(); //Enter key from last cin may be passed, ignore it.
 cin.get();
 return 0;
 }

int solve(int num1, int num2, char oper)
 {
 //Switch oper
 switch(oper)
  {
  case '+':
   return num1 + num2;
  case '-':
   return num1 - num2;
  case '*':
   return num1 * num2;
  case '/':
   return num1 / num2;
  default:
   cout << "\nIncorrect operation!  Try again: ";
   cin >> num1 >> oper >> num2;
   solve(num1, num2, oper);
  }
 }