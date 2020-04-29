#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double FEM_AB, FEM_BA, W, L;
	cout<<"Please enter the value of W: " ;cin>>W;
	cout<<"Please enter the value of L: " ;cin>>L;
	FEM_AB=(5*W*L*L)/96;
	FEM_BA=-(5*W*L*L)/96;
	cout<<"The value of FEM_AB is= "<<FEM_AB<<endl;
	cout<<"The value of FEM_BA is= "<<FEM_BA<<endl;
	return 0;
}
