#include <bits/stdc++.h>
using namespace std;
ifstream dane("NAPIS.TXT") ;
//ifstream dane("TEST.TXT") ;
ofstream wynik("ZADANIE5.TXT");
const int N=1000;
//const int N=8;
vector<string> word(N);

int suma_kodow(string s){ //funkcja obliczajaca sumê kodow ascii z napisu
   int suma=0;
   for(int j=0; j<s.size(); j++ ){
      suma+=(int)s[j];
   }
    return suma;
}
bool pierwsza(int n){ //funkcja obliczajaca czy liczba jest pierwsza
   if(n<2)
      return false;
   for(int k=2; k<n; k++){
      if(n%k==0)
         return false;
   }
   return true;
}
void zad5a(){ //funkcja zwracajaca rezultat
   cout<<"Zad5a"<<endl;
   wynik<<"Zad5a"<<endl;
   int licznik=0;
   for(int i=0; i<N; i++){
      if (pierwsza(suma_kodow(word[i])))
         licznik++;
   }
   cout<<licznik<<endl;
   wynik<<licznik<<endl;
   cout<<endl;
   wynik<<endl;
}
bool rosnaca(string s){ //funkcja sprawdzajaca czy kod ascii kolejnej litery jest wiekszy od poprzedniej
   for(int h=1; h<s.size();h++){ //bo sprawdzamy poprzedni znak
      if(s[h]<=s[h-1]){
         return false;
      }
   }
   return true;
}
void zad5b(){
   cout<<"Zad5b"<<endl;
   wynik<<"Zad5b"<<endl;
   for(int i=0; i<N; i++){
      if(rosnaca(word[i])){
         cout<<word[i]<<endl;
         wynik<<word[i]<<endl;
      }
   }
   cout<<endl;
   wynik<<endl;
}
void zad5c(){
   string poprzedni ="" ;
   cout<<"Zad5c"<<endl;
   wynik<<"Zad5c"<<endl;
   sort(word.begin(),word.end()) ;
   for(int i=0; i<N; i++){
      if(word[i]!=poprzedni){ //początek sektora ze zdjęcia
         poprzedni=word[i];
         if(word[i]==word[i+1]){
            cout<<word[i]<<endl;
            wynik<<word[i]<<endl;
         }
      }
   }
}

int main()
{
for(int i=0; i<N; i++){
   dane>>word[i];
}
dane.close();
zad5a();
zad5b();
zad5c();
wynik.close();
return 0;
}
