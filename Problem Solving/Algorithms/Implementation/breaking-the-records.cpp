#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    vector<int> wl(2);
    int hig=s[0];
    int low=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(hig<s[i])
        {
            wl[0]++;
            hig=s[i];
        }
        if(low>s[i])
        {
            wl[1]++;
            low=s[i];
        }
    }
    return wl;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
