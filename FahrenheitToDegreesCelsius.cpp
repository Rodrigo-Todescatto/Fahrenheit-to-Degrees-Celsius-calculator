#include <iostream>

int main()
{
    double C;
    double F;

    std::cout << "Enter a Fahrenheit value:";

    std::cin >> F;

    C = (F - 32) / 1.8;

    std::cout << "The value in degrees celsius is: " << C << "\n";

}
