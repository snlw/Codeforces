
#include<iostream>
#include<vector>

using namespace std;

int searchfront(vector<int> a, int j){
    for (int i = 0 ; i < a.size(); i++){
        if (a[i] == j)
            return i;
    }
};

int searchback(vector<int> a, int j){
    for (int i =a.size()-1; i >= 0; i--){
        if (a[i] == j)
            return i;
    }
};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> count(5001);
        bool pali = false;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            count[a[i]]++;
        }
        for (int i = 0; i < count.size(); i++){
            if (count[i] > 1){
                int left = searchfront(a, i); 
                int right = searchback(a, i); 
                if (right - left > 1){
                    pali = true;
                    break;
                }
            }
        }
        cout << (pali ? "YES":"NO") << "\n";
    }

    return 0;
}

