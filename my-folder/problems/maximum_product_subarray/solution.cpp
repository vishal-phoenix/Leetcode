class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int p1=1;
	    int p2=1;
	    int maxi = INT_MIN;
	    for(int i=0;i<n;i++){
	        int x ;
	        if(a[i]==0){
	            p1 = 1;
	            x=0;
	        }else{
	            p1*=a[i];
	            x=p1;
	        }
	        maxi = max(maxi,x);
	    }
	    for(int i=n-1;i>=0;i--){
	        int x;
	        if(a[i]==0){
	            p2 = 1;
	            x=0;
	        }else{
	            p2*=a[i];
	            x=p2;
	        }
	        maxi = max(maxi,x);
	    }
	    return maxi;
    }
};