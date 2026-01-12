#include "Sed.hpp"
#include <cstdlib>

// Modified Constructor
Sed::Sed(std::string filename) : _inFile(filename)
{
    // Find the last dot in the filename
    size_t lastDot = filename.rfind('.');

    // If a dot is found, take the substring up to the dot and add .replace
    if (lastDot != std::string::npos)
        this->_outFile = filename.substr(0, lastDot) + ".replace";
    else
        // If no dot is found (e.g., "Makefile"), just append .replace
        this->_outFile = filename + ".replace";
}

Sed::~Sed() {
}

int Sed::replace(std::string s1, std::string s2)
{
    std::ifstream ifs(this->_inFile.c_str());
    if (!ifs.is_open()) {
        std::cerr << "Error: Unable to open input file: " << this->_inFile << std::endl;
        return (1);
    }

    if (ifs.peek() == std::ifstream::traits_type::eof()) {
        std::ofstream ofs(this->_outFile.c_str());
        return (0);
    }
    
    std::string content;
    std::string buffer;
    while(std::getline(ifs, buffer)) {
        content += buffer;
        if (!ifs.eof())
            content += "\n";
    }
    ifs.close();

    std::ofstream ofs(this->_outFile.c_str());
    if (!ofs.is_open()) {
        std::cerr << "Error: Unable to create output file: " << this->_outFile << std::endl;
        return (1);
    }

    if (s1.empty()) {
        ofs << content;
        ofs.close();
        return (0);
    }

    size_t pos = 0;
    size_t foundPos = 0;
    
    while ((foundPos = content.find(s1, pos)) != std::string::npos)
    {
        ofs << content.substr(pos, foundPos - pos);
        ofs << s2;
        pos = foundPos + s1.length();
    }
    
    ofs << content.substr(pos);
    ofs.close();
    return (0);
}