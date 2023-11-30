//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool twosum2pointerapproach(int arr[], int n, int x){
        sort(arr,arr+n);
        int L=0;
        int R=n-1;
        int sum = 0;
        while(L<R){
            sum = arr[L]+arr[R];
            if(sum==x){
                return true;
            }
            else if(sum>x){
                R--;
                
            }
            else {
                L++;
            }
        }
        return false;
    }
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    return twosum2pointerapproach(arr,n,x);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends