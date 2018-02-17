/*
Functions for the calculator
*/
#include "include/calc.h"
#include <cmath>
double add(double a, double b) 
{
  return a + b;
}

double sub(double a, double b) 
{
    return a - b;
}

double divide(double a, double b) 
{
    return a / b;
}

double multi(double a, double b) 
{
    return a * b;
}

double modu(double a, double b)
{
    return std::fmod(a, b);
}

std::string checkForGachi(int a)
{
    if (a == 69)
    {
      return "GachiGasm";
    }
    else
    {
        return "";
    }
}

double calculateAns(char op, int a, int b)
{
    if (op == '+') 
    {
      return add(a, b);
    }
    else if (op == '-')
    {
      return sub(a, b);
    }
    else if (op == '/')
    {
      return divide(a, b);
    }
    else if (op == '*')
    {
      return multi(a, b);
    }
    else if (op == '%')
    {
        return modu(a, b);
    }
    else
    {
        std::cout << "Invalid operator" << std::endl;
        std::abort();
    }
}
