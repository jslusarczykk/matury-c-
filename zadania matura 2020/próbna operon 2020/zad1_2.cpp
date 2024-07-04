#include <bits/stdc++.h>
using namespace std;
bool dwojkowa(int n){
   string s,t;
   while(n>0){
      s=s+char(n%2+'0');
      t=char(n%2+'0')+t;
      n=n/2;
   }
   if(s==t)
      return true;
   return false;
}
bool dziesietna(int n){
   string s,t;
   while(n>0){
      s=s+char(n%10+'0');
      t=char(n%10+'0')+t;
      n=n/10;
   }
   if(s==t)
      return true;
   return false;
}
int main()
{
   int suma=0;
   for(int i=1; i<=1000000; i++){
      if(dziesietna(i)&&dwojkowa(i)){
         cout<<i<<endl;
         suma=suma+i;
      }
   }
cout<<suma;
return 0;
}
