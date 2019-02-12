#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string res;
    if(s[0]=='1' && s[1]=='2')
    {
        if(s[8]=='P'&&s[9]=='M')
            res=s.substr(0,8);
        else
        {
            s[0]='0';
            s[1]='0';
            res=s.substr(0,8);
        }
    }
    else
    {
        if(s[8]=='A' && s[9]=='M')
        {
            res=s.substr(0,8);
        }
        else
        {
            int x=stoi(s.substr(0,2));
            x+=12;
            string p=to_string(x);
            s[0]=p[0];
            s[1]=p[1];
            res=s.substr(0,8);
        }
    }
    return res;
    // Complete this function
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
