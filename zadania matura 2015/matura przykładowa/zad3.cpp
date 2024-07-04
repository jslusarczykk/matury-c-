#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int a[n+1];
int b[n+1]={0};
for(int i=1; i<=n; i++){
   cin>>a[i];
}
int liczba_p=0;
int liczba_p2=0;
for(int i=1; i<n; i++){
   if(a[i]>a[i+1]){
      b[i]=1;
      liczba_p++;
   }

}
cout<<liczba_p<<endl;
for(int i=1; i<n; i++){
   if(b[i]==1&&b[i+1]==0)
      liczba_p2++;
}
 cout<<liczba_p2;
return 0;
}
