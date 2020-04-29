#include<iostream>
using namespace std;
int main()
{
    cout<<"Name: Md. Salman Rahman\nRoll: 1301099\nSection: B\nGroup: B1\nCourse No: CE-218\nCourse Title: Computer Programming (Sessional)"<<endl;
    int x, y, i, j, k, rowA, colA, rowB, colB, rowC,colC;
    int A[10][10];
    int B[10][10];
    int C[10][10];
    cout<<"Please enter the number of row and column of matrix A and matrix B: "<<endl;
    cout<<"Number of row of A = ";cin>>rowA;
    cout<<"Number of column of A = ";cin>>colA;
    cout<<"Number of row of B = ";cin>>rowB;
    cout<<"Number of column of B = ";cin>>colB;
    if(colA!=rowB){
        cout<<"\nMultiplication of A and B matrix isn't possible.\n";
    }
    else{
    cout<<"Enter the elements of matrix A: \n"<<endl;
    rowC=rowB;
    colC=colB;
    for(i=0;i<rowA;i++){
        for(j=0;j<colA;j++){
            cin>>A[i][j];
        }
        cout<<"\n";
    }
    cout<<"Matrix A: \n"<<endl;
    for(i=0;i<rowA;i++){
        for(j=0;j<colA;j++){
            cout<<"\t"<<A[i][j];
        }
        cout<<"\n";
    }
     cout<<"Enter the elements of matrix B: \n"<<endl;
     for(i=0;i<rowB;i++){
        for(j=0;j<colB;j++){
            cin>>B[i][j];
        }
        cout<<"\n";
    }
    cout<<"Matrix B: \n"<<endl;
    for(i=0;i<rowB;i++){
        for(j=0;j<colB;j++){
            cout<<"\t"<<B[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<rowC;i++){
        for(j=0;j<colC;j++){
            C[i][j]=0;
            for(k=0;k<rowC;k++){
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
            }
        }
    }
    cout<<"\nAfter multiplication the new matrix is: \n"<<endl;
    for(i=0;i<rowC;i++){
        for(j=0;j<colC;j++){
            cout<<"\t"<<C[i][j];
        }
        cout<<"\n";
    }
    }

    return 0;
}
