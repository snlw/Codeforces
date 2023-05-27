
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n ;
    int a[n];
    for (int i = 0; i <n; i++){
        cin >> a[i];
    }
    int chest = 0, biceps = 0, back =0;
    for (int i = 0; i < n; i+=3)
        chest += a[i];
    for (int i = 1; i < n; i+=3)
        biceps += a[i];
    for (int i = 2; i < n; i+=3)
        back += a[i];
    int mx = max(chest, max(biceps,back));
    if (mx == chest)
        cout << "chest";
    else if (mx == biceps)
        cout << "biceps";
    else 
        cout << "back";

    return 0;
}

