#include <iostream>
#include<cmath>
using namespace std;
int main()
{ int r1=10 , c1=10 , r2=10, c2=10;
  float A [r1][c1] , B[r2][c2];
    //To store the value of matrix(A)
    cout<<"Enter the number of rows of matrix(A)="<<endl;
    cin>>r1;
     cout<<"Enter the number of columns of matrix(A)="<<endl;
    cin>>c1;
    
    cout<<"Enter the value of matrix (A)"<<endl;
for(int i=0; i<r1; i++)
                       { for(int j=0; j<c1; j++)
                              {cout<<"(a) of row = "<<i+1<<" and column = "<<j+1<<" = ";
                               cin>>A[i][j]; }};
//To store the value of the matrix(B)
    cout<<"Enter the number of rows of matrix(B)="<<endl;
    cin>>r2;
     cout<<"Enter the number of columns of matrix(B)="<<endl;
    cin>>c2;
    cout<<"Enter the value of matrix (B)"<<endl;

for(int i=0; i<r2; i++)
                       { for(int j=0; j<c2; j++)
                              {cout<<"(b) of row = "<<i+1<<" and column = "<<j+1<<" = ";
                               cin>>B[i][j]; }};                            




return 0;}