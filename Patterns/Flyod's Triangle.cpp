//Program to output flyod's triangle
#include <iostream>

using namespace std;

class flyod{
    public:
        flyod(int num){
            int a=1;
            for(int i=1; i<=num; i++){
                for(int j=0; j<i; j++){
                    cout<<a<<" ";
                    a++;
                }
                cout<<endl;
            }
        }
};

int main()
{
    int num;
    cout<<"Enter the number of rows of Flyod's triangle to print: ";
    cin>>num;
    flyod f1(num);
    return 0;
}
