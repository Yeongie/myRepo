#include <iostream>

int main()
{
    int a = 3;
    std::cout << a << ": doing this should cause issues" << std::endl;
    std::cout << a << ": This shouldn't hurt anyone" << std::endl;
    std::cout << "Hi" << std::endl;
    return 0;
}