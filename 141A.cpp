

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    string s1, s2, s3 ;
    cin >> s1 >> s2 >> s3; 

    string tgt = s1 + s2; 

    sort(tgt.begin(), tgt.end());
    sort(s3.begin(), s3.end());
    
    if (s3.length() == tgt.length()){
        for(int i = 0; i < s3.length() ; i++){
            if (s3[i] !=  tgt[i]){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}

