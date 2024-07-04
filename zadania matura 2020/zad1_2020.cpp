#include <bits/stdc++.h>
using namespace std;
bool czy_k_podobne(int n,int A[],int B[],int k){
   for(int i=1, j=n-k+1;  i<=k; i++, j++){
      if(A[i]!=B[j])
         return false;
   }
   for(int i=k+1, j=1; i<=n; i++, j++){
      if(A[i]!=B[j])
         return false;
   }
   return true;
}
bool czy_podobne(int n, int A[], int B[]){
   for(int k=0; k<n; k++){
      if(czy_k_podobne(n,A,B,k)){
         return true;
      }
   }
   return false;
}


int main()
{
int A[]={0,4,7,1,4,5}, B[]={0,1,4,5,4,7};
int n=5, k=2;
cout<<czy_k_podobne(n,A,B,k)<<endl;
return 0;
}
