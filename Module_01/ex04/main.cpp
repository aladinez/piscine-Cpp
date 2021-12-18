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
    std::string filename(argv[1]);
    std::ifstream myfile;
    std::ofstream newfile;
    //==== works if compiled with c++11 : open takes const char * as parameter. ====
    myfile.open(filename);
    // TODO : do not open newfile if myfile is not oppened.
    newfile.open(filename + ".replaced");
    //==============================================================================
    std::size_t found;

    // there is a constructor in string class that takes char * as a parameter.
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error : s1 or s2 is empty." << std::endl;
        return 0;
    }
    if (myfile.is_open() && newfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            found = line.find(s1);
            while (found != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                found = line.find(s1, found + s1.length() - 1);
            }
            newfile << line;
        }
        myfile.close();
        newfile.close();
    }
    else
        std::cout << "Error : File corrupted." << std::endl;
    return (0);
}