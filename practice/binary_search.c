#include <cs50.h>
#include <stdio.h>

bool search(int value, int values[], int n);

int main(void)
{
    int nums[] = {5, 11, 26, 27, 28, 64, 87};
    int length_nums = sizeof(nums) / sizeof(int);
    printf("%i\n", search(11, nums, length_nums));
}

/**
*  Повертає значення true, якщо значення value є в масиві
*  values, інакше - false.
*/

bool search(int value, int values[], int n)
{
  // Встановити значення верхньої і нижньої межі пошуку
  int lower = 0;
  int upper = n - 1;

  while(lower <= upper)
  {
   int middle = (lower + upper) / 2;

        if (values[middle] == value)
        {
            return true;
        }
        else if (values[middle] < value)
        {
            lower  = middle + 1;
        }
        else if (values[middle] > value)
        {
            upper  = middle - 1;
        }

  }

  return false;
}