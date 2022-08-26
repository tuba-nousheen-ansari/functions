
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        if (arr[mid] == x)  return mid;
  
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
  
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
  
int main(void)
{
   int n;
	printf("enter a limit of array\n");
	scanf("%d",&n);
	
	int a[n],t,i;
	
	printf("enter a %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

    printf("enter a element which you want to search in array\n");
	scanf("%d",&t);
   int result = binarySearch(a, 0, n-1, t);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result+1);
   return 0;
}