
#include<iostream>

using namespace std;

int main(){
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int player1 = s*v1 + 2*t1;
    int player2 = s*v2 + 2*t2;
    if (player1 == player2)
        cout << "Friendship";
    else
        cout << ((player1 < player2)? "First":"Second");

    return 0;
}

