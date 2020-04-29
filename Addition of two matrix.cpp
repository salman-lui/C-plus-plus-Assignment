#include<iostream>
using namespace std;
int main()
{
     cout<<"Name: Md. Zubaer Ahammed\nRoll: 1201062\nBatch: 12\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)\n"<<endl;
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
     cout<<"Enter the elements of matrix B: \n"<<endl;
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>B[i][j];
        }
        cout<<"\n";
    }
    cout<<"Matrix B: \n"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\t"<<B[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nAfter addition the new matrix is: \n"<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"\t"<<A[i][j]+B[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
