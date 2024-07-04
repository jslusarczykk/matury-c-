#include <bits/stdc++.h>
using namespace std;
int nwd(int a, int b){
   for(int i=a; i>0; i--){
      if(b%i==0&&a%i==0)
         return i;
   }
}
int main(){
   for(int a=1; a<=998; a++){
      for(int b=a+1; b<=999; b++){
         for(int c=b+1; c<=1000; c++){
            if(a*a+b*b==c*c){
               cout<<a<<" "<<b<<" "<<c<<" ";
               if(nwd(a,b)==1)
                  cout<<"pierwotna"<<endl;
               else
                  cout<<""<<endl;
            }
         }
      }
   }
return 0;
}
