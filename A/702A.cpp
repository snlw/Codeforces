

#include<iostream>


using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int idx = 0;
    int len = 1;
    int maxlen = len;
    while (idx < n-1){
        if (arr[idx] < arr[idx+1]){
            len++;
        }
        else{
            len = 1;
        }
        maxlen = max(len, maxlen);
        idx++;
    }
    cout << maxlen << endl;
    return 0;
}

