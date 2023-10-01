void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    long min_sum = 0, max_sum=0;
    for(int i = 0; i<arr.size();i++)
    {
        if(i>0)
        {
            max_sum += arr[i]; 
        }
        
        if(i<arr.size()-1)
        {
            min_sum+= arr[i];
        }
        
    }
    
    cout<<min_sum<<" "<<max_sum;

}
