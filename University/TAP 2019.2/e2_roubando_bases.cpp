#include <bits/stdc++.h>
using namespace std;


bool testSubstr(string s, string aux)
{
    int j = 0;
    for (int i = 0; i < s.size() && j < aux.size(); ++i)
    {
        if(aux[j] == s[i]) ++j;                      
    }
    if(j != aux.size()) return false;
    else return true;
}


int main()
{

    vector <string> seq;
    int n;
    char c;
    string t, s;
    cin >> n;


    for (int i = 0; i < n; ++i)
    {
        cin >> c >> t;
        if(c == 'V') seq.push_back(t);
    }
    

    string bestS = "";
    for(int x2 = 0; x2 < seq.size(); x2++)
    {
        s = seq[x2];
        for (int i = 0; i < s.size(); ++i)
        {
            //cout << endl;
            for(int j = s.size(); j >= 1; j--) //for (int j = 1; j <= s.size()-1; ++j)
            {
                string aux = s.substr(i, j);
                //cout << s.substr(i, j) << endl;

                if(aux.size() > bestS.size())
                {
                    char t1 = 'y';
                    for (int x1 = 0; x1 < seq.size(); ++x1)
                    {
                        if(!testSubstr(seq[x1], aux))
                        {
                            t1 = 'n';
                            break;
                        }
                    }
                    if(t1 == 'y')
                    {
                        bestS = aux;
                    }
                }
            }
        }
    }

    //cout << bestS << endl << bestS.size() << endl;
    cout << bestS << endl;

    return 0;

}

/*

*/
