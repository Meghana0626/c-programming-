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
	printf("which maximum number do you want to find:");
	scanf("%d",&m);
	printf("Which minimum number do you want to find:");
	scanf("%d",&n);
	printf("Mth maximum number: %d \n",arr[(l-1)-(m-1)]);
	printf("Nth minimum number: %d \n",arr[n-1]);
	printf("Sum = %d \n",arr[(l-1)-(m-1)]+arr[n-1]);
	printf("Difference = %d \n",arr[(l-1)-(m-1)]-arr[n-1]);
}


output
Enter number of elements of the array :7
Enter an element of the array:14
Enter an element of the array:16
Enter an element of the array:87
Enter an element of the array:36
Enter an element of the array:25
Enter an element of the array:89
Enter an element of the array:34
which maximum number do you want to find:1
Which minimum number do you want to find:3
Mth maximum number: 89
Nth minimum number: 25
Sum = 114
Difference = 64
