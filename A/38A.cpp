
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int rank[n];
    for (int i = 1; i < n; i++){
        cin >> rank[i];
    }
    int a, b;
    cin >> a >> b;
    int years = 0;
    while (a < b){
        years += rank[a];
        a++;
    }
    cout << years;
    

    return 0;
}

