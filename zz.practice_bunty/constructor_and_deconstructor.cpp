#include<iostream>
using namespace std;
class base{
    private:
    int base_value;
    public:
    base():base_value{0}{
        cout<<"no arg base value"<<endl;
        
    }
    ~base(){
            cout<<"base constructor destroyed"<<endl;;
        }
};

class derived:public base{
    private:
    int derived_value;
    public:
    derived():derived_value{0}{cout<<"no arg Derived value"<<endl;}
    derived(int x):derived_value{x*3}{cout<<"arg derived value"<<endl;}
    ~derived(){
        cout<<"derived constructor destroyed"<<endl;
    }
};

int main(){
    derived d;

    return 0;
}