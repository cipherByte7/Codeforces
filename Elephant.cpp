#include<iostream>
using namespace std;
int main() {

    int dist ;
    cin>>dist;

    int steps=0;

    steps = dist/5;
    dist = dist %5;

    steps = steps + dist/4;
    dist = dist%4;

    steps = steps + dist/3;
    dist = dist%3;

    steps = steps + dist/2;
    dist = dist%2;

    steps = steps + dist/1;
    dist = dist%1;


  cout<< steps;

    return 0;
}