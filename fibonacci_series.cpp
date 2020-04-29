#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long limit;
   	cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B2\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    cout<<"Enter the limit for Fibonacci Series: ";
    cin>>limit;
    cout<<"Fibonacci series upto: "<<limit<<"\n 0, 1 ";
    long f0=0, f1=1;
    while(true){
        long f2=f0+f1;
        if(f2>limit){
            break;
        }
        cout<<" ,"<<f2;
        f0=f1;
        f1=f2;
    }
    return 0;
}
