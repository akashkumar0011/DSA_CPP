#include<iostream>
using namespace std;

   int main()
{
   char ch;
   cout<<"enter character : ";
   cin>>ch;
   if(ch>='a'&&ch<='z')
{
   cout<<"lowercase"<<endl;
}
   else
{  
   cout<<"uppercase"<<endl;
}
   return 0;
}