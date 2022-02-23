// ==== operator overloading ====
// link : http://websites.umich.edu/~eecs381/generalFAQ/Operator_Overloading.html
// ==== ==================== ====
#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

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
        Fixed& operator ++ (); // prefix
        Fixed operator ++ (int);  //postfix
        Fixed& operator -- ();
        Fixed operator -- (int);
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
        // a static member is related to the class only, independent on the object.
        static Fixed& min(Fixed& f1, Fixed& f2);
        static const Fixed& min(const Fixed& f1, const Fixed& f2);
        static Fixed& max(Fixed& f1, Fixed& f2);
        static const Fixed& max(const Fixed& f1, const Fixed& f2);
        

};
std::ostream& operator << (std::ostream& os, const Fixed& fixed);

#endif