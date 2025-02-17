#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class Point
{
    private:

        /* ------ Members --------------------------------------------------- */

        Fixed _x;
        Fixed _y;
     
        /* ------------------------------------------------------------------ */

    public:
        /* ------ Constructors & Destructors -------------------------------- */

        Point();
        Point(const Fixed &x, const Fixed &y);
        Point(const Point &src);
        ~Point();

        Point &operator=(const Point &src);

        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */

        /* ------------------------------------------------------------------ */
        

        /* ------ Members functions ------------------------------------------*/

        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif /* POINT_HPP */