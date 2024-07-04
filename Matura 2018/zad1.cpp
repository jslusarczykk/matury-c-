#include <bits/stdc++.h>
using namespace std;
const int n=10;
int T[n+1]={0,3,5,7,8,9,13,33,37,40,43};
bool F(int T[], int x){
   int p=1;
   int k=n;
   while(p<=k){
      int s=(p+k)/2;
      if(T[s]==x){
         return true;
      }
      else  {
         if(T[s]<x)
            p=s+1;
         else
            k=s-1;
      }
   }
   return false;
}
int fib(int n){
   if(n==1||n==2)
      return 1;
   else
      return fib(n-1) + fib(n-2);
}
int fib2(int n){
   int k=3;
   int a=1,b=1,c=2;
   if(n==1||n==2)
      return 1;
   while(k<=n){
      if(k==n){
         break;
      }
      int x=c;
      a=b;
      b=x;
      k++;
      c=a+b;
   }
   return c;
}
int main(){
  // for(int i=0; i<=20; i++){
    //  cout<<i<<" "<<F(T,i)<<endl;
   //}
   for(int j=1; j<=20; j++){
      cout<<j<<" "<<fib(j)<<" "<<fib2(j)<<endl;
   }
   return 0;
}
