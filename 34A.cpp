
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int height[n];
    vector<int> diff;
    for (int i = 1; i <= n; i++)
        cin >> height[i];
    for (int i = 2; i <= n; i++)
        diff.push_back(abs(height[i]-height[i-1]));
    diff.push_back(abs(height[1]-height[n]));
    int shortest = *min_element(diff.begin(), diff.end());
    if (diff[n-1] == shortest){
        cout << 1 << " " << n;
    }
    else{
        for (int i = 0; i < n-1; i++){
            if (diff[i] == shortest){
                cout << i+1 << " " << i+2;
                break;
            }
        }
    }
    return 0;
}


