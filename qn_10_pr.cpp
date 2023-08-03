#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class Error
{
    int err_code;
    string err_desc;

public:
    Error(int c, string errMsg)
    {
        err_code = c;
        err_desc = errMsg;
    }
    void err_display(void)
    {
        cout << "Error Code: " << err_code << endl
             << "Error Description: " << err_desc << endl;
    }
};
class Triangle
{
    float side1, side2, side3;

public:
    Triangle() {}
    Triangle(float a, float b, float c)
    {
        try
        {
            if (a <= 0 || b <= 0 || c <= 0)
            {
                throw Error(001, "Sides cannot be negative or 0!");
            }
            if (a >= b + c || b >= a + c || c >= a + b)
            {
                throw Error(002, "Either of side exceeds the sum of other two sides!");
            }
            side1 = a;
            side2 = b;
            side3 = c;
        }
        catch (Error e)
        {
            e.err_display();
        }
    }
    float area()
    {
        float s = (side1 + side2 + side3) / 2;
        float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        return area;
    }
    float area(float base, float height)
    {
        try
        {
            float area = (base * height) / 2;
            if (area == 0)
            {
                throw Error(003, "Invalid Base or Height of Right triangle ");
            }
            return area;
        }
        catch (Error e)
        {
            e.err_display();
        }
    }
};

int main()
{
    Triangle DEF(0, 3, 4);
    Triangle ABC(3, 4, 5);
    float area = ABC.area();
    cout << "Area of general Trianle ABC is " << area << endl;
    Triangle PQR;
    float rArea = PQR.area(4, 6);
    cout << "Area of Right angled Trianle ABC is " << rArea << endl;
}