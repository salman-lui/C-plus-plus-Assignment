#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B2\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    float n, i, sum=0;
    cout<<"Enter the positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+pow(5,i);
    }
    cout<<"The summation of series upto "<<n<<" is: "<<sum<<endl;
    return 0;
}
