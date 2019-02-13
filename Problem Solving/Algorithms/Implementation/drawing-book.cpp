#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    if(p==1)
        return 0;
    if(n-p>p)
    {
        return p/2;
    }
    else
    {
        if(n%2==0)
        {
            if(p==n-1)
                return 1;
        }
        return (n-p)/2;
    }
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
