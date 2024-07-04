#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
int A[n];
int liczbaelem=0;
for(int i=1; i<=n; i++){
   cin>>A[i];
   if(A[i]>n)
      liczbaelem++;
}

for(int i=1; i<=n; i++){
   for(int j=2; j<=n; j++){
      if(A[i]==A[j]){
         liczbaelem++;
      }
   }
}

cout<<liczbaelem;
return 0;
}
