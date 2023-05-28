

#include<iostream>


using namespace std;


int main(){
    int t, n;
    cin >> t ;
    while (t--){
        cin >> n;
        bool yes= false;
        int last, index;
        int s = {6,10,14,15,21,22};
        if (n <= 30){
            yes = false;
        }
        else{
            for (int i = 2; i < 6; i++){
                last = n - 6 - 10 - s[i];
                if (last != s[i] && last != 6 && last != 10){
                    index = i;
                    yes = true;
                    break;
                }
            }
        }
        if (yes){
            cout << "YES" << endl;
            cout << 6 << " " << 10 << " " << s[index] << " " << n-6-10-s[index] <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

