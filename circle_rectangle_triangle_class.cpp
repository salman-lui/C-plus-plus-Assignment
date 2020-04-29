#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

class figure{
    private:
        float side1, side2, side3, radius;
        char shape[10];
    public:
        figure(float r){
            radius=r;
            strcpy(shape, "circle");
        }
        figure(float s1, float s2){
            side1=s1;
            side2=s2;
            side3=0;
            radius=0;
            strcpy(shape,"rectangle");
        }
        figure(float s1, float s2, float s3){
            side1=s1;
            side2=s2;
            side3=s3;
            radius=0;
            strcpy(shape, "triangle");
        }
        void area(){
            float a, s;
            if(radius==0){
                s=(side1+side2+side3)/2;
                a=sqrt(s*(s-side1)*(s-side2)*(s-side3));
                if(side3==0){
                    a=side1*side2;
                }
            }
            else{
                a=3.1416*radius*radius;
            }
            cout<<"\nArea of the "<<shape<<" is: "<<a<<" sq. unit\n";
        }
};
int main()
{
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    figure circle(14.0);
    figure rectangle(17.0, 23.0);
    figure triangle(17.0, 30.0, 26.0);
    circle.area();
    rectangle.area();
    triangle.area();
}
