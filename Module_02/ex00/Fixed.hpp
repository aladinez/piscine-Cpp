#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>

class Fixed {
    private :
        int _fixedValue;
        static const int _fracBits = 8;
       
    public :
        Fixed ();
        ~Fixed ();
        Fixed (const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        

};

#endif