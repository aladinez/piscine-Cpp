#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error : arguments." << std::endl;
        return (0);
    }
    std::string line;
    std::fstream myfile(argv[1]);
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            std::cout << line << '\n';
        }
        myfile.close();
    }
    else
        std::cout << "Error : File corrupted." << std::endl;
    return (0);

}