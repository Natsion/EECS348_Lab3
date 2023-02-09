#include <stdio.h>

void
main ()
{
  float values[12], sum, max, min, t = 0;
  int i, j;
  char * months[12] = {
      "January",
      "Febuary",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December"
  };
  
  char min_month, max_month;

  printf ("Enter the sales for the year:\n\n");
  for (i = 0; i < 12; i++)
    {
      scanf ("%f", &values[i]);
      sum += values[i];
    }

    for (i = 0; i < 12; i++)
    {
      printf ("\n%s %.2f", months[i], values[i]);
    }
  max = values[0];
  min = values[0];

  for (i = 1; i < 12; i++)
    {
      if (values[i] > max)
	{
	  max = values[i];
	}


      if (values[i] < min)
	{
	  min = values[i];
	}
  }
  printf ("\n\nMinimum Sales: %.2f \n", min);
  printf ("Maximum Sales: %.2f\n", max);
  printf ("Average Sales: %.2f\n\n", (sum / 12));

  int x = 0;
  float tempsum;
  printf ("Six-Month Moving Average Report:\n");

  //-----------------------------------------------------------

  for (i = 0; i < 6; i++)
    {
      tempsum += values[i];
    }
  printf ("\nJanuary   - June           %.2f", (tempsum / 6));
  tempsum = 0;
  //-----------------------------------------------------------

  for (i = 1; i < 7; i++)
    {
      tempsum += values[i];
    }
  printf ("\nFebruary  - July           %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  for (i = 2; i < 8; i++)
    {
      tempsum += values[i];
    }
  printf ("\nMarch     - August         %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  for (i = 3; i < 9; i++)
    {
      tempsum += values[i];
    }
  printf ("\nApril     - September      %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  for (i = 4; i < 10; i++)
    {
      tempsum += values[i];
    }
  printf ("\nMay       - October        %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  for (i = 5; i < 11; i++)
    {
      tempsum += values[i];
    }
  printf ("\nJune      - November       %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  for (i = 6; i < 12; i++)
    {
      tempsum += values[i];
    }
  printf ("\nJuly      - December       %.2f", (tempsum / 6));
  tempsum = 0;

  //-----------------------------------------------------------

  printf ("\n\nSales Report (Highest to Lowest): \n");
  for (i = 0; i < 12; i++)
    {
      for (j = i + 1; j < 12; j++)
	{

	  if (values[i] < values[j])
	    {
	      t = values[i];
	      values[i] = values[j];
	      values[j] = t;
	    }
	}
    }
  for (i = 0; i < 12; i++)
    {

      printf ("\n%s %.2f", months[i], values[i]);
    }

}
