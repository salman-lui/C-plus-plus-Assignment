#include<iostream>
using namespace std;
int main()
{
    int n, fact;
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    cout<<"\nPlease enter a number to find it's factorial."<<endl;
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is = "<<fact;
    return 0;
}
