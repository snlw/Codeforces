
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, in;
        cin >> n;
        vector<int> even, odd;
        for (int i = 1; i <=2*n; i++){
            cin >> in;
            if (in % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        n--; // n : quota or the number of lines to output;
        int e = even.size()/2;
        int ie = 0, io = 0;
        while (n--){
            if (e != 0){
                cout << even[ie] << " " << even[ie+1] << endl;
                ie += 2;
                e--;
            }
            else{
                cout << odd[io] << " " << odd[io+1] << endl;
                io += 2;
            }
        }
    }

    return 0;
}



