#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int liczba_wystapien[n+1];
int T[n+1],W[n+1];
for(int i=1; i<=n; i++)
   cin>>T[i];
for(int i=1; i<=k; i++)
   liczba_wystapien[i]=0;
for(int i=1; i<=n; i++)
   liczba_wystapien[T[i]]=liczba_wystapien[T[i]]+1;
int p=1;
for(int j=1; j<=k; j++){
   for(int i=1; i<=liczba_wystapien[j];i++){
      W[p]=j;
      p=p+1;
   }
}
//for(int i=1; i<=k; i++)
   //cout<<liczba_wystapien[i]<<",";
int r=0;
int i=3;
for(int j=1; j<=T[i-1]; j++)
   r=r+liczba_wystapien[j];
cout<<r;
return 0;
}
