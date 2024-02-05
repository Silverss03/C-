#include <bits/stdc++.h> 
using namespace std; 

vector<int> get_submaxarr(int* arr, int n, int y) 
{ 
    int j = 0; 
    stack<int> stk; 
    // ith index of maxarr array 
    // will be the index upto which 
    // Arr[i] is maximum 
    vector<int> maxarr(n); 
    stk.push(0); 
    for (int i = 1; i < n; i++) { 
  
        // Stack is used to find the 
        // next larger element and 
        // keeps track of index of 
        // current iteration 
        while (stk.empty() == false and arr[i] > arr[stk.top()]) { 
  
            maxarr[stk.top()] = i - 1; 
            stk.pop(); 
        } 
        stk.push(i); 
    } 
  
    // Loop for remaining indexes 
    while (!stk.empty()) { 
  
        maxarr[stk.top()] = n - 1; 
        stk.pop(); 
    } 
    vector<int> submax; 
  
    for (int i = 0; i <= n - y; i++) { 
  
        // j < i used to keep track 
        // whether jth element is 
        // inside or outside the window 
        while (maxarr[j] < i + y - 1 or j < i) { 
            j++; 
        } 
  
        submax.push_back(arr[j]); 
    } 
  
    // Return submax 
    return submax; 
} 
  
// Function to get the minimum for 
// all subarrays of size Y 
vector<int> get_subminarr(int* arr, int n, int y) 
{ 
    int j = 0; 
  
    stack<int> stk; 
  
    // ith index of minarr array 
    // will be the index upto which 
    // Arr[i] is minimum 
    vector<int> minarr(n); 
    stk.push(0); 
  
    for (int i = 1; i < n; i++) { 
  
        // Stack is used to find the 
        // next smaller element and 
        // keeping track of index of 
        // current iteration 
        while (stk.empty() == false
            and arr[i] < arr[stk.top()]) { 
  
            minarr[stk.top()] = i; 
            stk.pop(); 
        } 
        stk.push(i); 
    } 
  
    // Loop for remaining indexes 
    while (!stk.empty()) { 
  
        minarr[stk.top()] = n; 
        stk.pop(); 
    } 
  
    vector<int> submin; 
  
    for (int i = 0; i <= n - y; i++) { 
  
        // j < i used to keep track 
        // whether jth element is inside 
        // or outside the window 
  
        while (minarr[j] <= i + y - 1 or j < i) { 
            j++; 
        } 
  
        submin.push_back(arr[j]); 
    } 
  
    // Return submin 
    return submin; 
} 
  
// Function to get minimum difference 
void getMinDifference(int Arr[], int N, int Y) 
{ 
    // Create submin and submax arrays 
    vector<int> submin 
        = get_subminarr(Arr, N, Y); 
  
    vector<int> submax 
        = get_submaxarr(Arr, N, Y); 
  
    // Store initial difference 
    int minn = submax[0] - submin[0]; 
    int b = submax.size(); 
  
    for (int i = 1; i < b; i++) { 
  
        // Calculate temporary difference 
        int dif = submax[i] - submin[i]; 
        minn = min(minn, dif); 
    } 
  
    // Final minimum difference 
    cout << minn << "\n"; 
} 
  
// Driver Code 
int main() 
{ 
    // Given array arr[] 
    int arr[] = { 3, 4, 1, 9, 56, 7, 9, 12}; 
    int N = sizeof arr / sizeof arr[0]; 
  
    // Given subarray size 
    int Y = 5; 
  
    // Function Call 
    getMinDifference(arr, N, Y); 
    return 0; 
}
