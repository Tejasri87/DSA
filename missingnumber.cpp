int missingNumber(int* nums, int n) {
      int sum=0,sum1 = (n*(n+1))/2;
    for(int i=0;i<n;i++) {
        sum+=nums[i];
    }
    return sum1-sum;
}
