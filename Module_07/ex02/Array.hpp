#ifndef _ARRAY_HPP
#define _ARRAY_HPP
#include <iostream>

template <class T>
class Array {
    private:
        T* _array;
        unsigned int _n;
    public:
        class BadAccess : public std::exception
        {
            public:
                const char* what() const throw(){return "Bad acess";}
        };
        
        Array() : _array(), _n(0)
        {}
        Array(unsigned int n) : _array(new T[n]), _n(n)
        {}

        Array(Array const & other) : _array(new T[other._n]), _n(other._n)
        {
            for (unsigned int i = 0; i < _n; i++)
                _array[i] = other._array[i];
        }

        Array& operator = (Array const & other)
        {

            delete [] _array;
            _n = other._n;
            _array = new T[_n];
            for (unsigned int i = 0; i < _n; i++)
                _array[i] = other._array[i];
        }

        T& operator [] (int index)
        {
            if (index < 0 || static_cast<unsigned int> (index) >= _n)
                throw BadAccess();
            return (_array[index]);
        }

        unsigned int size(){return _n;}

        ~Array()
        {
            delete [] _array;
        }
};


#endif