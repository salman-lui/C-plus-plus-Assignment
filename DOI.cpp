#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
	double DOI, r, n;
	cout<<"Please enter the number of unknown reaction, r: " ;cin>>r;
	cout<<"Please enter the number of joints or supports, n: " ;cin>>n;
	if(r==(3*n)){
		cout<<"The structure is determinate and stable"<<endl;
	}
	else if(r>(3*n)){
		cout<<"The structure is indeterminate and more stable"<<endl;
	}
	else if(r<(3*n)){
		cout<<"The structure is determinate but unstable"<<endl;
	}
	DOI=(r-(3*n));
	cout<<"The value of DOI is= "<<DOI<<endl;
	return 0;
}
