#include<iostream>
 using namespace std;
int main()
{
	float a,b,c,d,e,f,x,y;
	cout<<"give the value of a";
	cin>>a;
	cout<<"give the value of b";
	cin>>b;
	cout<<"give the value of c";
	cin>>c;
	cout<<"give the value of d";
	cin>>d;
	cout<<"give the value of e";
	cin>>e;
	cout<<"give the value of f";
	cin>>f;
	cout << "Your system equation is the following";
	cout<<a<<"x+"<<b<<"y="<<c<<endl;
	cout<<d<<"x+"<<e<<"y="<<f<<endl;
	if ((a*e)-(b*d)==0)
	
		cout<<"The system has no solution.";
		
	else
	{
		x=(((c*e)-(b*f))/((a*e)-(b*d)));
		y=(((a*f)-(c*d))/((a*e)-(b*d)));
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
}
	
	
