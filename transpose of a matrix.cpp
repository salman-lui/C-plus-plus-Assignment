#include<iostream>
using namespace std;
int main()
{
     cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int x, y, i, j, row, col;
    int A[10][10];
    int B[10][10];
    cout<<"Please enter the number of row and column of matrix A: "<<endl;
    cout<<"Number of row = ";cin>>row;
    cout<<"Number of column = ";cin>>col;
    cout<<"Enter the elements of matrix A: \n"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>A[i][j];
        }
        cout<<"\n";
    }
    cout<<"Matrix A: \n"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\t"<<A[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
             B[i][j]=A[j][i];
        }
        cout<<"\n";
    }
     cout<<"The transpose of matrix A: \n"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\t"<<B[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
