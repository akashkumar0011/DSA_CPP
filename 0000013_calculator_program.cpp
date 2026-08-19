#include<iostream>
using namespace std;

   int main()
{
   char op;
   float num1,num2;

   cout<<"enter an operator : (+,-,*,/) : ";
   cin>>op;

   cout<<"enter two number : ";
   cin>>num1>>num2;

   switch(op)
{
   case'+' :
   cout<<"result = " <<num1+num2;
   break;

   case'-' :
   cout<<"result = " <<num1-num2;
   break;
   
   case'*' :
   cout<<"result = " <<num1*num2;
   break;

   case'/' :
   if(num2 != 0 )
   cout<<"result = " <<num1/num2;

   else
   cout<<"cannot devide by zero ";
   break;

   defoult :
   cout<<"invalid operator";
}
   
return 0;
}