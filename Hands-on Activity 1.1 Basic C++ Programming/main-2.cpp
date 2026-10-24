#include <iostream>

void swapNumbers(int &a, int &b)
{
    int swap = a;
    a = b;
    b = swap;
}

int main()
{
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "\nBefore swapping:" << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    swapNumbers(num1, num2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    return 0;
}