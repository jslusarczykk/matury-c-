#include <bits/stdc++.h>
using namespace std;
int k(){
int n; cin>>n;
string s; cin>>s;
int A[n+1]; A[0]=0;
for(int i=1; i<=n; i++){
   if(s[i-1]=='a')
      A[i]=A[i-1]+1;
   else
      A[i]=A[i-1];
}
for(int i=1; i<=n; i++){
   //cout<<A[i]<<" ";
}
int B[n+1]; B[n+1]=0;
for(int j=n; j>=1; j--){
   if(s[j-1]=='b')
      B[j]=B[j+1]+1;
   else
      B[j]=B[j+1];
}
int k=1;
for(int i=0; i<=n; i++){
   if(A[i]+B[i+1]>k){
      k=A[i]+B[i+1];
   }
}
cout<<k;
return k;
}
int main(){
k();
return 0;
}
