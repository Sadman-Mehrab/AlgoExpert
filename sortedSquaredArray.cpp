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
    vector<int> newArr;
    int l = 0;
    int r = arr.size()-1;
    while(l<r){
        if(abs(arr[l]) < abs(arr[r]) ) {
            newArr.insert(newArr.begin(),arr[r]*arr[r]);
            r--;
        }
        else if(abs(arr[l]) > abs(arr[r]) ) {
            newArr.insert(newArr.begin(),arr[l]*arr[l]);
            l++;
        }
    }
    newArr.insert(newArr.begin(),arr[l]*arr[l]);
    return newArr;
}


int main(){

    HibanaUwU
    vector<int> arr = {-11,-7,-2,3,5,6,8,9,10};
    for(int x: arr) cout<<x<<" "; cout<<"\n";

    vector<int> arrSquared = sortedSquaredArray(arr);
    for(int x: arrSquared) cout<<x<<" "; cout<<"\n";

return 0;}
