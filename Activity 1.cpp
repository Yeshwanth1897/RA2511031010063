/*Write a C++ program using a class template to store one value and display it for int and float data types.*/

#include <iostream>
using namespace std;
template <class T>
class DisplayValue{
    T value;
public:
    void setValue(T v){
        value=v;
    }
    void showValue(){
        cout<<"Value: "<<value<<endl;
    }
};
int main(){
    DisplayValue<int> intObj;
    DisplayValue<float> floatObj;
    cout<<"INT VALUE"<<endl;
    intObj.setValue(10);
    intObj.showValue();
    cout<<"FLOAT VALUE"<<endl;
    floatObj.setValue(10.5);
    floatObj.showValue();
    return 0;
}
