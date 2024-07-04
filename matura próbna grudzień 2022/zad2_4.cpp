#include <bits/stdc++.h>
using namespace std;
ifstream pary("pary.txt");
ofstream wynik2("wynik2.txt");
const int N=100000;
bool czydobre(int x,int y){
   while(y>x){
      y=y/2;
   }
   if(y==x){
      return true;
   }
   return false;
}
int main()
{
for(int i=0; i<N; i++){
   int x,y;
   pary>>x>>y;
   if(czydobre(x,y)){
      cout<<x<<" "<<y<<endl;
      wynik2<<x<<" "<<y<<endl;
   }
}
pary.close();
wynik2.close();
return 0;
}
