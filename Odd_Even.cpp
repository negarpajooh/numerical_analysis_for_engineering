#include <iostream>
#include <cmath>
int main(){
    std::cout<<"Plz enter your number :";
    double x{};
    std::cin>>x;
    if (floor(x)==x) //check integer and non-integer number
    {int y{static_cast<int>(x)};
    y = y % 2;
      if (y==0)     //check eeven number
      {std::cout<<"your number is even";}
      else
       {std::cout<<"your number is odd";}}
    else
       {std::cout<<"your number is not integer";}
    return 0;
}