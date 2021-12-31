// ==== operator overloading ====
// link : http://websites.umich.edu/~eecs381/generalFAQ/Operator_Overloading.html
// ==== ==================== ====
#include <iostream>
#include <ostream>

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
        Fixed operator + (const Fixed& fixed);
        Fixed operator - (const Fixed& fixed);
        Fixed operator * (const Fixed& fixed);
        Fixed operator / (const Fixed& fixed);
        
        bool operator > (const Fixed& fixed) const;
        bool operator < (const Fixed& fixed) const;
        bool operator >= (const Fixed& fixed) const;
        bool operator <= (const Fixed& fixed) const;
        bool operator == (const Fixed& fixed) const;
        bool operator != (const Fixed& fixed) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        int toInt( void ) const;
        float toFloat( void ) const;
        

};
std::ostream& operator << (std::ostream& os, const Fixed& fixed);