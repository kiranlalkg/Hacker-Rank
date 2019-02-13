#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    int i=0,y=x1,z=x2;
    if(v1>v2)
    {
        while(y<=z)
        {
            y=x1+i*v1;
            z=x2+i*v2;
         if(y==z)
         {
             return "YES";
         }
         i++;
        }
    }
    if(v2>v1)
    {
        while(y<=z)
        {
            y=x1+i*v1;
            z=x2+i*v2;
         if(y==z)
         {
             return "YES";
         }
         i++;
        }
    }
    return "NO";
    // Complete this function
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
