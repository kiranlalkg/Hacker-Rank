#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i!=k)
            sum+=ar[i];
    }
    if(sum/2==b)
        cout<<"Bon Appetit"<<endl;
    else
        return (b-(sum/2));
    return 0;
    // Complete this function
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(result!=0)
    cout << result << endl;
    return 0;
}
