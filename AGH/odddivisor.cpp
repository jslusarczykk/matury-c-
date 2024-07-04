#include <bits/stdc++.h>
using namespace std;
int podzielnik(int x){
   for(int i=x; i>=1; i--){
      if(x%i==0&&i%2!=0){
         return i;
      }
   }
}
int main(){
int N; cin>>N;
int suma=0;
for(int i=1; i<=N; i++)
   suma+=podzielnik(i);
cout<<suma;
return 0;
}
