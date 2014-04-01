#include<iostream>
#include<cstring>
using namespace std;        //perfect for two books
class stock
{
    char author[50];
    char title[50];
    char pub[50];
    double price;
    int numcopies;
public:
    stock();
    int access_title(char a[]);
    void input();
    void getdata(int);
};
stock::stock()
{
        char author[50]={"abc"};
        char title[50]={"efg"};
        char pub[50]={"hij"};
        price=500;
        numcopies=50;
}
int stock::access_title(char a[])
{
        if(strcmp(title,a))
                return 0;
        else return 1;
}
void stock::getdata(int num)
{
               if(numcopies>=num){
                              cout<<"\nCost of "<<num<<" books is Rs. "<<(price*num);
                              cout<<"\n\nNo of coppy remains: "<<(numcopies-num)<<"\n";
                }
               else
                  cout<<"\nSorry! These many copies are unavailable!";
}
void stock::input()
{
               cout<<"\nTitle: ";
               cin>>title;
               cout<<"\nAuthor: ";
               cin>>author;
               cout<<"\nPublisher: ";
               cin>>pub;
               cout<<"\nPrices: ";
               cin>>price;
               cout<<"\ncopies available: ";
               cin>>numcopies;
}

int main()
{
   stock obj[20];
   int n,x;
   char ttle[50];
   cout<<"Number of books: ";
   cin>>x;
   cout<<"\nEnter details of books";
   for(int i=0;i<x;++i)
               obj[i].input();

   cout<<endl;
   cout<<"\n Enter title of required book\n";
   cin>>ttle;

   for(int i=0;i<x;i++)
   {
               if(obj[i].access_title(ttle))
               {
                    cout<<"\nHow many copies? ";
                    cin>>n;
                    obj[i].getdata(n);
                    break;
               }
           /*   else if(obj[i+1].access_title(ttle))   //my code for searching
                 {
                    cout<<"\nHow many copies? ";
                    cin>>n;
                    obj[i].getdata(n);
                    break;
               } */
            // else {cout<<"Book unavailable";}
   }
}
