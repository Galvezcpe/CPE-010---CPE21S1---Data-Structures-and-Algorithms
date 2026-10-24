#include <iostream>

double kelvinToFahrenheit(double kelv)
{
    return (kelv - 273.15) * 9 / 5 + 32;
}

int main()
{
    double k, f;

    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> k;

    f = kelvinToFahrenheit(k);

    std::cout << "Temperature in Fahrenheit: " << f << std::endl;

    return 0;
}