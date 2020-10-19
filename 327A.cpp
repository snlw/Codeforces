
#include<iostream>


using namespace std;

int main(){
    int n;
    cin >> n;
    int in, ones = 0, zeros = 0, maxzeros = -1;
    while(n--){
        cin >> in;
        if (in == 1){
            ones++;
            if(zeros > 0){
                zeros--;
            }
        }
        else if (in == 0){
            zeros++;
            maxzeros = max(maxzeros, zeros);
        }
    }
    cout << ones + maxzeros << endl;

    return 0;
}


