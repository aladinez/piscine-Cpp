#include <iostream>
#include "MutantStack.hpp"
#include <list>




int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top :" << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size :" << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(8);
    mstack.push(16);
    mstack.push(99);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    //

    MutantStack<int> mstack2(mstack);
    // MutantStack<int> mstack2;
    // mstack2 = mstack;
    it = mstack2.begin();
    ite = mstack2.end();
    std::cout << "copy const : " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout <<  std::endl;




    // list 
    std::list<int> mstack1;
    mstack1.push_back(5);
    mstack1.push_back(17);
    std::cout << "back :" << mstack1.back() << std::endl;
    mstack1.pop_back();
    std::cout << "size :" << mstack1.size() << std::endl;
    mstack1.push_back(3);
    mstack1.push_back(5);
    mstack1.push_back(737);
    mstack1.push_back(8);
    mstack1.push_back(16);
    mstack1.push_back(99);
    //[...]
    mstack1.push_back(0);
    std::list<int>::iterator it1 = mstack1.begin();
    std::list<int>::iterator ite1 = mstack1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    return 0;
}