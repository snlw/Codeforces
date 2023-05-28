

#include<iostream>


using namespace std;

int main(){
    int n; 
    cin >> n;
    char arr[n*5];
    for (int i = 0 ; i < n*5 ; i++){
        cin >> arr[i];
    }
    int index = 0;
    bool gotseats = false;
    while (index < 5*n ){
        if (index % 5 == 2){
            index++;
        }
        if (arr[index] == 'O' && arr[index+1] == 'O'){
            arr[index] = arr[index+1] = '+';
            gotseats = true;
            break;
        }
        index += 2;
    }
    if (gotseats){
        cout << "YES" << endl;
        for (int i = 0; i < 5*n; i+= 5){
            cout << arr[i] << arr[i+1] << arr[i+2] << arr[i+3] << arr[i+4] << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}


