class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        int com_diff = arr[1]-arr[0];
        for(int i=1 ; i<n ; i++){
            if(abs(arr[i]-arr[i-1]) != com_diff)
            return false;
        }
        return true;
    }

};
