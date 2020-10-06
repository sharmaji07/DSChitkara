#include<stdio.h>

float euler_function(float a, float b)
{
      float result;
      result = a * b;
      return (result);
}

int main()
{
      float y1, y2, x1, interval_start, interval_end, length;
      int count;
      printf("\nEnter value for Interval start:\t");
      scanf("%f", &interval_start);
      printf("\nEnter value for Interval end:\t");
      scanf("%f", &interval_end);
      printf("\nEnter value for width:\t");
      scanf("%f", &length);
      printf("\nEnter value for Y(1):\t");
      scanf("%f", &y1);
      printf("\n\nX\tCorresponding Y value\n");
      for(x1 = interval_start, count = 2; x1 <= interval_end + length; x1 = x1 + length, count++)
      {
            y2 = y1 + length * euler_function(x1, y1);
            printf("\n%.4f\t%.4f ", x1, y2);
            y1 = y2;
      }
      return 0;
}

