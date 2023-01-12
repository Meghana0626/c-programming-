#include<stdio.h>
int x,n,s,c,arm=0,rem,sum=0,i,perf=0;
main()
{
	
	printf("Enter a num:");
	scanf("%d",&n);
	c=n;
	for(i = 1; i < n; i++)  {  
        rem = n % i;  
        if (rem == 0){  
            sum = sum + i; 
	}  
    }  
if (sum == n) {
	perf+=1;	
} 
	while (n>0)
	{
	x=n%10;
	s=s+(x*x*x);
	n=n/10;
}
if (c==s)
{
arm+=1;
}
if(arm==1){
	printf("%d is an Armstrong number\n",c);
}
else{
	printf("%d is not an Armstrong number\n",c);
}
if(perf==1){
	printf("%d is a Perfect number\n",c);
}
else{
	printf("%d is not a Perfect number\n",c);
}
}

Output
Input any number: 371
Expected Output :
The 371 is an Armstrong number.                                                 
The 371 is not a Perfect number.
