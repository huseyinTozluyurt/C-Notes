#include <iostream>

using namespace std;
void swap(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;
}
void swaP(int array[])
{
    for(int i=0;i<5;i++){
        for(int j=i+1;j<6;j++)
        {
            if(array[i]>array[j])
            {
                swap(array[i],array[j]);
            }
        }
        
    }
}
void printArr(int array[])
{
    for(int i=0;i<6;i++)
    {
        if(i==5)
        {
            cout<<array[i]<<endl;
            break;            
        }
        cout<<array[i]<<", ";
    }
}
int main()
{
    int arr[6]={9,12,3,2,5,7};
    printArr(arr);
    swaP(arr);
    printArr(arr);
    return 0;
}
