#include <bits/stdc++.h>
using namespace std;
int wywolania=0;
int licz(int x){
   wywolania++;
   if(x==1)
      return 1;
   else{
         int w=licz(x/2);
         if(x%2==1)
            return w+1;
         else
            return w-1;
   }
}
int main(){
for(int i=1; i<33; i++){
   wywolania=0;
   int y=licz(i);
   cout<<i<<" "<<y<<" "<<wywolania<<endl;
}
return 0;
}
