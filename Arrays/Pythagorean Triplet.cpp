class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    reverse(arr,arr+n);
	    for(int i=0;i<n;i++){
	    int x=arr[i]*arr[i];
	    int low=i+1;
	    int high=n-1;
	    while(low<high){
	        int temp=arr[low]*arr[low]+arr[high]*arr[high];
	       if(temp==x){
	           return true;
	       }
	       if(temp<x){
	           high--;
	       }
	       else low++;
	    }
	    }
	    return false;
	}
};
