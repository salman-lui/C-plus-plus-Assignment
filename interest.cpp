#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    double p, r, t, total_interest;
    cout<<"\nPlease enter the amount of Principal in Taka = ";
    cin>>p;
    cout<<"Please enter the interest rate = ";
    cin>>r;
    cout<<"Please enter the number of years = ";
    cin>>t;
    total_interest=p*(pow((1+(r/100)), t))-p;
    cout<<"\nCompound Interst = "<<total_interest<<" Taka"<<endl;
    return 0;
}
