# include<iostream>

using namespace std;

int main()

{
	float x,v,m;
	cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
	
	cout<<"\n";
	
	while(x>=0 && x<=10)
	{
	v=75-10*x-1.11*x*x;   
	m=75*x-5*x*x -0.370*x*x*x;
	cout<<"The value of Shear is "<<v;
	cout<<"\nThe value of Moment is "<<m;
	cout<<"\nEnter the value of x: ";
	cin>> x;
	cout<<"\n";
	}
	
	return 0;
	

	
}
