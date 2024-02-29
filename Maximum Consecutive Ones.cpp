int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int maximum = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            count++;
            maximum = max(maximum,count);
        } else {
            count = 0;
        }
    }
    return maximum;
}
