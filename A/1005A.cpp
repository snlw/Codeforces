
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, input ;
    cin >> n;
    vector<int> heights;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == 1 && i != 0){
            heights.push_back(arr[i-1]);
        }
        if (i == n-1){
            heights.push_back(arr[i]);
        }
    }
    
    cout << heights.size() << endl;
    for (int i: heights){
        cout << i << " ";
    }
    return 0;
}

