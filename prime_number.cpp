#include<iostream>
using namespace std;
int main()
{
    int i, j, c, limit;
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    cout<<"Please enter a number to find all prime numbers upto it."<<endl;
    cin>>limit;
    cout<<"\nThe prime numbers upto "<<limit<<" are: ";
    for(i=2;i<=limit;i++){
        c=0;
        for(j=i-1;j>1;j--){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
