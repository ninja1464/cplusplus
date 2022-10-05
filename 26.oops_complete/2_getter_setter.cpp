
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
#include<fstream>
#include<queue>
#include<cstring>
#include<sstream>

using namespace std;

class mypair{
    private://by deafult if we not specify acceses specifier then it is private by default
        int age,var2;
    public:
        void getters(){
            cout<<this->age<<" "<<this->var2<<endl;
        }

        
        
        void setters(int age,int var2){
            string pass;
            cin>>pass;
            //used to set varible of objects when declared in private section
            if(age<0 || age>100){
                cout<<"we cant set your age bcuz it does lie in the range"<<endl;
                return;
            }
            if(pass=="abc"){
                this->age=age;
                this->var2=var2;
            }
            // this->age=age;
            // this->var2=var2;
        }
};
int main(){

    mypair ob;
    ob.setters(101,20);
    ob.getters();
    ob.setters(50,20);
    ob.getters();
  
  return 0;
}
