#include "include/calc.h"

int main() {
  double a, b, ans;
  char chosenOp;

  for ( ; ; ) {
    std::cout << "Enter an equation: ";
    std::cin >> a >> chosenOp >> b;
    if (isdigit(a) && isdigit(b))
    {
      std::cout << a << " " << chosenOp << " " << b << " = ";

      ans = calculateAns(chosenOp, a, b);
      
      std::cout << ans << std::endl;
      std::cout << checkForGachi(ans) << std::endl;
    }
    else
    {
      std::cerr << "Please enter numeric values." << std::endl;
      break;
    }
    
  }

  return 0;
}