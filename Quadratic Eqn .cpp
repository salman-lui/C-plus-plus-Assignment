#include<iostream>
#include <cmath>
 using namespace std;
int main()
{
	float a,b,c,x,d;
	cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
	cout<<"give the value of a";
	cin>>a;
	cout<<"give the value of b";
	cin>>b;
	cout<<"give the value of c";
	cin>>c;
	d=pow(b,2)-(4*a*c);
	double positive_root = (-b+ sqrt (d))/(2*a) ;
	double negative_root =(-b- sqrt (d))/(2*a) ;
	if (d==0)
	{
		cout<<"the discriminent is : ";
		cout<<d;
		cout<<"The equation has a single root."; 
	}
	
	cout<<"\nThe roots of the quadratic equation are x="<<negative_root<<"and"<<positive_root;
	return 0;
}
