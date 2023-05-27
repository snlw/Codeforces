
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, input;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    for (int i= 0; i< n; i++){
        for (int j = i+1; j<n; j++){
            if (arr[i] == arr[j]){
                arr[i] = -1;
                break;
            }
        }
    }
    vector<int> ans;
    for (int i: arr){
        if (i != -1)
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (int i: ans)
        cout << i << " ";

    return 0;
}


