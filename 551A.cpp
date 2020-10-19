
#include<iostream>

using namespace std;

int main(){
    int n, b = 1;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n; i++)
        cin >> a[i];
    for (int i = 0 ; i < n; i++){
        int e = a[i];
        int score = 1;
        for (int j = 0; j < n; j++){
            if (a[j] > e)
                score++;
        }
        cout << score << " ";
    }


    return 0;
}

