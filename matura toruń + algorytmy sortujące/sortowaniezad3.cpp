#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   int maksindeks=0;
   vector tab[n]={};
   for(int i=1; i<=n; i++){
      cin>>tab[i];
   }
   for(int i=1; i<=n; i++){
      if(tab[i]>maksindeks)
         maksindeks=i;
   }
   swap(tab[n],tab[maksindeks]);
   for(int i=1; i<n; i++){
      if(tab[i]>tab[i+1])
         swap(tab[i],tab[i+2]);
   }
    for(int i=1; i<=n; i++){
      cout<<tab[i]<<" ";
   }
return 0;
}
