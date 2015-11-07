#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    long int dno,b,r;
    int i,j;
    int bin[100];
    cout<<"\n Enter a +ve Decimal number:-\n\n\t\t";
    cin>>dno;
    b=dno;
    for(i=0;b!=0;i++)
    {
        r=b%2;
        bin[i]=r;
        b/=2;
    }
    j=i-1;
    cout<<"\n The binary value for "<<dno<<" is "<<endl<<"\n\t";
    for(i=0;i<=j;i++)
    cout<<bin[i];
    getch();
    system("cls");
    exit(0);
}
