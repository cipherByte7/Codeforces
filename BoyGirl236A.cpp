#include <iostream>
using namespace std;

int main()
{

    string user;
    cin >> user;
    int n= user.length();


    char arr[26]= {0};

    for(int i=0; i<n; i++){
        int index;
        index = user[i]- 'a' ;
        arr[index]++;
       
    }

    int count=0;

    for(int j=0; j<26; j++){ 
        if(arr[j]>0){
            count++;
           
        }
    }

    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }else{
        cout<<"CHAT WITH HER!";
    }

    return 0;
}