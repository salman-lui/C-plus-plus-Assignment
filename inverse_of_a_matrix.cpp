#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int a[3][3],b[3][3], i,j;
    float determinant=0;
    cout<<"Enter elements of 3x3 matrix:\n";
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
      {
        cin>>a[i][j];
      }
      cout<<"\n";
     }
     cout<<"The entered matrix is:\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
             b[i][j]=a[j][i];
            }
            cout<<"\n";
        }

    for(i=0;i<3;i++){
       determinant = determinant + (b[0][i]*(b[1][(i+1)%3]*b[2][(i+2)%3] - b[1][(i+2)%3]*b[2][(i+1)%3]));
    }
    if(determinant==0){
        cout<<"\nInverse of this matrix doesn't exist."<<endl;
    }
    else{
        cout<<"Inverse of matrix is: \n";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cout<<((b[(i+1)%3][(j+1)%3] * b[(i+2)%3][(j+2)%3]) - (b[(i+1)%3][(j+2)%3]*b[(i+2)%3][(j+1)%3]))/determinant<<"\t";
            cout<<"\t";
            }
            cout<<"\n";
        }
    }

    return 0;
}
