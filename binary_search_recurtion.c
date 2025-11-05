int Binary_search_rec(int arr[],int low,int high,int x)
{
	if(low>high) return -1;
	else
	{
		int mid=(low+high)/2;

    if (arr[mid]==x)
        return mid;

    if (arr[mid]<x)
        return Binary_search_rec(arr,mid+1,high,x);

    else
        return Binary_search_rec(arr,low,mid-1,x);
	}
    
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int k;
	scanf("%d",&k);
	int r=Binary_search_rec(num,0,n-1,k);
	printf("%d",r);
}
