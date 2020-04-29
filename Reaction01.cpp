#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double Ra, Rb, p, b, a, w;
	cout<<"Please enter the value of load, p: " ;
	cin>>p;
	cout<<"Please enter the value of b: " ;cin>>b;
	cout<<"Please enter the value of a: " ;cin>>a;
	cout<<"Please enter the value of w: " ;cin>>w;
	Ra=(-(p*b)/a)+((w*a)/2);
	Rb=((w*a)/2)+((p*b)/a)+p;
	cout<<"The value of Ra is= "<<Ra<<endl;
	cout<<"The value of Rb is= "<<Rb<<endl;
	return 0;
}
