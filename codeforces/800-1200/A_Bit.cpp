#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    while(n--){
        string s;
        cin >> s;
        if(s[1] == '+' || s[0] == 'x'){
            x++;
        }
        else if(s[1] == '-' || s[0] == 'x'){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}