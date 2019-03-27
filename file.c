#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   char name[10],roll[10],year[10];
};

int main()
{
    int n;
   struct threeNum num;
   FILE *fptr;

   fptr = fopen("helo.txt","w+");
   for(n = 0; n < 3; n++)
   {
        scanf("%s",num.name);
        scanf("%s",num.roll);
        scanf("%s",num.year);
      fprintf(fptr,"%s %s %s", &num.name, &num.roll, &num.year);
   }
   fclose(fptr);

   return 0;
}
