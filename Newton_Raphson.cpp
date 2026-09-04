#include <iostream>
#include <cmath>
double f(double x){
    return std:: pow(x, 3)-27; // define main function
}
double df(double x){
    return 3*std:: pow(x, 2); // define derivative function
}

int main()
{
    double x = 20.0;   // initial guess
    for (int i = 0; i < 5; i++) // 10 is iteration number
    {
        x = x - f(x) / df(x);
        std::cout << x << "\n";
    }

    return 0;
}