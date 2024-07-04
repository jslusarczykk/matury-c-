#include <bits/stdc++.h>
using namespace std;
ifstream dane("mecz.txt");
string s;
string z="BBBBBBBBBBAABBAAAAAAAAAAABA";
int main(){
   dane>>s;
   int licznikA=0;
   int licznikB=1;
   int passA=0;
   int passB=0;
   int maksB=0;
   int maksA=0;
   for(int i=1; i<=z.size(); i++){
      if(z[i]==z[i+1]&&z[i]=='A'){
         licznikA++;
         licznikB=0;
      }
         if(maksA<licznikA)
            maksA=licznikA;
         if(licznikA=10)
            passA=passA+1;
      if(z[i]==z[i+1]&&z[i]=='B'){
         licznikB++;
         licznikA=0;
      }
         if(maksB<licznikB)
            maksB=licznikB;
         if(licznikB=10)
            passB=passB+1;

   }
   if(maksA>maksB)
      cout<<maksA<<" "<<"A"<<" "<<passA+passB<<endl;
   if(maksB>maksA)
      cout<<maksB<<" "<<"B"<<" "<<passA+passB<<endl;
   dane.close();
   return 0;
}
//dlugosc maksymalnej passy, lacznie w jednej passie,  druzyna
