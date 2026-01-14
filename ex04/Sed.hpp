#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::string _inFile;
        std::string _outFile;

    public:
        Sed(std::string filename);
        ~Sed();

        int ft_replace(std::string s1, std::string s2);
};

#endif