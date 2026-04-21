/*Write a generic class template to calculate area of square using different data types.*/

#include <iostream>
using namespace std;
template <class T>
class Square{
public:
    T area(T side){
        return side*side;
    }
};
int main(){
    Square<int> intObj;
    Square<float> floatObj;
    cout<<"INT AREA"<<endl;
    cout<<"Area: "<<intObj.area(5)<<endl;
    cout<<"FLOAT AREA"<<endl;
    cout<<"Area: "<<floatObj.area(5.5)<<endl;
    return 0;
}
