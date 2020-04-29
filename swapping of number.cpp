#include<iostream>
using namespace std;
int main()
{
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int a, b;
    cout<<"Please enter the values of a and b: "<<endl;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter swaping value of a= "<<a<<" and value of b= "<<b<<endl;
    return 0;

}
