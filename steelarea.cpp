#include<iostream>
using namespace std;

int main()

{
	float Mn,a1,As,a2;
	cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
	cout<<"Give Mn and a ";
	cin>>Mn;
	cin>>a1;
	for(;;)
	{
	As=(Mn/60*(15.5-0.5*a1));
	a2=(As*60/(0.85*4*10));
	cout<<"\na1= "<<a1<<"\na2= "<<a2;
	if(a1==a2) break;
	else a1=a2;	
	}
	cout<<"As= "<<As;
	
}
