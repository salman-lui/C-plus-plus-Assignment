#include<iostream>
using namespace std;
const double PI=3.1416;
int circle(double r){
    double area, perimeter;
    area = PI*r*r;
    perimeter = 2*PI*r;
    cout<<"The area of the circle is = "<<area<<" sq unit"<<endl;
    cout<<"The perimeter of the circle is = "<<perimeter<<" unit"<<endl;
}
int main()
{
    double r;
    cout<<"Name: Md. Zub\taer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    cout<<"Please enter the radius of the circle: \n";
    cin>>r;
    circle(r);
    return 0;
}
