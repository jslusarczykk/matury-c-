#include <bits/stdc++.h>
using namespace std;

int main()
{
int n; cin>>n;
int A[n+1];
for(int i=1; i<=n; i++)
   cin>>A[i];
int poczatek=1, koniec=n;
while(koniec-poczatek>1){
   int srodek=(poczatek+koniec)/2;
   if(A[srodek]%2==0)
      koniec=srodek;
   else
      poczatek=srodek;
}
cout<<A[koniec];

return 0;
}
