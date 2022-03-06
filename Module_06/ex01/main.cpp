#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t address;
    address = reinterpret_cast<uintptr_t> (ptr);
    return address;
}
Data* deserialize(uintptr_t raw)
{
    Data* ptr;
    ptr = reinterpret_cast<Data*> (raw);
    return ptr;
}


int main()
{
    Data data;
    data.s_name = "alillo";
    data.age = 20;
    Data* ptr = deserialize(serialize(&data));

    if (ptr == &data)
    {
        std::cout << ptr->s_name << " == " << data.s_name << std::endl;
    }
    else
        std::cout << "Not working hh" << std::endl;
    return 0;
}