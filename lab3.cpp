#include<iostream>

using namespace std;

//const m=50;

class item{
    int item_code[50];
    int item_cost[50];
    int count;
public:
    void start_count(void){count= 0;}  //initialize to count 0
    void get_item(void);
    void get_sum(void);
    void remove(void);
    void display(void);
};

 //============================================================================

void item::get_item(void)      // assigning value to members of item
{
    cout<<"Enter item code: ";
    cin>>item_code[count];
    cout<<"Enter item cost: ";
    cin>>item_cost[count];
    count++;
}
void item::get_sum(void)        // displaying total value to members of item
{
    float sum=0;
    for(int i=0;i<count;i++)
    {
        sum=sum+item_cost[i];
    }
    cout<<"\n Total value: "<<sum<<"\n";
}

void item::remove(void)         // removing a specific item
{
    int x;
    cout<<"Enter item code: ";
    cin>>x;
    for(int i=0;i<count;i++)
    {
        if(x<=count){
            if(item_code[i]==x)
                item_cost[i]=0;
        }
        else {cout<<"\nItem number doesn't match\n"; break;}
    }
}

void item::display(void)        // displaying  value to members of item
{
    cout<<"\nCode   price\n";

    for(int i=0;i<count;i++)
    {
        cout<<"\n"<<item_code[i];
        cout<<"\t"<<item_cost[i];
    }
    cout<<"\n";
}

 //============================================================================

int main()
{
    item order;
    order.start_count();
    int x;
    do
    {
        cout<<"\nYou can do the following: "<<"Enter appropiate number\n";
        cout<<"\n1 : Add an item\n";
        cout<<"\n2 : Display total value\n";
        cout<<"\n3 : Delete an item\n";
        cout<<"\n4 : Display all item\n";
        cout<<"\n5 : Exit\n\n";

        cin>>x;
        switch(x)
        {
            case 1: order.get_item();break;
            case 2: order.get_sum();break;
            case 3: order.remove();break;
            case 4: order.display();break;
            case 5: break;
            default : cout<<"Error in input; Try again\n";

        }
    }while(x !=5);
    return 0;
}
