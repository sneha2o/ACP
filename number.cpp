#include<iostream>
using namespace std;
class attitude1
{
 public:
   void display(double);
};
class attitude2
{
 public:
   void display(double);
};
void attitude1::display(double d)
{
 cout<<"Negative attitude is the key for"<<d<<"% failure"<<endl;
 
}
void attitude2::display(double d)
{
 cout<<"Positive attitude is the key for"<<d<<"% success"<<endl;
}
int main()
{
 attitude1 a1;
 attitude2 a2;
 double x;
 cout<<"Enter the Number"<<endl;
 cin>>x;
 a1.display(x);
 a2.display(x);
 return 0;
}

