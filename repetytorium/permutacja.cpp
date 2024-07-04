void permutacja(string przedrostek, string reszta)
{
   if(reszta=="")
   {
     cout << przedrostek << endl;
     return;
   }
   for(int i=0; i<reszta.size(); i++)
     permutacja(przedrostek + s[i], reszta.substr(0, i) + reszta.substr(i+1));
}


permutacja("", "bura");
