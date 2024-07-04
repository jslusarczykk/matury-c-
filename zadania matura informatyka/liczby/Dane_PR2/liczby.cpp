#include <bits/stdc++.h>
using namespace std;
vector<int> number;
ifstream data("przyklad.txt") ;
ofstream result("wyniki4.txt") ;
int n=500;
bool powerof3(int z){
   while(z%3==0)
      z=z/3;
   if(z==1)
      return true;
   return false;
}
void zad1(){
   int counter=0;
   cout<<"zad1"<<endl;
   result<<"zad1"<<endl;
   for(int i=0; i<n; i++)
      if(powerof3(number[i]))
         counter++;
   cout<<counter<<endl;
   result<<counter<<endl;
   cout<<endl;
   result<<endl;
}
int factorial(int k){
   int product = 1;
   for(int i=1; i<=k; i++)
      product*=i;
   return product;
}
int sum_of_factorial(int z){
   int sum=0;
   while(z>0){
      int last_digit=z%10;
      sum+=factorial(last_digit) ;
      z=z/10;
   }
   return sum;
}
void zad2(){
   cout<<"zad2"<<endl;
   result<<"zad2"<<endl;
   for(int i=0; i<n; i++){
      if(number[i]==sum_of_factorial(number[i])){
         cout<<number[i]<<endl;
         result<<number[i]<<endl;
      }
   }
   cout<<endl;
   result<<endl;
}
void zad3(){
   cout<<"zad3"<<endl;
   result<<"zad3"<<endl;
   cout<<endl;
   result<<endl;
}

int main()
{
   number.resize(n) ;
   for(int i=0; i<n; i++){
      data>>number[i] ;
   }
   zad1();
   zad2();
   zad3();
   data.close();
   result.close();
   return 0;
}
