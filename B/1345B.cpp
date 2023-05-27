
#include<iostream>

using namespace std;

int buildbiggestpyramid(int n){
    int h = 1;
    while (n >= (3*h*h+h)/2){
        h++;
    }
    h--;
    return n - (3*h*h + h)/2;
};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count = 0;
        while (n >= 2){
            n = buildbiggestpyramid(n);
            count++;
            }
        cout << count << endl;
    }
    return 0;
}


