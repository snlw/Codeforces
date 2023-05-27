
#include<iostream>

using namespace std;

void check8(string s){
    int xxx = 0;
    bool yes = false;

    s = "00" + s;
    int len = s.length();
    for (int i = 0; i < len-2; i++){
        //Hundreds 
        xxx += 100*(s[i]-'0');
        for (int j = i+1; j < len-1; j++){
            //Tenths
            xxx += 10*(s[j]-'0');
            for (int k = j+1; k < len; k++){
                //Ones
                xxx += s[k] -'0';
                if (xxx % 8  == 0){
                    cout << "YES" << "\n";
                    cout << xxx << "\n";
                    return ;
                }
                xxx -= s[k] - '0';
            }
            xxx -= 10*(s[j] -'0');
        }
        xxx -= 100*(s[i] -'0');
    }
    
    cout << "NO";
    return;
};

int main(){
    string in;
    cin >> in;

    // Divisible by 8 if xxx can be divided by 8
    if (stoi(in) % 8  == 0)
        cout << "YES" << "\n" << in <<"\n";
    else
        check8(in);
    return 0;
}



