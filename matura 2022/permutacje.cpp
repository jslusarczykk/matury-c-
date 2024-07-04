#include <bits/stdc++.h>
using namespace std;
const int n=6;
int funkcja(int tab[]){
   int zmienna=0;
   int liczniki[n+1]={0};
   for(int i=0; i<n; i++){
      if(tab[i]<n+1){
         liczniki[tab[i]]++;
      }
   }
   for(int i=1; i<=n; i++){
      if(liczniki[i]>0){
         zmienna++;
      }
   }
   return n-zmienna;
}

int main()
{
int tab[n]={2,6,5,4,3,1};
cout<<funkcja(tab);
return 0;
}
