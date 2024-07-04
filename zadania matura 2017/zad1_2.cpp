#include <bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int p; cin>>p;
int A[n+1]={0};
for(int i=1; i<=n; i++){
   cin>>A[i];
}
for(int i=1; i<=n; i++){
   if(A[i]%p==0)
      A[i]=0;
}
sort(A,A+(n+1));
//for(int i=0; i<n; i++){
   //cout<<A[i]<<" ";
//}
cout<<A[n]*A[n-1];
return 0;
}
