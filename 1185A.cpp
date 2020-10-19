
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> rope;
    rope.push_back(a);
    rope.push_back(b);
    rope.push_back(c);
    sort(rope.begin(), rope.end());

    int duration = max(0, d-abs(rope[0]-rope[1])) + max(0, d-abs(rope[1]-rope[2]));
    cout << duration;
    return 0;
}

