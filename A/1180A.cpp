
#include<iostream>

using namespace std;

int main(){
    int n, cells = 1;
    cin >> n;
    if (n >1 ){
        while (n-1){
            cells += 4*(n-1);
            n--;
        }
    }

    cout << cells;

    return 0;
}

