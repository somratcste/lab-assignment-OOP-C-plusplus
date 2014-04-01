#include<iostream>
using namespace std;
class power{
    int n;
    double m;
public:
    void get();
    double pow();
};

void power::get()
{

    cout<<"Enter the value of number: ";
    cin>> m;
    cout<<"Enter the value of power: ";
    cin>> n;

}

double power::pow()
{
    double x=1.0;
    for(int i=0;i<n;i++)
        x=x*m;
    cout<<m<<" to the power "<<n<<" is "<<x;
}

int main()
{
    power ob;
    ob.get();
    ob.pow();
    return 0;
}
