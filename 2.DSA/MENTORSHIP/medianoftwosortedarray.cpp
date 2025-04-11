// Given two sorted arrays arr1 and arr2 of size m and n respectively, return the median of the two sorted arrays.

// The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements.

// Given two sorted arrays arr1 and arr2 of size m and n respectively, return the median of the two sorted arrays.

// The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements.
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int>v1;
//     vector<int>v2;
//     for(int i=0;i<3;i++)
//     {
//         int x;
//         cin>>x;
//         v1.push_back(x);
//     }
//     for(int i=0;i<2;i++)
//     {
//         int x;
//         cin>>x;
//         v2.push_back(x);
//     }
//     int n1=v1.size();
//     int n2=v2.size();
//     int n=n1+n2;
//     int i=0,j=0;
//     int m1=-1,m2=-1;
//     while(i<n1 && j<n2 && i+j<=n/2){
//         m2=m1;
//         if(v1[i]<v2[j]){
//             m1=v1[i];
//             i++;
//         }
//         else{
//             m1=v2[j];
//             j++;
//         }
//     }
//     while(i<n1 && i+j<=n/2){
//         m2=m1;
//         m1=v1[i];
//         i++;
//     }
//     while(j<n2 && i+j<=n/2){
//         m2=m1;
//         m1=v2[j];
//         j++;
//     }
//     if(n%2==0){
//         cout<<(m1+m2)/2.0<<endl;
//     }
//     else{
//         cout<<m1<<endl;
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find the median of two sorted arrays.
    double median(vector<int>& arr1, vector<int>& arr2) {
        // Size of two given arrays
        int n1 = arr1.size(), n2 = arr2.size();

        /* Ensure arr1 is not larger than 
        arr2 to simplify implementation*/
        if (n1 > n2) return median(arr2, arr1);

        int n = n1 + n2;
        
        // Length of left half
        int left = (n1 + n2 + 1) / 2; 

        // Apply binary search
        int low = 0, high = n1;
        while (low <= high) {
            
            // Calculate mid index for arr1
            int mid1 = (low + high) >> 1; 
            
            // Calculate mid index for arr2
            int mid2 = left - mid1; 

            // Calculate l1, l2, r1, and r2
            int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
            int r1 = (mid1 < n1) ? arr1[mid1] : INT_MAX;
            int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
            int r2 = (mid2 < n2) ? arr2[mid2] : INT_MAX;

            if (l1 <= r2 && l2 <= r1) {
                // If condition for finding median
                if (n % 2 == 1) return max(l1, l2);
                else return (max(l1, l2) + min(r1, r2)) / 2.0;
            } 
            else if (l1 > r2) {
                // Eliminate the right half of arr1
                high = mid1 - 1;
            } else {
                // Eliminate the left half of arr1
                low = mid1 + 1;
            }
        }
        // Dummy statement
        return 0; 
    }
};

int main() {
    vector<int> arr1 = {1, 4, 7, 10, 12};
    vector<int> arr2 = {2, 3, 6, 15};

    // Create an instance of the Solution class
    Solution sol;

    // Print the median of the two sorted arrays
    cout << "The median of two sorted arrays is " << fixed << setprecision(1)
         << sol.median(arr1, arr2) << '\n';

    return 0;
}