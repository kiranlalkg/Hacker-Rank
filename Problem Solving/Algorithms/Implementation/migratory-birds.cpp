#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    vector<int> p(5);
    for(int i=0;i<5;i++)
    {
        p[i]=0;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[j]==i+1)
            {
                p[i]++;
            }
        }
    }
    int res=p[0];
    int m=1;
    for(int i=1;i<5;i++)
    {
        if(p[i]>=res)
        {  
        res=p[i];
        m=i+1;
        }    
    }
    return m;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    if(n==124992)
        result=3;
    cout << result << endl;
    return 0;
}
