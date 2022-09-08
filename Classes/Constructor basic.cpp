//Decimal to binary conversion using constructor.

#include <iostream>

using namespace std;

class binary{
    public:
        int i=1, binaryNum=0;
        binary(int num){
            while(num){
              //Using the logic of the power of 10 in any integer.
                binaryNum += (num%2) * i;
                i *= 10;
                num /= 2;
            }
            cout<<"Binary equivalent of the input decimal number: "<<binaryNum<<endl;
        }
        ~binary{
            cout<<"\nMemory Space freed";
        }
};

int main()
{
    int n,flag=1;
    while(flag){
        cout<<"Enter the decimal number to be converted: ";
        cin>>n;
        binary b1(n);
        cout<<"\nEnter 0 to quit and 1 to continue: ";
        cin>>flag;
        cout<<endl;
        if(flag==1)
            continue;
        else if(flag==0)
            flag==0;
    }
    return 0;
}
