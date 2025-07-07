#include <iostream>

using namespace std;
void swapFunc(int& num1,int &num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
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
void sortArray(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
                swapFunc(arr[i],arr[j]);
                
        }
    }
       
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(i==size-1)
        {
            cout<<arr[i]<<endl;
            break;            
        }
        cout<<arr[i]<<", ";
    }
}
int kthElement(int arr[],int size,int k)
{
    printArray(arr,size);
    sortArray(arr,size);
    return arr[k-1];
}

int main()
{
    unsigned short size,k;
    cout<<"Enter the size of your array: ";
    cin>>size;
    do
    {
        cout<<"Enter the k value: ";
        cin>>k;    
    }while(k>size);
    int* myArr=new int[size];
    populateArray(myArr,size);
    int element=kthElement(myArr,size,k);
    printArray(myArr,size);
    cout<<k<<"th smallest element in the array is: "<<element;
    return 0;
}
