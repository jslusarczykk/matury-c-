#include <bits/stdc++.h>
using namespace std;
int wywolanie=0;
int licz(int x){
   wywolanie++;
   int w=0;
   if(x==1)
      return 1;
   else
      w=licz(x/2);
      if(x%2==1)
         return w+1;
      else
         return w-1;

}
int main(){
for(int i=1; i<30; i++){
   wywolanie=0;
   int wynik=licz(i);
   cout<<i<<" "<<wywolanie<<" "<<wynik<<endl;
}
for(int i=100; i<200; i++){
   wywolanie=0;
   int wynik=licz(i);
   cout<<i<<" "<<wywolanie<<" "<<wynik<<endl;
}
return 0;
}
