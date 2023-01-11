#include <stdio.h>

main() {
	int n,arr[20],i,j;
  printf("Enter number of elements of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter an element of the array:");
		scanf("%d",&arr[i]);
	}
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("Array after implementing Bubble sort: ");
  for (i = 0; i < n; i++) {
    printf("%d  ", arr[i]);
  }
}

output
Enter number of elements of the array :5
Enter an element of the array:47
Enter an element of the array:34
Enter an element of the array:21
Enter an element of the array:89
Enter an element of the array:12
Array after implementing Bubble sort: 12  21  34  47  89
