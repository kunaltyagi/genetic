#include "airfoil.h"

using namespace std;

Vect3& Vect3::operator+(Vect3 rhs)
{
    Vect3 tmp;
    tmp.x = this->x + rhs.x;
    tmp.y = this->y + rhs.y;
    tmp.z = this->z + rhs.z;
    return tmp
}
Vect3& Vect3::operator-(Vect3 rhs)
{
    Vect3 tmp;
    tmp.x = this->x - rhs.x;
    tmp.y = this->y - rhs.y;
    tmp.z = this->z - rhs.z;
    return tmp
}
Vect3& Vect3::operator*(Vect3 rhs)
{
    Vect3 tmp;
    tmp.x = this->x * rhs.x;
    tmp.y = this->y * rhs.y;
    tmp.z = this->z * rhs.z;
    return tmp
}
