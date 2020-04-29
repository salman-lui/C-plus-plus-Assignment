#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int n, x, i;
    cout<<"Enter the values of x and n: \n";
    cin>>x>>n;
    double sum=x;
    for(i=2;i<=n;i++){
        sum=sum+pow(x, i);
    }
    cout<<"The summation of series upto "<<n<<" is: "<<sum<<endl;
    return 0;
}
