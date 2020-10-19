
#include<iostream>

using namespace std;

int main(){
    int n, m, z;
    cin >> n >> m >> z;
    int min = n;
    int artist = 0;
    if (n == m)
        artist = z/n;
    else{
        while (min <= z){
            if (min % m == 0)
                artist++;
            min += n;
        }
    }
    cout << artist;

    return 0;
}

