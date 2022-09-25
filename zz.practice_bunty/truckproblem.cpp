#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    int  n;
    cin>>n;
    int p[n],d[n];
    for(int i=0;i<n;i++){
        cin>>p[i]>>d[i];
    }
    int count;
    //int curr_patrol=0;
    
     for (int i = 0; i < n; i++) {
        // Identify the first petrol pump from where we
        // might get a full circular tour
        if (p[i] >= d[i]) {
            count = i;
            break;
        }
    }
    // for(int i=0;i<n;i++){
    //    //curr_patrol =+ p[i]-d[i];
    // if(p[i]<d[i]){
    //  continue;
    // }else{
    //   count=i;
    //   break;
    // }
    // }

    int curr_patrol=0;
    
    for(int i=count;i<n;){
      curr_patrol += p[i]-d[i];
      if(curr_patrol<0){
        i++;
      
      for(;i<n;i++){
        curr_patrol =+ p[i]-d[i];
        if(curr_patrol<0){
          count=i;
          curr_patrol=0;
          break;
        }
      }
      }else{
        i++;
      }
    }
    
    // if (curr_patrol < 0) {
    //     return -1;
    // }
 
    // for (int j = 0; j < count; j++) {
 
    //     curr_patrol += (p[j] - d[j]);
 
    //     // If remaining petrol is less than 0 at any point
    //     // before we reach initial start, it means no
    //     // circular tour is possible
    //     if (curr_patrol < 0) {
    //         return -1;
    //     }
    // }

    cout<<count<<endl;
return 0;
}