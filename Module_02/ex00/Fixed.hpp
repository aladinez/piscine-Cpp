#include <iostream>


class Fixed {
    private :
        int _fixedValue;
        static const int _fracBits = 19;
       
    public :
        Fixed ();
        ~Fixed ();
        Fixed (const Fixed& fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};