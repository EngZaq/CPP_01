#include "Sed.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    Sed replacer(filename);
    if (replacer.replace(s1, s2) != 0)
        return (1);

    return (0);
}