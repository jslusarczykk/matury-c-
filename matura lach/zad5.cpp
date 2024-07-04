#include <bits/stdc++.h>
using namespace std;
int a(int n){
   if(n%2==0)
      return 1;
   return -1;
}
int b(int n){
   return n;
}
int c(int n){
   if(n==1)
      return -1;
   return a(n)*b(n)+c(n-1);
}
int sigma(int n){
   int suma=0;
   for(int i=1; i<=n; i++){
      suma+=c(i);
   }
   return suma;
}
int msigma(int n){
   int suma=0;
   for(int i=1; i<=n; i++){
      if(c(i)<0)
         suma+=c(i);
   }
   return suma;
}
int wsigma(int n){
   int suma=0;
   for(int i=1; i<=n; i++){
      if(c(i)>0)
         suma+=c(i);
   }
   return suma;
}
int main(){
   int n=120;
   cout<<a(n)<<" "<<b(n)<<" "<<c(n)<<" "<<msigma(n)<<" "<<wsigma(n)<<" "<<sigma(n)<<endl;
return 0;
}
