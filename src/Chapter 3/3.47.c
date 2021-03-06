/*

3.47

(World Population Growth Calculator) 
Use the web to determine the current world population and the annual world population growth rate. 
Write an application that inputs these values, then displays the estimated world population
after one, two, three, four and five years.

*/

 #include <stdio.h>

 int main()

 {

   float CurrentPopulation, GrowthRate, Estimated;

   int i = 1;

   printf("\nInsert current population : ");

   scanf("%f", &CurrentPopulation);

   printf("\nInsert growth rate : ");

   scanf("%f", &GrowthRate);

   while(i <= 5) {

     Estimated += CurrentPopulation*GrowthRate;

     printf("\nEstimated growth after %d-years : %f", i, Estimated);

     i++;

   }

   return 0;

 }

/**************************************************************************
 * (C) Copyright 2019 by bikerinside                                      *
 *                                                                        *
 * DISCLAIMER:                                                            *
 * The author make no warranty of any kind, expressed or implied,         *
 * with regard to these programs.                                         *
 * The author shall not be liable in any event for incidental or          *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
