
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n;
        vector<int>open;
        vector<int>close;
        for (int i = 0; i < n; i++){
            cin >> c;
            if (c == '(')
                open.push_back(i);
            else 
                close.push_back(i);
        }
        for (int i = 0; i < open.size(); i++){
            for (int j = 0; j < close.size(); j++){
                if (open[i] < close[j]){
                    open[i] = -1;
                    close[j] = -1;
                    break;
                }
            }
        }
        int count = 0;
        for (int it: open){
            if (it != -1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}


