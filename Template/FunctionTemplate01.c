#include <iostream>
using namespace std;

template <typename T>
T calcSquare(T length){
    T square = length*length;
    return square;
}

int main()
{
    int a;
    float b;
    cout<<"Enter an integer and a float: ";
    cin>>a>>b;
    cout<<"\nSquare of int: "<<calcSquare<int>(a)<<endl;
    cout<<"Square of float: "<<calcSquare<float>(b)<<endl;
    return 0;
}
