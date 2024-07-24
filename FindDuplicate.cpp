// Find duplicate number in an aray
/* Using Hashmap Approach
    Use the input array to sore the frequency of each element. While travling the array, if an element is encountered then check if its frequency is greaer then 1,
    then put it in the result array. If result aray is enpty then return -1 else sort the array and return the array.*/

//#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>duplicates(long long a[], int n){
    // Create unordered map
    unordered_map<long long, int> freqMap;
    vector<int> result;

    // Iterate throught an array and count element frewquencies
    for(int i=0; i<n ; i++)
    {
        freqMap[a[i]]++;
    }

    //Iterate through the hashmap to find duplicates
    for(auto& entry : freqMap)
    {
        if(entry.second > 1)
        {
            result.push_back(entry.first);
        }
    }

    // If no duplicate found , add -1 to the result
    if(result.empty())
    {
        result.push_back(-1);
    }

    //sort the result
    sort(result.begin(), result.end());

    // Return the result vector containing the duplicates element
    return result;
    

}
int main()
{
    long long a[] ={1,1,6,5,4,3,3,2,2};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int>duplicates_found = duplicates(a, n);
    cout<<"Count duplicate elements: ";
    for(int elements:duplicates_found)
    {
        cout<<elements<<" ";
    }
    cout<<endl;

    return 0;
}