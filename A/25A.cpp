
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];      
        if (arr[i] % 2== 0)
            even++;
        else 
            odd++;
    }
    int ans;
    if (even > odd){
        for (int i = 1; i <=n; i++){
            if (arr[i] % 2 == 1){
                ans = i;
                break;
            }
        }
    }
    else{
        for (int i = 1; i<=n; i++){
            if (arr[i] % 2 == 0){
                ans = i;
                break;
            }
        }
    }
    cout << ans;


    return 0;
}

