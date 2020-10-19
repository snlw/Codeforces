#include<vector>
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> rooms(10,0);
    for (int i = 0; i < n; i++){
        if (s[i] == 'L'){
            for(int j = 0; j < 10; j++){
                if (rooms[j] == 0){
                    rooms[j]++;
                    break;
                }
            }
        }
        else if (s[i] == 'R'){
            for (int j = 9; j >=0; j--){
                if (rooms[j] == 0){
                    rooms[j]++;
                    break;
                }
            }
        }
        else{
            int leave = s[i] -'0';
            rooms[leave]--;
        }
    }
    for (int it:rooms)
        cout << it;
    return 0;
}

