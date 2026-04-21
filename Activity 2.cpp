/*Write a C++ program using a class template to find the maximum of three values.*/

#include <iostream>
using namespace std;
template <class T>
class MaxValue{
public:
    T findMax(T a,T b,T c){
        if(a>b && a>c)
            return a;
        else if(b>c)
            return b;
        else
            return c;
    }
};
int main(){
    MaxValue<int> intObj;
    MaxValue<float> floatObj;
    cout<<"INT MAX"<<endl;
    cout<<"Maximum: "<<intObj.findMax(10,20,15)<<endl;
    cout<<"FLOAT MAX"<<endl;
    cout<<"Maximum: "<<floatObj.findMax(10.5,5.2,8.3)<<endl;
    return 0;
}
