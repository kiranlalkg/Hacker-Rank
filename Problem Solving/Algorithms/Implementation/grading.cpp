#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades,int n){
     for(int grades_i = 0; grades_i < n; grades_i++)
     {
       if(grades[grades_i]<38);
       else
       {
           if(grades[grades_i]%5==3)
               grades[grades_i]+=2;
           else if(grades[grades_i]%5==4)
               grades[grades_i]+=1;
           else
               grades[grades_i]+=0;
       }
    }
    return grades;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}
