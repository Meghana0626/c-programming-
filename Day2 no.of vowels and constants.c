#include<stdio.h>
#include<string.h>
#define MAX 100
main()
{
char str[MAX];
int a,vowel,consonant,i;
printf("Enter a string:");
scanf("%[^\n]s",&str);
vowel=0;
consonant=0;
a=strlen(str);
for(i=0; i<a; i++)
    {
    if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
    else{
    	consonant++;
	}
    }
    

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
}

output
Enter a string: HYPOTHECATION
Total number of vowel = 5
Total number of consonant = 9
  
  Enter a string:MATRICULATION
Total number of vowel = 6
Total number of consonant = 7
    
    Enter a string:MANIPULATION
Total number of vowel = 6
Total number of consonant = 6

      Enter a string:SEDIMENTATION
Total number of vowel = 6
Total number of consonant = 7
        
        Enter a string:EXPERIMENTATION
Total number of vowel = 7
Total number of consonant = 8
