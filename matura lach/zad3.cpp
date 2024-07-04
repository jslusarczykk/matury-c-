#include <bits/stdc++.h>
using namespace std;
const int N=10;
int tab[N+1];
bool rownasilni(int x){
   for(int i=1; i<=N; i++){
      if(x==tab[i])
         return true;
   }
   return false;
}
bool silna(int y){
   if(rownasilni(y))
      return true;
  // While
}
int main(){
tab[0]=1;
for(int i=1; i<=N; i++){
   tab[i]=tab[i-1]*i;
   cout<<tab[i]<<" "<<i<<endl;
}

return 0;
}
