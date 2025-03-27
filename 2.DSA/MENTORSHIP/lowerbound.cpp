// Binary Search Lower Bound
// This code finds the lower bound of a given element in a sorted array using binary search.
# include <bits/stdc++.h>
# include <vector>
# include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cin>>key;
    // Lower bound function
    // It returns an iterator pointing to the first element that is not less than key
    auto it = lower_bound(v.begin(), v.end(), key);
    // If the iterator is not at the end of the vector, it means the key is present
    if(it != v.end())
    {
        cout << "Lower bound of " << key << " is at index: " << it - v.begin() << endl;
        cout << "Value at lower bound: " << *it << endl;
    }
    else
    {
        cout << "Lower bound not found" << endl;
    }
    // If the key is greater than all elements, it will return the end iterator
    // If the key is less than all elements, it will return the begin iterator
    // If the key is present, it will return the iterator pointing to the first occurrence of the key
    // If the key is not present, it will return the iterator pointing to the first element that is greater than the key
    

    // Example:
    // Input: 1 2 3 4 5
    // Key: 3
    // Output: Lower bound of 3 is at index: 2
    // Value at lower bound: 3
    // Input: 1 2 3 4 5
}