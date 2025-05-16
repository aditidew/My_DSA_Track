#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
pair<int, int> twosum(vector<int> &arr, int sum){
    int n= arr.size();
int left = 0;
int right = n-1;
while(left<right){
    int currsum= arr[left] + arr[right] ;
    if(currsum == sum){
        return {left, right};
    }
     else if(sum> currsum){
left++;
     }
     else {
            right--;
        }
       
     }
     return {-1, -1};
}





int main(){
    vector<int> arr= {0,1,2,6,3,9};
    int n=7;
    int sum= 5;
    pair<int, int> result = twosum(arr, sum);

    if (result.first != -1)
        cout << "Pair found at index: " << result.first << " and " << result.second << endl;
    else
        cout << "No pair found." << endl;

    return 0;
}