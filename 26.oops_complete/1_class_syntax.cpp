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

class rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return this->length*this->breadth;
        }
        int parameter(){
              //cout<<this<<endl; //this keyword has the current object address
            return 2*(this->length+this->breadth);
        }

        
        rectangle(int length,int breadth){
            
            this->length=length;
            this->breadth=breadth;
            cout<<this<<endl;
        }

};
int main(){

    rectangle myrec(10,20);
    rectangle * rec2 = new rectangle(50,60);
    cout<<myrec.area()<<endl;
    cout<<myrec.parameter()<<endl;
    cout<<&myrec<<endl;
    cout<<myrec.length<<endl;
    cout<<myrec.breadth<<endl;
    cout<<(rec2->area())<<endl;
    cout<<(rec2->parameter())<<endl;
    

    // cout<<this<<endl;

  
  return 0;
}