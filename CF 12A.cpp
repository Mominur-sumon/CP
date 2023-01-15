#include<bits/stdc++.h>
using namespace std ;
int main(){
    char symbols[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> symbols[i][j];
        }
    }
    
    int central_symetry = 0 ;
    
    if(symbols[0][0] == symbols[2][2] && symbols[0][1]==symbols[2][1] && symbols[0][2]==symbols[2][0] && symbols[1][0]==symbols[1][2]){
        central_symetry = 1 ;
    }

    if(central_symetry){
        cout<<"YES"<<endl;
    
    }
    else{
        cout<<"NO"<<endl;
    }
}
