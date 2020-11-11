
#include<iostream>
#include<map>

using namespace std;

#define MAX 200001
int n;
int a[MAX];
int b[MAX];
int pos[MAX];
map< int, int > offset;


int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++){
        int cur = pos[b[i]] - i;
        if (cur < 0)
            cur += n;
        offset[cur]++;
    } 
    int ans = 0;
    for (auto &it: offset)
        ans = max(ans, it.second);
    cout << ans;

    return 0;
}


