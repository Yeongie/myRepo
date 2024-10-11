#include <iostream>

int main()
{
    int c = 3;
    std::cout << c << ": doing this should cause issues" << std::endl;
    std::cout << "Hi" << std::endl;
    return 0;
}