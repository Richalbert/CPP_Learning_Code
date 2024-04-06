#include <iostream>
#include <vector>

/**
 * @brief:  affiche si les éléments d'un tableau sont pairs ou impairs
 */
int main()
{
    std::vector<int> tab = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int n = tab.size();
    std::cout << n << std::endl;
    for (int it = 0; it < n; ++it)
    {
        if (tab[it] % 2 == 0)
        {
            std::cout << "Number #" << it << " is even (pair)" << std::endl;
        }
        else
        {
            std::cout << "Number #" << it << " is odd (impair)" << std::endl;
        }
    }
}