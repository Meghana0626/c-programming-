#include<stdio.h>
main(){
	int arr[100];
	int l,i,j,m,n;
	printf("Enter number of elements of the array :");
	scanf("%d",&l);
	for(i=0;i<l;i++){
		printf("Enter an element of the array:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<l-1;i++){
		for(j=i+1;j<l;j++){
			if(arr[i]>arr[j]){
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("Which smallest number do you want to find:");
	scanf("%d",&n);
	printf("%d smallest number: %d \n",n,arr[n-1]);
}

output
Enter number of elements of the array :5
Enter an element of the array:47
Enter an element of the array:34
Enter an element of the array:21
Enter an element of the array:89
Enter an element of the array:12
Which smallest number do you want to find:3
3 smallest number: 34
