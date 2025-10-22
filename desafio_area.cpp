// PI = 3.1415
// PI * raio * raio

#include <iostream>
using namespace std;

int main()
{
    double radius;
    const double PI = 3.141592;
    
    cout << "Enter radius: ";
    cin >> radius;

    double area = PI * radius * radius;
    cout << "Area is " << area;

    return 0;
}