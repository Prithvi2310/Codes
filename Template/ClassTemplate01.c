#include <iostream>
using namespace std;

template<class T>
class add
{
    T a,b,sum;
public:
    add(T x, T y){
        a = x;
        b = y;
        sum = a+b;
    }
    void display(){
        cout<<"Sum of the numbers: "<<sum<<endl;
    }
};

int main()
{
    int a,b;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    add<int> s1(a,b);
    s1.display();
    float c,d;
    cout<<"\nEnter 2 floats: ";
    cin>>c>>d;
    add<float> s2(c,d);
    s2.display();
    return 0;
}
