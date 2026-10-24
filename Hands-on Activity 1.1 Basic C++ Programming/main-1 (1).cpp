#include <iostream>

bool logicalOperations(bool a, bool b)
{
    std::cout<< "\nLogical Operations\n";
    std::cout<< "a && b = " << (a && b) <<std::endl;
    std::cout<< "a || b = " << (a || b) <<std::endl;
    std::cout<< "!a = " << (!a) <<std::endl;
    std::cout<< "!b = " << (!b) <<std::endl;

    return true;
}

int main()
{
    bool a, b;
    bool Success;

    std::cout<< "Enter first Boolean value (0 or 1): ";
    std::cin>> a;

    std::cout<< "Enter second Boolean value (0 or 1): ";
    std::cin>> b;

    Success = logicalOperations(a, b);

    std::cout<< "\n Returned: " << Success <<std::endl;

    return 0;
}