
#include<iostream>

using namespace std;

int optimalcharging(int x , int y){
    int time = 0;
    if (x == 1 && y == 1)
        return 0;
    // Charge first joystick only which is x;
    while (x > 0 && y > 0){
        if (y < x)
            swap(x,y);
        x++;
        y -= 2;
        time++;
    }
    return time;
};

int main(){
    int a1, a2;
    cin >> a1 >> a2;
    int ans = optimalcharging(a1, a2);
    cout << ans;
    return 0;
}


