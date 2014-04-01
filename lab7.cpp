#include<iostream>
using namespace std;

//const m=50;

class student{
    char name[50];
    int roll;
    double grade;
    int n;
public:

    void get(void);
    void display(void);
};

void student::get()
{


    //cin>>n;
    cin>>name;
    cin>>roll;
    cin>>grade;


}
void student::display()
{


    cout<<name<<"\t";
    cout<<roll<<"\t";
    cout<<grade<<"\n";

}

int main()
{
    student order[10];
    int x;
    cout<<"Enter Student no: ";
    cin>>x;
    cout<<"Enter Data: ";
    for(int i=0;i<x;i++){
    order[i].get();
    }
    cout<<"Name\t Roll\t Grade\n";
     for(int i=0;i<x;i++){
     order[i].display();
    }

    return 0;
}
