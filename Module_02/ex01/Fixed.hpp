#include <iostream>


class Fixed {
    private :
        int _fixedValue;
        static const int _fracBits = 8;
       
    public :
        Fixed ();
        ~Fixed ();
        Fixed (const Fixed& fixed);
        Fixed (const int);
        Fixed (const float);
        Fixed& operator = (const Fixed& fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        

};