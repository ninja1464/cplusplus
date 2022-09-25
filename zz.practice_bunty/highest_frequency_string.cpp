#include <iostream>
#include <vector>
#include<algorithm>
using namespace std; 
void frequency(string s){
    int count=0;
    int si=s.size();
    vector<int>tt;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
        if(char(s[i])==char(s[j+1])){
            count++;
        }
        }
        tt.push_back(count);
        count=0;
    }

    sort(tt,tt+si);
    
}
int main(){
        int p=char('a');
        int t=char('A');
        
    for(int i=0;i<26;i++){
        p=t;
        p++;
        t++;

    }
    return 0;
}