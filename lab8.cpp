#include<iostream>
#include<cstdlib>
using namespace std;

class vector{
        float n[10];
        int a;
        int i,x;
    public:
        void get_v();
        void modi();
        void multi();
        void show();
};

void vector:: get_v()
{
    cout<<"Enter Array's element number: ";
    cin>>x;
    cout<<"Input Array's Value ";
    for(i=1;i<=x;i++)
    {
        cin>>n[i];
    }

    cout<<"\nOutput Array's Value \n";
    for(i=1;i<=x;i++)
    {
        cout<<'\t'<<n[i];
    }
    cout<<'\n';
}


void vector::modi()
{
    int pos;
    float mod;
    cout<<"\nEnter index position for modify ";
    cin>>pos;

    if(pos<=x&&pos>0){
        cout<<"\nEnter value for modify ";
        cin>>mod;
        n[pos]=mod;
        cout<<"\nOutput Array's Value ";
        for(i=1;i<=x;i++)
        {
            cout<<'\t'<<n[i];
        }
        cout<<'\n';
    }
    else
        cout<<"Wrong index !!! \n";
}

void vector:: multi()
{
    cout<<"\nInput Sclar Value : ";
    cin>>a;
    for(i=1;i<=x;i++)
    {
        n[i]=a*n[i];
    }
    cout<<"\nOutput Array's Value : ";
    for(i=1;i<=x;i++)
    {
        cout<<'\t'<<n[i];
    }
}

int main()
{
    vector o;
    o.get_v();
    cout<<'\n';
    while(1){
    cout<<'\n'<<"Please Choose 1 for modify: "<<'\n';
    cout<<"Please Choose 2 for multifly with scalar value: "<<'\n';
    cout<<"Please Choose 3 for exit: "<<'\n';
    int p;
    cin>> p;
    switch(p)
        {
            case 1: o.modi();
            break;
            case 2:o.multi();
            break;
            case 3: exit(0);

        }
    }
}

