#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain (const Brain&);
        Brain& operator = (const Brain&);
        ~Brain();
        std::string GetBrain() const;
        void SetBrain(std::string);
};



#endif