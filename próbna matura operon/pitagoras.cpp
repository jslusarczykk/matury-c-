#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b; cin>>a>>b;
   int c=max(a,b);
   int d=min(a,b);
   int e=sqrt(c*c+d*d);
   int f=sqrt(c*c-d*d);
   if(c*c+d*d==e*e)
      cout<<d<<" "<<c<<" "<<sqrt(c*c+d*d);
   else if(f*f+d*d==c*c)
      cout<<min(d,f)<<" "<<max(d,f)<<" "<<c;
   else
      cout<<0;
return 0;
}
