#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include <iostream>

class Brain
{
private:
public:
    std::string _ideas[100];
    Brain();
    Brain (const Brain&);
    Brain& operator = (const Brain&);
    ~Brain();
};



#endif