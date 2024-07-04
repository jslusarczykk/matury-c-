#include <bits/stdc++.h>
using namespace std;
ifstream dane("pary.txt");
ofstream wyniki("wynik4_1.txt");
const int N=100;
vector<int>liczba;
vector<string>slowo;
bool pierwsza(int k){
   for(int i=0; i<k; i++){
      if(k%i==0){
         return false;
      }
   }
   return true;
}
void liczby(int z){ //n-parzyste
   for(int i=2; i<z; i++ ){
      if(pierwsza(i)){
         int k=i;
         i=z;
      }
   }
   cout<<z<<k<<z-k<<endl;
}
int main()
{
   slowo.resize(N);
   liczba.resize(N);
   //for(int i=0; i<100; i++;){
     // dane>>liczba[i]>>slowo[i];
   //}
   cout<<pierwsza(13);
   dane.close();
   wyniki.close();
return 0;
}
