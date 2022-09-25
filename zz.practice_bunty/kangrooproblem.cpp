#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int dd=x1+v1;
    int dd1=x2+v2;
    int sum1,sum=0;
    for(int i=0;i<1000;i++){
       sum=dd+sum;

       sum1=dd1+sum1;
       if(sum==sum1){
           cout<<"yes"<<endl;
           break;
           }else{
               continue;
           }
           
           //break;
    //    }else{
    //        cout<<"no"<<endl;
    //        //break;
    //    }
       //break;
    }


return 0;
}