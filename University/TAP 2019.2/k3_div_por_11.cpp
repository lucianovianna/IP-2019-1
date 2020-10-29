#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s, s_ini;
    int uni, sub;
    cin >> s;
    s_ini = s;


    while(true)
    {
        cout << s << endl;
        
        int t1 = 1, carry = 0; 

        if(s.size() <= 2) break;

        uni = s[s.size()-1] - '0';
        s.erase(s.size()-1, s.size());
        //cout << "uni: " << uni << "| s: " << s << endl;

        sub = (s[s.size()-1] - '0') - uni;
        if(sub < 0) 
        {
            carry = 1;
            s[s.size()-1] = (sub + 10) + '0';

        }
        else s[s.size()-1] = sub + '0';

        for (int j = s.size()-2; j>=0; j--)
        {
            if(s[j] == '0' && carry)
            {
                s[j] = '9';
                continue;
            }
            sub = (s[j] - '0') - carry;
            if(j > 0 || sub > 0) 
                s[j] = sub + '0';
            else s = s.erase(j, j+1);
            carry = 0;
            //cout << "teste s: " << s << endl;
        }

        //while(s[0] == '0') s = s.substr(1, s.size());//s.erase(s.begin());
    }

    sub = stoi(s);
    ( (sub%11) == 0) ? cout << "O numero " << s_ini << " eh divisivel por 11.\n" 
    : cout << "O numero " << s_ini << " nao eh divisivel por 11.\n";



    return 0;
}
