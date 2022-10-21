#include<bits/stdc++.h>
using namespace std;

int gcd(int a ,int b){

     while(a!=0){
	       int temp =a;
	       a=b%a;
	       b=temp;
	        
	    }
	    
	    return b;

  

}

int main(){
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    cout<<gcd(24,18)<<endl;
    return 0;
}