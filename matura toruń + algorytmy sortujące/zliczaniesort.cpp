#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int> A(n);
   int M; M=0;
   for(int i=0; i<n; i++){
      cin>>A[i];
      if(A[i]>M)
         M=A[i];
   }
   vector<int> L(M+1);
   for(int i=0; i<n; i++){
      L[A[i]]++;
   }
   for(int i=0,k=0; i<=M; i++){
         for(int j=0; j<L[i]; j++){
            //cout<<i<<" ";
            A[k]=i; k++;
         }
   }
   for(int k=0; k<n; k++){
      cout<<A[k]<<" ";
   }
   cout<<endl;
return 0;
}
