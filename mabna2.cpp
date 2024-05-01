#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    while (x / 2 != 0)
    {
        std::cout << x % 2;
        x = x / 2;
    }
    std::cout << x % 2;
}