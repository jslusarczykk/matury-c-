#include <bits/stdc++.h>
using namespace std;

int main(){
   cout<<"x"<<endl;
   int k; cin>>k;
   int A[k+1];
   for(int i=1; i<=k; i++){
      cin>>A[i];
   }
   int s=A[1];
   int licznik=0;
   for(int i=1; i<=k; i++){
      int p=0;
      for(int j=i; j<=k; j++){
         p=p+A[j];
         licznik++;
         if(s<p)
               s=p;
      }
   }
   cout<<s<<" "<<licznik;
   cout<<licznik;
   return 0;
}
