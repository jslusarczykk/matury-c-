#include <bits/stdc++.h>
using namespace std;
int sklej(int n){
   if(n==1)
      return 0;
   if(n%2==0){
      return n-1+2*sklej(n/2);
   }
   else
      return n-1 +sklej((n-1)/2)+sklej((n+1)/2);
}
int main()
{
for(int n=1; n<20; n++){
   cout<<n<<" "<<sklej(n)<<endl;
}

return 0;
}
