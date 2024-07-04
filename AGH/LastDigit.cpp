#include <bits/stdc++.h>
using namespace std;
long long czastk(long long x){
   long long suma=x;
   while(x>0){
      suma+=x/10;
      x=x/10;
   }
   return suma;
}
int main(){
long long S; cin>>S;
long long lewy=1;
long long prawy=1000000000000000000LL;
long long srodek=(lewy+prawy)/2;
prawy=srodek;
srodek=(lewy+prawy)/2;
cout<<czastk(srodek);
return 0;
}
