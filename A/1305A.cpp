
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int necklace[n];
        for (int i = 0 ; i < n; i++)
            cin >> necklace[i];
        int bracelet[n];
        for (int i = 0 ; i < n; i++){
            cin >> bracelet[i];
        }
        sort(necklace, necklace+n);
        sort(bracelet, bracelet+n);
        for (int i:necklace){
            cout << i << " ";
        }
        cout << endl;
        for (int i: bracelet){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

