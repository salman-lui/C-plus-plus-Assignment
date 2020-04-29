# include<iostream>

using namespace std;

int main()

{
	float b,r,j,DOI;
	cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;

	cout<<"\nEnter the value of b: ";
	cin>> b;
	cout<<"\nEnter the value of r: ";
	cin>> r;
	cout<<"\nEnter the value of j: ";
	cin>> j;
	DOI=(b+r-(2*j));
	cout<< "DOI="<<DOI<< "\n";
if ((b+r)==(2*j))
{cout<<"The truss is determinant & stable.";
}
else if ((b+r)>(2*j))
{cout<<"The truss is indeterminant & stable.";
}
else {cout<<"The truss is determinant & unstable.";
} 
	return 0;	
}
