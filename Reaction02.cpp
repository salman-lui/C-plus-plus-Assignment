#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double Ra, Rb, p, a, M;
	cout<<"Please enter the value of load, p: " ;cin>>p;
	cout<<"Please enter the value of a: " ;cin>>a;
	cout<<"Please enter the value of M: " ;cin>>M;
	Ra=((2*p*a)-M)/(3*a);
	Rb=(p/3)+(M/(3*a));
	cout<<"The value of Ra is= "<<Ra<<endl;
	cout<<"The value of Rb is= "<<Rb<<endl;
	return 0;
}
