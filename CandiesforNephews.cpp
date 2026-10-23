    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin >> t;
        for(;t--;){
            int n;
            cin >> n;
            if(n%3==0) cout << 0;
            else cout << 3 - n%3;
            cout << endl;
        }
        return 0; 
    }