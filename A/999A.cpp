
#include<iostream>

using namespace std;

int main(){
    int n, k, left = -1, right = -1;
    cin >> n >> k;
    int arr[n];
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++){
        if (arr[i] > k){
            left = i;
            break;
        }
    }
    for (int i = n-1; i >=0; i--){
        if (arr[i] > k){
            right = i;
            break;
        }
    }
    int problems;
    if (left == -1 && right == -1)
        problems = n;
    else if (left == right || (left ==-1 && right != -1) || (right ==-1 && left != -1))
        problems = n-1;
    else {
        problems = n-(right-left+1);
    }
    cout << problems ;

    return 0;
}




