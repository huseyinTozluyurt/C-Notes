#include <iostream>

using namespace std;
void getMatrix(double**matrix,int rows,int coloums)
{
    for(int i=0;i<rows;i++)
        {
            matrix[i]=new double[coloums];
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<coloums;j++)
            {
                double element;
                cout<<"Enter rows["<<i<<"] /coloums["<<j<<"]";
                cin>>element;
                matrix[i][j]=element;
                
            }
        }
}
void printMatrix(double**matrix,int rows,int coloums)
{
    cout<<"[";
    for(int i=0;i<rows;i++)
    {
        cout<<"[";
        for(int j=0;j<coloums;j++)
        {
            if(j==coloums-1)
                cout<<matrix[i][j];
            else
                cout<<matrix[i][j]<<", ";
            
        }
        if(i==rows-1)
            cout<<"]";
        else
            cout<<"],";
    }
    cout<<"]"<<endl;
}
double sumMatrix(double**matrix,int rows,int coloums)
{
    double total=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<coloums;j++)
            total+=matrix[i][j];
    return total;
}
void deleteMatrix(double** matrix,int rows)
{
    for(int i=0;i<rows;i++)
            delete[] matrix[i];
    delete[] matrix;    
}
int main()
{
    unsigned short rows,coloums;
    cout<<"Rows: ";
    cin>>rows;
    cout<<"Coloums:";
    cin>>coloums;
    double **matrix=new double*[rows];
    getMatrix(matrix,rows,coloums);
    printMatrix(matrix,rows,coloums);
    double matrixSum=sumMatrix(matrix,rows,coloums);
    cout<<"Sum of all the elements of the matrix is: "<<matrixSum;
    deleteMatrix(matrix,rows);
    return 0;
}
