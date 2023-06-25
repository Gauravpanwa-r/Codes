#include <stdio.h>
void selection_sorting(int *sort);
void main()
{
   int sort[5] = {44, 33, 55, 22, 11};
   selection_sort(sort);
}
void selection_sorting(int *sort)
{
   for (int i = 0; i < 4; i++)
   {
      for (int j = 5; j >= 1; j--)
      {
         if (i == 3 && j == 1)
            printf("%d\n", *sort);

         if (*sort > *++sort)
            sort = ++sort;
      }
   }
}
bdfdb()