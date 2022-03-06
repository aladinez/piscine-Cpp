#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

Base * generate(void)
{
    Base* p[3] = {new A, new B, new C};
    srand(time(NULL));
    int i = rand() % 3;
    for (int j = 0; j < 3; j++)
    {
        if (j != i)
            delete p[j];
    }
    return (p[i]);
}

void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);

    if (a != 0)
        std::cout << "A" << std::endl;
    else if (b != 0)
        std::cout << "B" << std::endl;
    else if(c != 0)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
            }
        }
    }
}

int main()
{
    Base* p = generate();
    identify(p);
    std::cout << "---" << std::endl;
    identify(*p);
    return 0;
}