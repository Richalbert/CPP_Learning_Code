/*
 *  for-each
 *      for (<type> <variable> : <conteneur>)
 *      {
 *          ...
 *      }
 *
 */

#include <iostream>

int main()
{
    int array[] = { 1, 2, 3, 4 };

    for (auto v : array)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
