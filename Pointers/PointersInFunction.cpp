#include <iostream>
#include <string>
using namespace std;

void printNumber(int *numberptr)
{
    cout<<"The number has the value: "<<*numberptr<<endl;
    cout<<"The number is stored at: "<<numberptr<<endl;
}
void charptr(void *chrptr,char type)
{
    switch(type)
    {
        case 'i':cout<<*((int*)chrptr)<<endl;break;
        case 'c':cout<<*((char*)chrptr)<<endl;break;
    }
}


int main()
{
    int num=7;
    char character='d';
    /*
    printNumber(&num);
    charptr(&character);
    charptr(&num);
    */
   charptr(&num,'i');
   charptr(&character,'c');

    return 0;
}
