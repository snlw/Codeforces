

#include<iostream>


using namespace std;


int main(){
    int n, score, newscore, min, max; 
    cin >> n >> score; 
    min = max = score; 
    int count = 0 ; 

    for (int i = 1 ; i < n ; i++ ){
        cin >> newscore; 
        if (newscore < min){
            count++;
            min = newscore;
        }
        else if (newscore > max ){
            count++; 
            max = newscore; 
        }
    }
    cout << count << endl;

    return 0;
}

