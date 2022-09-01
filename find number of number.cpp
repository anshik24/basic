int num(int a[], int n, int k)
{
   int  count=0;
    for(int i=0;i<n;i++) {
        int ele=a[i];
    while(ele !=0){
        int digit=ele%10;
        if(digit==k){
        count++;
    } 
    ele=ele/10;
    }
    }
    return  count;
}
