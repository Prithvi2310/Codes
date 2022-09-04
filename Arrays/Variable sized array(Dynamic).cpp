#include <iostream>

using namespace std;

int main()
{
    /****************************
     * n = number of variable length arrays to be created.
     * q = number of queries for the created arrays.
     * k = length of the arrays created after specifying the number of variable arrays to be created.
     * **************************/
    int n,q,k,j;
    cin>>n>>q;
    //array of pointers to store addresses of successive arrays created.
    int *arr[n];
    for(int i=0; i<n; i++){
        cin>>k;
        //Dynamic array creation 
        arr[i] = new int(k);
        for(j=0; j<k; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<q; i++){
        int x,y;
        cin>>x>>y;
        cout<<arr[x][y]<<endl;
    }
    return 0;
}
