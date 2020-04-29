#include<iostream>
using namespace std;
int main()
{
    int x, y, a, b, t;
   cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    cout<<"\nPlease enter two number to find out their GCD and LCD."<<endl;
    int gcd, lcd;
    cin>>x;
    cin>>y;
    a=x;
    b=y;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcd=(x*y)/a;
    cout<<"The GCD (Greatest Common Divisor) of "<<x<<" and "<<y<<" is = "<<gcd<<" \nand LCD (Least Common Divisor) is = "<<lcd<<endl;
    return 0;
}

