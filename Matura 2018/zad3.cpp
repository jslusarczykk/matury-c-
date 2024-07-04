#include <bits/stdc++.h>
using namespace std;

void rek(int n){
   if(n>0){
      rek(n-1);
      cout<<n<<endl;
   }
}
int main(){

rek(5);
return 0;
}
