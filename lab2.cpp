#include<iostream>
using namespace std;

inline void large(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest\n";
        }
        else
        {
            cout<<"c is greatest\n";
        }
    }
    else if(a<b)
    {
       if(b>c)
        {
            cout<<"b is greatest\n";
        }
        else
        {
            cout<<"c is greatest\n";
        }
    }
    else
    {
        if(a==0&&b==0&&c==0)
            cout<<"a, b, c all are equal \n";
    }

}

int main()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    cout<<"\nEnter the value of c: ";
    cin>>c;
    cout<<"\n\n";
    large(a,b,c);
    return 0;
}
