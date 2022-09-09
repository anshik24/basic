	void segregateEvenOdd(int arr[], int n) {
	    vector<int>even;
	    vector<int>odd;
	    int count =0;
	    int count2=0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	        even.push_back(arr[i]);
	        count++;
	        }
	        else if(arr[i]%2==1){
	        odd.push_back(arr[i]);
	        count2++;
	    }
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(count>i){
	        arr[i]=even[i];
	    }
	    else{
	        arr[i]=odd[j];
	        j++;
	    }
	    }
	}
};
