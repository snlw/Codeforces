#include<iostream>


using namespace std;


int main(){

    int n;
    cin >> n;
    int cards[n];
    for (int i = 0 ; i < n; i++){
        cin >> cards[i];
    }
    int sereja = 0 , dima = 0;
    int left = 0, right = n-1, turn =0;
    while (left <= right){
        int mx = max(cards[left], cards[right]);
        if (turn % 2 == 0){
            sereja += mx;
        }
        else{
            dima += mx;
        }
        if (mx == cards[left]){
            left++;
        }
        else{
            right--;
        }
        turn++;
    }
    cout << sereja << " " << dima; 

    return 0;
}


