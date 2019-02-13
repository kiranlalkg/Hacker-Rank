#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,count=0;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int f=a[n-1];
    int l=b[m-1];
    for(int k=f;k<l+1;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(k%a[i]!=0)
            {
                goto kiran;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]%k!=0)
            {
                goto kiran;
            }
        }
        count++;
        kiran:{}
    }
    cout<<count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
