#include <stdio.h>

void shellSort(int array[], int n)
 {
  for (int interval = n / 2; interval > 0; interval /= 2) 
  {
    for (int i = interval; i < n; i += 1) 
    {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
      {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

void printArray(int array[], int size) 
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() 
{
  int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
  shellSort(a, n);
  printf("Sorted array: \n");
  printArray(a, n);
}