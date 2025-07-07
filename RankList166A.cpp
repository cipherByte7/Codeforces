#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

void sort1(vector <pair<int ,int>> v, n) {
    bool swapped; 
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Reset swapped flag for the current pass
        
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (v[j] > v[j + 1]) {
                // Swap if they are in the wrong order
                int temp = arr[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                swapped = true; // Set flag to true as a swap occurred
            }
        }
        
        // If no two elements were swapped by inner loop, break
        if (!swapped) {
            break;
        }
    }
}

int main() {

    int n,k;
    cin>>n>>k;

    vector <pair <int, int>> v(n);
    

    for(int i=0; i<n; i++){
        cin>> v[i].first >> v[i].second;
    }

    sort1(v,n);

    return 0;
}





 