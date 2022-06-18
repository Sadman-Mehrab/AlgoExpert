/*
Sorted Squared Array (18/06/22, Sadman Mehrab)
    -> Returns a sorted squared array from a sorted array of integers
    -> Time Complexity: O(n)
    -> Space Complexity: O(n)
*/
#include<iostream>
#include<vector>
#include<math.h>

#define HibanaUwU ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector <int> sortedSquaredArray(vector<int> arr){
    vector<int> newArr(arr.size());
    int l = 0;
    int r = arr.size()-1;
    int i = arr.size()-1;
    while(i>=0){
        if(abs(arr[l]) < abs(arr[r]) ) {
            newArr[i] = arr[r]*arr[r];
            r--;
        }
        else {
            newArr[i] = arr[l]*arr[l];
            l++;
        }
        i--;
    }
    return newArr;
}


int main(){

    HibanaUwU
    vector<int> arr = {-11,-7,-2,1,5,6,8,9,10};
    for(int x: arr) cout<<x<<" "; cout<<"\n";

    vector<int> arrSquared = sortedSquaredArray(arr);
    for(int x: arrSquared) cout<<x<<" "; cout<<"\n";

return 0;}
