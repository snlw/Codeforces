
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    float sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    float average = (sum/n)*2;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (a[i]+a[j] == average && i != j){
                cout << i+1 << " " << j+1 << endl;
                a[i] = 0;
                a[j] = 0;
            }
        }
    }

    return 0;
}

