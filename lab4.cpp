#include<iostream>
using namespace std;

//const m=50;

class student{
    char *name[5];
    int roll[5];
    double grade[5];
    int n;
public:

    void get(void);
    void display(void);
};

void student::get()
{

    cout<<"Enter Data: ";
    //cin>>n;
    for(int i=0;i<3;i++){
    cin>>name[i];
    cin>>roll[i];
    cin>>grade[i];
    }
    return;

}
void student::display()
{
    cout<<"Name\t Roll\t Grade\n";
    for(int i=0;i<3;i++){
    cout<<name[i]<<"\t";
    cout<<roll[i]<<"\t";
    cout<<grade[i]<<"\n";
    }
    return;
}

int main()
{
    student order;
    int x;
    do
    {
        cout<<"\nYou can do the following:"<<" Enter appropiate number\n";
        cout<<"\n1 : Add Student Name roll grade\n";
        cout<<"\n2 : Display all item\n";
        cout<<"\n3 : Exit\n\n";

        cin>>x;
        switch(x)
        {
            case 1: order.get();break;
            case 2: order.display();break;
            case 3: break;
            default : cout<<"Error in input; Try again\n";

        }
    }while(x!=3);
    return 0;
}
