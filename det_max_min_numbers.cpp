#include<iostream>
using namespace std;
int main()
{
    cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
    int i=0,j=0, a, b,n, c, numbers[200];
    cout<<"Input numbers as many as you wish and this program will find maximum and minimum from your numbers."<<endl;
    cout<<"\nHow many number do you want to input= "; cin>>n;
    cout<<"\nInput numbers: "<<endl;
    while(j!=n){
        cin>>numbers[i];
        i++;
        j++;
    }
    int max=numbers[0];
    for( i=0; i<j; i++){
            if(numbers[i]>max){
                max=numbers[i];
            }
    }
    int min=numbers[0];
    for( i=0; i<j; i++){
            if(numbers[i]<min){
                min=numbers[i];
            }
    }
    cout<<"\nMaximum number= "<<max<<" and minimum number= "<<min<<endl;
    return 0;

}
