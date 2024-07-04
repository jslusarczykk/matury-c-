#include <bits/stdc++.h>
using namespace std;

ofstream result("wyniki4.txt") ;
int n;
vector<int> number;
vector<string> word;
bool prime(int z){
   int divisors = 0;//liczba podzielnikow
   for(int i=1; i<=z; i++)
      if(z%i==0)
         divisors++;
   if(divisors==2)
      return true;
   else
      return false;
}
void goldbach(int z){
   if(z%2!=0)
      return;
   int p = 3;
   while(!prime(p) || !prime(z-p))
      p+=2;
   cout<<z<<" "<<p<<" "<<z-p<<endl;
   result<<z<<" "<<p<<" "<<z-p<<endl;
}
void zad1(){
   cout<<"zad1"<<endl;
   result<<"zad1"<<endl;
   for(int i=0; i<n; i++)
      goldbach(number[i]) ;

   cout<<endl;
   result<<endl;
}
void fragment(string s){
   char previous_char='*' ;
   int previous_count = 0;
   int max_count=0;
   char max_char = '%' ;
   for(int i=0; i<s.size(); i++){
      if(s[i]==previous_char){
         previous_count++;
         if(previous_count>max_count){
            max_count=previous_count;
            max_char=previous_char;
         }
      }
      else{
         previous_char=s[i];
         previous_count=1;
      }

   }
   if(max_count==0){
      cout<<s[0]<<" 1"<<endl;
      result<<s[0]<<" 1"<<endl;
      return ;
   }
   for(int i=0; i<max_count; i++){
      cout<<max_char;
      result<<max_char;
   }
   cout<<" "<<max_count<<endl;
   result<<" "<<max_count<<endl;
}
void zad2(){
   cout<<"zad2"<<endl;
   result<<"zad2"<<endl;
   for(int i=0; i<n; i++){
      fragment(word[i]) ;
   }
   cout<<endl;
   result<<endl;
}
bool less_than(int n1, string s1, int n2, string s2){
   if(n1<n2)
      return true;
   if(n1>n2)
      return false;
   if(s1<s2)
      return true;
   else
      return false;
}
void zad3(){
   cout<<"zad3"<<endl;
   result<<"zad3"<<endl;
   int number1 = 0;
   for(int i=1; i<n; i++){
      if(less_than(number[i],word[i],number[number1],word[number1]))
         number1=i;
   }
   cout<<number[number1]<<" "<<word[number1]<<endl;
   result<<number[number1]<<" "<<word[number1]<<endl;
}
int main()
{
   ifstream data("pary.txt");
   n=100;
   number.resize(n);
   word.resize(n);
   for(int i=0; i<n; i++){
      data>>number[i]>>word[i];
   }
   data.close() ;
   zad1();
   zad2();
   zad3();
   result.close() ;

return 0;
}
