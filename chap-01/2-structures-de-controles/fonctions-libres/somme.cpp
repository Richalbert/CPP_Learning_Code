#include <iostream>

/*
 *   @brief: fonction qui retourne la somme de 2 entiers
 */
int sum(int a, int b)
{
    return a + b;
}

/*
 *   @brief: fonction qui retourne vraie si la somme des 3 entiers est paire
 */
bool is_full_sum_even()
{
    int s = 0; // s est le resultat

    for (int i = 0; i < 3; i++) // boucle saisie de 3 valeurs et appel a sum()
    {
        int n = 0;     // pour recevoir la valeur saisie
        std::cin >> n; // saisie de l'user
        s = sum(s, n); // ajoute a s la valeur saisie
    }

    bool resultat = s % 2;
    std::cout << "resultat = " << resultat << std::endl;

    return s % 2; // 0 si s est paire
}

/*
 *   @brief: affiche la somme
 */
void print_sum(int a, int b)
{
    std::cout << sum(a, b) << std::endl;
}

/*
 *   @brief: declaration de la fonction avant son appel
 */
int complicated_stuff();

int main()
{
    auto r = is_full_sum_even();
    std::cout << "r = " << r << std::endl;
    if (r) // 0 = false et 1 = true
    {
        std::cout << "La somme des 3 nombres saisies est impaire" << std::endl;
    }
    else
    {
        std::cout << "La somme des 3 nombres saisies est pairs" << std::endl;
    }

    print_sum(2, 3); // 2 + 3 = 5

    std::cout << complicated_stuff() << std::endl;
}

int complicated_stuff()
{
    return 10; // pour que cela compile
}