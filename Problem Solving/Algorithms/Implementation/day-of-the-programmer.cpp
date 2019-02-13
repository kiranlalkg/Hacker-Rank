#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(int year) {
    
    string str;
    if(year==1918){
        str= "26.09.1918";
        return str;
    }
    else if( year<= 1917){
        if( year % 4 == 0){
            str= "12.09."+ to_string(year);
            cout << str<<endl;
            return str;
        }
        else{
            str="13.09." + to_string(year);
            cout << str<<endl;
            return str;
        }
            
    }
    else{
        if( (( year%4==0) && (year%100!=0)) || (year%400==0)){
            str= "12.09." + to_string(year);
            cout << str<<endl;
            return str;
        }
        else{
            str="13.09."+ to_string(year);
            cout << str<<endl;
            return str;
        }
    }
    cout << str<<endl;
    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int year;
    cin >> year;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = solve(year);

    fout << result << "\n";

    fout.close();

    return 0;
}
