#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int> A(n);
   for(int i=0; i<n; i++){
      cin>>A[i];
   }
   for(int k=n-1; k>=1; k--){
      for(int i=0; i+1<=k;i++){
         if(A[i]>A[i+1])
            swap(A[i],A[i+1]);
      }
   }
   for(int i=0; i<n; i++){
      cout<<A[i]<<" ";
   }
   cout<<endl;
   return 0;
}
