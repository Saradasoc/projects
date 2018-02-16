#include <iostream>
#include "include/calc.h"
using namespace std;

int main() {
  double a, b, ans;
  char chosenOp;

  for ( ; ; ) {
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Enter an operator (+ - / *): " << endl;
    cin >> chosenOp;

    if (chosenOp == '+') 
    {
      ans = add(a, b);
    }
    else if (chosenOp == '-')
    {
      ans = sub(a, b);
    }
    else if (chosenOp == '/')
    {
      ans = divide(a, b);
    }
    else if (chosenOp == '*')
    {
      ans = multi(a, b);
    }
    
    cout << "Answer: " << ans << endl;
  }

  return 0;
}