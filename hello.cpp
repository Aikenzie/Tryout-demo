#include<iostream>
using namespace std;
class a
{
    int a=0;
    int b=0;
    int c;
    public:
    void getdata()
    {
        cout<<"enter a number";
        cin>>a;
        cout<<"enter a number"<<endl;
        cin>>b;
    }
    void display()
    {
         c=a+b;
    cout<<"result is:"<<c;
    }
    

};
int main()
{
    a b1;
    b1.getdata();
    b1.display();
   
    return 0;
}