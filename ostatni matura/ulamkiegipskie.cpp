#include <bits/stdc++.h>
using namespace std;
int nwd(int p, int q){
   if(q==0)
      return p;
   else
      return nwd(q,p%q);
}
void egipt(int p, int q){
   //cout<<p<<" "<<q<<endl;
   int x=nwd(p,q);
   p=p/x;
   q=q/x;
   if(p==1){
      cout<<p<<"/"<<q<<endl;
      return;
   }
   int m=(q+p-1)/p;
   int pp=(p*m)-q;
   int qp=m*q;
   p=pp;
   q=qp;
   cout<<"1/"<<m<<endl;
   egipt(p,q);
}
int main(){
   int p; cin>>p;
   int q; cin>>q;
   egipt(p,q);
   return 0;
}
