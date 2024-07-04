#include <bits/stdc++.h>
using namespace std;
int sumD(int n){
   int sumaD=0;
   for(int i=1; i<n; i++){
      if(n%i==0)
         sumaD+=i;
   }
   return sumaD;
}
bool towarzyska(int n){
   int m=n;
   for(int j=1; j<=28; j++){
      n=sumD(n);
      if(n==m)
         return true;
   }
    return false;
}
int rzad(int n){
   int m=n;
   for(int j=1; j<=28; j++){
      n=sumD(n);
      if(n==m)
         return j;
   }
    return 0;
}
int main(){
   int x; cin>>x;
   cout<<towarzyska(x)<<" "<<rzad(x)<<endl;
return 0;
}
