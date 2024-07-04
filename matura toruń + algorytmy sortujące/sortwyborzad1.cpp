#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int> A(n);
   for(int i=0; i<n; i++){
      cin>>A[i];
   }
   for(int i=n-1; i>=1; i--){
      int m=0;
      for(int j=1;j<=i; j++){
         if(A[j]>A[m])
            m=j;
      }
      swap(A[i], A[m]);
   }
   for(int k=0; k<n; k++){
      cout<<A[k]<<" ";
   }
   cout<<endl;
   return 0;
}
//porównania N-1+N-2+...=N(N-1)/2=O(N^2)
//z³o¿onoœæ kwadratowa
