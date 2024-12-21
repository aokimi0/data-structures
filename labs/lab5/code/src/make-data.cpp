#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("in1.txt","w",stdout);
    int n = 100, m = 4, k = 3;
    cout << n << ' ' << m <<' '<< k << endl;
    for(int i = 0; i < n; ++ i){
        string s = "";
        for(int j  = 0; j < m; ++ j){
            if(rand()%2==1) s += "0";
            else s += "1";
        }
        cout << s << endl;
    }
}