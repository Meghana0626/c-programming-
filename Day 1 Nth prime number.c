#include <stdio.h>
#include<math.h>
int
main ()
{
  int rangenumber, c = 0, num = 2, i, letest = 0;
  printf ("Enter Nth Number\n");
  scanf ("%d", &rangenumber);

  while (c != rangenumber)
    {
      int count = 0;
      for (i = 2; i <= sqrt (num); i++)
 {
   if (num % i == 0)
     {
       count++;
       break;
     }
 }
      if (count == 0)
 {
   c++;
   letest = num;
 }
      num = num + 1;
    }
  printf ("%dth prime number is %d ",rangenumber,letest);
  return 0;
}


OUTPUT
Enter Nth Number
3
3th prime number is 5
  
  Enter Nth Number
11
11th prime number is 31
  
  
  Enter Nth Number
0
0th prime number is 0
