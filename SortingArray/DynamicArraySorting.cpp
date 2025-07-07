#include <iostream>

using namespace std;
void swap(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;
}
void populateArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int element;
        cout<<i+1<<". element of the array: ";
        cin>>element;
        arr[i]=element;
    }
}
void sortArray(int array[],int size)
{
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++)
        {
            if(array[i]>array[j])
            {
                swap(array[i],array[j]);
            }
        }
        
    }
}
void printArr(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i==size-1)
        {
            cout<<array[i]<<endl;
            break;            
        }
        cout<<array[i]<<", ";
    }
}
int main()
{
    cout<<"Enter the size of your array: ";
    int size;
    cin>>size;
    int* myArr=new int[size];
    populateArray(myArr,size);
    printArr(myArr,size);
    sortArray(myArr,size);
    printArr(myArr,size);
    return 0;
}
