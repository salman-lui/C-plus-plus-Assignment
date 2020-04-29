#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double FEM_AB, FEM_BA, W, L;
	cout<<"Please enter the value of W and L"<<endl;
	cin>>W;
	cin>>L;
	FEM_AB=(W*L*L)/12;
	FEM_BA=-(W*L*L)/12;
	cout<<"The value of FEMA is= "<<FEM_AB<<endl;
	cout<<"The value of FEMB is= "<<FEM_BA<<endl;
	return 0;
}
