#include <bits/stdc++.h>

using namespace std;

int main() 
{
    vector<int> arr(5);
    long int max=0,min=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(arr[j]>arr[j+1])
                arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
        }
    }
    for(int i=0;i<4;i++)
        min+=arr[i];
    for(int i=1;i<5;i++)
        max+=arr[i];
    cout<<min<<" "<<max;
    return 0;
}
