#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int> A(n);
   for(int i=0; i<n; i++){
      cin>>A[i];
   }
   for(int k=n-2; k>=0; k--){
      int x=A[k], i=k+1;
      while(i<n&&x>A[i]){
         swap(A[i],A[i-1]);
         i++;
      }
   }

   for(int k=0; k<n; k++){
      cout<<A[k]<<" ";
   }
   cout<<endl;
   return 0;
}

