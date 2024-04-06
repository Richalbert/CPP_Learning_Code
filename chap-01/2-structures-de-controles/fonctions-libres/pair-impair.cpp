#include <iostream>

int main()
{

    std::cout << "Entrer un nombre : ";

    int n = 0;
    std::cin >> n;

    std::cout << std::endl;

    if (n % 2) // 0 = false et 1 = true
    {
        std::cout << n << " est impaire" << std::endl << std::endl;
    }
    else
    {
        std::cout << n << " est pair" << std::endl << std::endl;
    }

    return 0;
}