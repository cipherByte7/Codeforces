#include <iostream>
using namespace std;

int main() {

    int arr[5][5];
    int x,y;
    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){

            cin>>arr[row][col];
        }
    }

     for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){

            if(arr[row][col]){
                x=row;
                y=col;
            }
        }
    }


    int ans=0,a,b;

    a=x-2;
    b=y-2;

    if(a<0)
    a=a*-1;

    if(b<0)
    b=b*-1;



    ans = a+b;
    cout<<ans<<endl;

    return 0;
}