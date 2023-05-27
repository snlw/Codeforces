
#include<iostream>

using namespace std;

int main(){
    int n, k, num;
    cin >> n >> k;
    int ans =0;
    while (n--){
        cin >> num;
        int lucky = 0;
        while (num){
            if (num%10 == 4 || num%10 ==7)
                lucky++;
            num /=10;
        }
        if (lucky <= k)
            ans++;
    }
    cout << ans;


    return 0;
}

