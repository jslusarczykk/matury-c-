#include <bits/stdc++.h>
using namespace std;

int main()
{
   int s[30]={0};
   for(int n=2; n<30; n++){
      if(n%2==0){
         s[n]=n-1+2*s[n/2];
      }
      else
         s[n]=n-1+s[(n-1)/2]+s[(n+1)/2];
   }
   for(int i=1; i<30; i++){
      cout<<i<<" "<<s[i]<<endl;
   }
return 0;
}
