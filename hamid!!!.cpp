#include<bits/stdc++.h>
using namespace std;

int optimalNum(string& hamidhouse, int pos){
    int n = hamidhouse.size();
    vector<int> inVec(n);

    for(int i=0;i<n;i++){
        if(hamidhouse[i] == '#') inVec[i] = 1;
        else inVec[i] = 0;
    }

    int left1 = 0;
    for(int i=1;i<pos;i++){
        if(inVec[i] == 1) left1 ++;
    }

    int right1 = 0;
    for(int i=pos+1;i<=n;i++){
        if(inVec[i] == 1) right1 ++;
    }

    int dayCnt = 1;
    while(pos!= 1 || pos!= n){
        if(left1==right1){
            int lefthai = 1;
            int righthai = 1;
            if(pos>(n/2)){
                righthai = 0;
                for(int i=pos+1;i<=n;i++){
                    if(inVec[i] != 1){
                        inVec[i] = 1;   
                        righthai = 1;
                        break;
                    } 
                }
            } else if(pos<=(n/2) || righthai == 0) {
                lefthai = 0;
                for(int i=pos-1;i>=1;i--){
                    if(inVec[i] != 1){
                        inVec[i] = 1;   
                        lefthai = 1;
                        break;
                    } 
                } 
            }
            if (lefthai==0){
                for(int i=pos+1;i<=n;i++){
                    if(inVec[i] != 1){
                        inVec[i] = 1;  
                        break;
                    } 
                }
            }
        }
        else if(left1>right1){
            
        }
    }
    
}

int main(){
    int t,n,pos;
    string s;
    cin >> t;
    for(;t--;){
        cin >> n;
        cin >> pos;
        cin >> s;
        int ans = optimalNum(s,pos)
    }
    return 0; 
}