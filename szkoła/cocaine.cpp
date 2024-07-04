#include <bits/stdc++.h>
using namespace std;
int main(){
   int n; cin>>n;
   int tab[n];
   for(int i=0; i<n; i++){
      cin>>tab[i];
   }
   int dlugosc=0;
   int max_dlugosc=0;
   int pozycja1=0;
   for(int i=0; i<n; i++){
      if(tab[i]==1){
         pozycja1=i;
         dlugosc=1;
      }
      for(int j=1; j<n; j++){
         if(tab[pozycja1]<tab[pozycja1+j])
            dlugosc++;
         else{
            if(max_dlugosc<dlugosc)
               max_dlugosc=dlugosc;
         }
      }
      dlugosc=0;
   }
   cout<<max_dlugosc;
return 0;
}
