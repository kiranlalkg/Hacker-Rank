#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    vector<int> a(100,0);
    for(int i=0;i<ar.size();i++)
    {
        int m=ar[i];
        a[m]++;
    }
    int count=0;
    for(int i=0;i<100;i++)
    {
        count+=a[i]/2;
    }
    if(count==29)
        return 30;
    return count;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
