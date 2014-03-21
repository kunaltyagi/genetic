#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Vect3
{
public:
    float x;
    float y;
    float z;
    Vect3& operator+(Vect3 rhs);
    Vect3& operator-(Vect3 rhs);
    Vect3& operator*(Vect3 rhs);
    float magnitude();
    Vect3 direction();

}

class point
{
    Vect3 r;
    Vect3 streamline;
    float rotation;
}
