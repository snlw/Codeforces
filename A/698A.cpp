
#include<iostream>

using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int v[] = { 1, 1 };
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            ans++;
            v[0] = 1, v[1] = 1;
        }
        if (a[i] == 1){
            if (v[1] == 0){
                ans++;
                v[1] = 1;
            }
            else
                v[1] = 0;
            v[0] = 1;
        }
        if (a[i] == 2){
            if (v[0] == 0){
                ans++;
                v[0] = 1;
            }
            else 
                v[0] = 0;
            v[1] = 1;
        }
        if (a[i] == 3){
            if (v[0] == 1 && v[1] == 1){
                if (a[i+1] == 2)
                    v[1] = 1;
                if (a[i+1] == 1)
                    v[0] = 1;
                if (a[i+1] == 3)
                    v[0] = 1;
            }
            else{
                if (v[0] == 1){
                    v[0] = 0, v[1] = 1;
                }
                else if (v[1] == 1){
                    v[1] = 0, v[0] = 1;
                }          
            }
        }
    }
    cout << ans << "\n";
    return 0;
}



