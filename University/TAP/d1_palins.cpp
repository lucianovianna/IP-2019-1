#include <bits/stdc++.h>
using namespace std;


vector<string> subs;


bool teste(string aux)
{
   // if(subs.size() == 0) return true;
    if(subs.size() > 0)
    {
        for(int i=0; i<subs.size(); i++)
            if(aux == subs[i]) return false;
    }
        
    string s = "";
    for(int i=aux.size()-1; i >= 0; i--)
        s += aux[i];
    
    //cout << s << endl;

    if(s != aux) return false;
    else return true;
}


int main()
{
    string s, aux;
    cin >> s;

  /*for(int i=0; i < s.length(); i++)
  {
        for(int j=1; j <= s.length() - i; j++) 
        {
            string aux(s,i,j);
            //if(test(aux))
                //subs.push_back(aux);
                cout<<aux<<endl;
        }
    }*/
    for (int t = 1; t <= s.size(); t++)  
    {     
        for (int i = 0; i <= s.size() - t; i++)  
        {
            int j = i + t - 1;
            aux = "";        
            for (int k = i; k <= j; k++) 
            { 
                aux += s[k];
                //cout << s[k]; 
            } 
            //cout << aux << endl;
            if(teste(aux))
                subs.push_back(aux);
            //cout << endl; 
        } 
    } 

    cout << subs.size() << " - ";
    for(int i=0; i<subs.size(); i++)
    {
        cout << '"' << subs[i] << '"';
        if(i < subs.size()-1) cout << " ";
    }
    cout << endl;

    return 0;
}