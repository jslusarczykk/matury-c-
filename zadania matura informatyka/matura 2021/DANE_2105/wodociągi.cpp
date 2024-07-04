#include <bits/stdc++.h>
using namespace std;
int stringtoint(string number){
   int value=0;
   int power10=1;
   for(int i=number.size()-1; i>=0; i--){
      value+=(number[i]-'0')*power10;
      power10*=10;
   }
   return value;
}
struct client{
string code;
vector<int> consumption;
};
vector<client> z(9900);

client makeclient(string s){
   client x;
   x.consumption.resize(13);
   x.code=s.substr(0,10); //pozycja startowa, dlugosc
   int position = 10; //pozycja srednika
   s+=';';
   for(int month=1; month<=12; month++){
      string number= "" ;
      while(true){
         position++; //pozycja pierwszej cyfry
         if(s[position]==';')
            break;
         number+=s[position];
      }
      x.consumption[month]=stringtoint(number);
   }
   return x;
}
vector<int> year(9900);
vector<double> avg(9900);
int main()
{
ifstream pdp("wodociagi.txt");
string s; pdp>>s;
//cout<<s<<endl;
for(int i=0; i<9900; i++){
   pdp>>s;
   z[i]=makeclient(s);
}
pdp.close();
for(int i=0; i<9900; i++){
   for(int month=1; month<=12; month++){
      year[i]+=z[i].consumption[month];
   }
   avg[i]=(double)year[i]/stringtoint(z[i].code.substr(5,2));
}

for(int i=0; i<10; i++){
   cout<<z[i].code<<" ";
   for(int month=1; month<=12; month ++){
      cout<<z[i].consumption[month]<<" ";
   }
   cout<<avg[i]<<endl;
}
return 0;
}
