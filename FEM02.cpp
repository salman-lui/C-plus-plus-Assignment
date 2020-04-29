#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double FEM_AB, FEM_BA, p, b, a, L;
	cout<<"Please enter the value of load, p: " ;cin>>p;
	cout<<"Please enter the value of b: " ;cin>>b;
	cout<<"Please enter the value of a: " ;cin>>a;
	cout<<"Please enter the value of L: " ;cin>>L;
	FEM_AB=(p*b*b*a)/(L*L);
	FEM_BA=-(p*a*a*b)/(L*L);
	cout<<"The value of FEM_AB is= "<<FEM_AB<<endl;
	cout<<"The value of FEM_BA is= "<<FEM_BA<<endl;
	return 0;
}
