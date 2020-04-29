#include<iostream>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int n, i, sum=0;
    cout<<"Enter the positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The summation of series upto "<<n<<" is: "<<sum<<endl;
    return 0;
}
