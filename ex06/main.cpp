#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        // Typically we might print usage, but for this specific exercise logic,
        // if no level is provided, we might just exit or complain generally.
        // Let's stick to the subject example logic implicitly.
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return (1);
    }

    Harl harl;
    harl.complain(argv[1]);

    return (0);