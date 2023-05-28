

#include<iostream>


using namespace std;


int main(){
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int words = 0;
    for (int i = 0; i < n ;i++){
        if (i == 0)
            words++;
        else if (a[i]-a[i-1] <= c)
            words++;
        else
            words = 1;
    }
    cout << words;
    return 0;
}
