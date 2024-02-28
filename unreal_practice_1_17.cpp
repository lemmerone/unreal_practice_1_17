#include <iostream>
#include <cmath>

class Vector
{
private:
    double x;
    double y;
    double z;
public:
    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    void show()
    {
        std::cout << x << " " << y << " " << z << "\n";
    }

    double lenght()
    {
        return std::sqrt((x * x) + (y * y) + (z * z));
    }
};

int main()
{
    Vector myClass(1, 2, 3);
    myClass.show();
    std::cout << myClass.lenght();
}
