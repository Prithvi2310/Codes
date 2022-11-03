#include <iostream>
using namespace std;

template<typename T>
void findDuplicate(T arr1[],int arrSize)
{
    for(int i=0; i<arrSize; i++){
        for(int j=i+1; j<arrSize; j++){
            if(arr1[i]==arr1[j])
                cout<<arr1[j]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int arr1[] = {1,2,3,4,2,7,8,8,3};
    int arrSize = sizeof(arr1)/sizeof(arr1[0]);
    findDuplicate<int>(arr1, arrSize);
    float arr2[] = {1,9.6,3.4,8,9.6,4,3.4,2.3,2.3,10};
    arrSize = sizeof(arr2)/sizeof(arr2[0]);
    findDuplicate<float>(arr2, arrSize);
    return 0;
}
