#include <iostream>
using namespace std;

template <class T>
class greatest
{
    T a, b, max_;
public:
    greatest(T x, T y){
        a = x;
        b = y;
    }
    void display(){
        if(a>=b)
            max_ = a;
        else
            max_ = b;
        cout<<"Maximum of the two numbers: "<<max_<<endl;
    }
    ~greatest(){
        cout<<"\nDestructor executed.";
    }
};
int main()
{
    int a,b;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    greatest<int> obj1(a,b);
    obj1.display();
    float c,d;
    cout<<"\n\nEnter 2 floats: ";
    cin>>c>>d;
    greatest<float> obj2(c,d);
    obj2.display();
    return 0;
}
