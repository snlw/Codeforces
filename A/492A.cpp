

#include<iostream>


using namespace std;


int main(){

    int n;
    cin >> n; 
    int height = 0;
    int level = 0;
    while (n > 0){
        height++;
        level += height;
        n -= level;
    }
    if (n < 0){
        height--;
    }
    cout << height << endl;
    return 0;
}

