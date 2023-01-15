#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    lli n, x , y , sum = 0 , ans = 0 ;
    cin >> n;
    while(n--){
        cin >> x >> y ;
        sum = x + y ;
        if(sum > ans){
            ans  = sum ;
        }
    }

    cout << ans << endl;
}
