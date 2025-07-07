#include <iostream>
#include <vector>
using namespace std;

int mnai() {

    int n,k;
    cin>>n>>k;
     vector <int> arr;

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    if(arr[k]==0){
      cout<<"0"<<endl;
      return 0;
    }

    int index =k;
    

    while(arr[index]==arr[index+1] && index+1<n){
        index++;
    }

    cout<<index<<endl;


    return 0;
}