
#include<iostream>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    string s;
    int days = 0;
    int streak = 0;
    for (int i = 0; i < d; i++){
        cin >> s;
        int ones = 0;
        for (int j = 0; j < n; j++){
            if (s[j] == '1')
                ones++;
        }
        if (ones != n)
            days++;
        else
            days = 0;
        streak = max(days, streak);
    }
    cout << streak;

    return 0;
}


