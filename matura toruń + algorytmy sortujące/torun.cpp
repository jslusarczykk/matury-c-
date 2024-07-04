#include <bits/stdc++.h>
using namespace std;
ifstream wykreslanka("wykreslanka.txt");
ofstream wynik4("wynik4.txt");
vector<string>slowa(100);
void zad4_1(){
   cout<<"podpunkt4_1"<<endl;
   wynik4<<"podpunkt4_1"<<endl;
   for(int i=0; i<100; i++){
      int pozycja=slowa[i].find("matura");
      if(pozycja!=string::npos){
         cout<<i<<" "<<pozycja<<endl;
         wynik4<<i<<" "<<pozycja<<endl;
      }
   }
}
int podciag(string s){
   int licznik=1;
   int max_licznik=1;
   s=' '+s;
   for(int i=1; i<=s.size()-1; i++){
      if(s[i-1]==s[i]){
         licznik++;
      }
      else{
         if(licznik>max_licznik){
            max_licznik=licznik;
         }
      }
   }
   return max_licznik;
}
void zad4_2(){
   cout<<"podpunkt4_2"<<endl;
   wynik4<<"podpunkt4_2"<<endl;
   int max_podciag=0;
   int max_wiersz=0;
   for(int i=0; i<100; i++){
      int p=podciag(slowa[i]);
      if(p>max_podciag){
         max_podciag=p;
         max_wiersz=i;
      }
   }
   cout<<max_podciag<<" "<<max_wiersz<<endl;
   wynik4<<max_podciag<<" "<<max_wiersz<<endl;
}
int pozycja_slowa(string s){

}
void zad4_3(){
   cout<<"podpunkt4_3"<<endl;
   wynik4<<"podpunkt4_3"<<endl;
   for(int i=0; i<100; i++){
      int p=pozycja_slowa(slowa[i]);
      if(p>=0){
         cout<<1<<" "<<26<<endl;
         cout<<i<<" "<<p<<endl;
         wynik4<<1<<" "<<26<<endl;
         wynik4<<i<<" "<<p<<endl;
         return;
      }
   }
}
int main()
{
   for(int i=0; i<100; i++){
      wykreslanka>>slowa[i];
   }
   zad4_1();
   zad4_2();
   zad4_3();
   wykreslanka.close();
   wynik4.close();
return 0;
}
