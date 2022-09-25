#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< "  ";
        //cout<<v.at(i)<<" ";
    }

    cout<<endl;
}
int main(){
    // int size,element;
// cout<<"enter the size of your vector"<<endl;
// cin>>size;
// for (int i = 0; i < size; i++)
// {
//     cin>>element;
//     vec1.push_back(element);
// }
// //vec1.pop_back;
// display(vec1);
// vector<int> :: iterator iter = vec1.begin();
// // vec1.insert(iter+1,4,133);//this inserts element on your wish at any index and how many times you want
// display(vec1);

vector<int> vec1;
//display(vec1);
vector<char> vec2(4);//4-element character element
// vec2.push_back('5');
// display(vec2);
vector<char> vec13(vec2);//4-element vector from vec2
//display(vec1);
vector<int> vec4(4,  13);// 6-elements of 3s
display(vec4);
cout<<vec4.size();

return 0;
}
