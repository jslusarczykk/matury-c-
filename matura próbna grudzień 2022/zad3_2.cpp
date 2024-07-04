#include <bits/stdc++.h>
using namespace std;
ifstream dane("liczby_przyklad.txt");
const int N=1000000;
int SITO[N+1];
int main()
{
SITO[0]=SITO[1]=false;
for(int i=2; i<=N; i++){
   SITO[i]=true;
}
for(int i=2; i<=N/2; i++){
   if(SITO[i]==true){
      int j=2*i;
      while(j<=N){
         SITO[j]=false;
         j=j+i;
      }
   }
}
int licznik=0;
for(int i=0; i<100; i++){
   int x;
   dane>>x;
   if(SITO[x-1])
      licznik++;
}
cout<<licznik<<endl;
//for(int i=0; i<=N; i++){
   //if(SITO[i]==true){
     // cout<<i<<endl;
  // }
//}
return 0;
}
