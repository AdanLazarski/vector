
#include <iostream>

class Vector
{
    private:
        int x, y, z;
    
    public:
    
        Vector(int x_val, int y_val, int z_val) :x(x_val), y(y_val), z(z_val) {} 
    
    void ShowValues() 
    {
        std::cout << "values of x, y, z: " << x << ", " << y << ", " << z;
    }
    double getLength()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

int main()
{
    Vector v(1, 2, 3);
    v.ShowValues();
    std::cout <<"\n "<<"length of vector is : " << v.getLength();
}
