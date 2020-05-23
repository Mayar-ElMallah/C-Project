#include <iostream>
#include <string.h>
#include<cmath>
#include<math.h>
#include <cstdlib>
using namespace std;
int r1, c1, r2, c2,i, j, k;;
double A[10][10], B[10][10];
double c[10][10]= { 0 };
void Show_A();
void Show_B();
void Matrix_A();
void Matrix_B();
void Summation();
void Subtraction1();
void Subtraction2();
void Multiplication(double D [10][10]);
void Division();
void Transpose();
void Bye ();
string button ;
int main()
{   cout<<"To close the program type (Exit)"<<endl;
    cout << "1-Define(A)"<<endl<<"2-Define(B)"<<endl<< "3-Show A"<<endl;
    cout<<"4-Show B"<<endl<<"5-A-B"<<endl<<"6-B-A"<<endl<<"7-B+A"<<endl; 
    cout<<"8-A*b"<<endl<<"9-A/B"<<endl<< "10-Transpose of A"<<endl;
    while(button!="Exit") {
        cout << "\nSelect the operation";
        cin >> button;
        if (button == "1")
        {
            Matrix_A();
            
        }
        else if (button == "2")
        {
            Matrix_B();
        }
        else if (button =="3")
        {
            Show_A();
           
            
        }
        else if (button =="4")
        {
            Show_B();
            

        }
        else if (button =="5")
        {
            Subtraction1();
        }
        else if (button == "6")
        {
            Subtraction2();
        }

        else if (button == "7")
        {
            Summation();
        }
        else if (button == "8")
        {
            Multiplication(B);
        }
        else if (button=="9")
        {
            Division();
        }
        else if(button=="10")
        {
             Transpose();
        }
}
    
    Bye();

    
        return 0;
    }
   
        
    
    
    void Matrix_A()
    {//To store the value of matrix(A)
        cout << "Enter the number of rows of matrix(A)=" << endl;
        cin >> r1;
        cout << "Enter the number of columns of matrix(A)=" << endl;
        cin >> c1;

        cout << "Enter the values of matrix (A)" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "(a)" << i + 1 << j + 1 << " = ";
                cin >> A[i][j];
            }
        }
    };
    void Matrix_B()
    {
        //To store the value of the matrix(B)
        cout << "Enter the number of rows of matrix(B)=" << endl;
        cin >> r2;
        cout << "Enter the number of columns of matrix(B)=" << endl;
        cin >> c2;
        cout << "Enter the value of matrix (B)" << endl;

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << "(b)" << i + 1 << j + 1 << " = ";
                cin >> B[i][j];
            }
        }
    };
    void Show_A() {
        //To show the matrix (A)
        cout << "Matrix(A) =" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << " " << A[i][j];
                if (j == c1 - 1)
                    cout << endl << endl;
            }
        };
    };

    void Show_B() {
        //To show the matrix (B)
        cout << "Matrix(B) =" << endl;
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << " " << B[i][j];
                if (j == c2 - 1)
                    cout << endl << endl;
            }
        };
    };

    void Summation() {
        double sum[10][10];
        if (c1 != c2 || r1 != r2)
        {
            cout << "Error! Please check that the 2 matrices have the same order" << endl;
            Matrix_A();
            Matrix_B();
            Summation();
        }
        else
        {

            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    sum[i][j] = A[i][j] + B[i][j];

                }
            }
            cout << endl << "Sum of two matrix is: " << endl;
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    cout << " " << sum[i][j];
                    if (j == c2 - 1)
                        cout << endl << endl;
                }
            };

        };
    }
    void Subtraction1() {
        double sub1[10][10];
        if (c1 != c2 || r1 != r2)
        {
            cout << "Error! Please check that the 2 matrices have the same order" << endl;
            Matrix_A();
            Matrix_B();
        }
        else
        {

            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    sub1[i][j] = A[i][j] - B[i][j];

                }
            }
            cout << endl << "Subtraction of two matrix is: " << endl;
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    cout << " " << sub1[i][j];
                    if (j == c2 - 1)
                        cout << endl << endl;
                }
            };

        };
    }
    void Subtraction2() {
        double sub2[10][10];
        if (c1 != c2 || r1 != r2)
        {
            cout << "Error! Please check that the 2 matrices have the same order" << endl;
            Matrix_A();
            Matrix_B();
        }
        else
        {

            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    sub2[i][j] = B[i][j] - A[i][j];

                }
            }
            cout << endl << "Subtraction of two matrix is: " << endl;
            for (int i = 0; i < r2; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    cout << " " << sub2[i][j];
                    if (j == c2 - 1)
                        cout << endl << endl;
                }
            }

        };
    }
    void Bye(){
        exit;
    }
    void Multiplication(double D[10][10]) {
        //To multiply two matrix
    //To initialize an array
         double mult[10][10] = { 0 };
        if (c1 != r2) {
            cout << "Error! c1 is not equal r2" << endl;
            Matrix_A();
            Matrix_B();
            Multiplication(D);
            return;
        }
        else {
            cout << "The Result =" << endl;
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                    for (int k = 0; k < c1; k++)
                    {
                        mult[i][j] += A[i][k] * D[k][j];
                    }
            }
        };
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                cout << " " << mult[i][j];
            if (j = c2 - 1)
                cout << endl << endl;
        }

    }
    void Transpose(){
    //To make the transpose of A
cout<<"C= the transpose of matrix A ="<<endl;
for(int i=0; i<c1; i++)
             { for(int j=0; j<r1; j++)
                        {cout<<" "<<A[j][i];
                        if(j==r1-1)
                         cout<<endl<<endl;
                         }};
}
    void Division() {
        double determinant = 0;
        for (i = 0; i < 3; i++) {
            determinant = determinant + (B[0][i] * (B[1][(i + 1) % 3] * B[2][(i + 2) % 3] - B[1][(i + 2) % 3] * B[2][(i + 1) % 3]));

        }
        if (determinant == 0)
        {
            cout << "Error! B is noninvertable ";
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                c[i][j] = ((B[(j + 1) % 3][(i + 1) % 3] * B[(j + 2) % 3][(i + 2) % 3]) - (B[(j + 1) % 3][(i + 2) % 3] * B[(j + 2) % 3][(i + 1) % 3])) / determinant;

            }
        }
        Multiplication(c);
    }