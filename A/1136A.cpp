
#include<iostream>
#include<utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    int pages[202];
    for (int i = 0; i <2*n; i++){
        cin >> pages[i];
    }
    int index;
    cin >> index;
    for (int i =2*n-2 ; i >= 0; i-=2){
        if (pages[i] <= index){
            cout << n - i/2 << endl;
            break;
        }
    }

    return 0;
}

