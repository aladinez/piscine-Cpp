#include <iostream>
#include <fstream>


int error(const char *message)
{
    std::cerr << message << '\n';
    return 1;
}


int main(int argc, char **argv)
{
    if (argc != 4)
        return error("Error : arguments.");
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    if (s1.empty() || s2.empty())
        return error("Error : s1 or s2 is empty." );

    std::ifstream myfile(argv[1]);
    if (myfile.is_open())
    {
        std::ofstream newfile(std::string(argv[1]) + ".replaced");
        if (!newfile.is_open())
            return error("Error : outfile corrupted" );

        std::string line;
        std::size_t found;
        while ( getline (myfile,line) )
        {
            found = line.find(s1);
            while (found != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1, found + s2.length());
            }
            newfile << line << '\n';
        }
        myfile.close();
        newfile.close();
    }
    else
        return error("Error : File corrupted.");
    return (0);
}