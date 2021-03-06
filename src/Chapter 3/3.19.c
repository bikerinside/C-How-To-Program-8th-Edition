/*

3.19

(Sales Commission Calculator) One large chemical company pays its salespeople on a commission
basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
week and will calculate and display that salesperson's earnings. Process one salesperson's figures at a
time. Here is a sample input/output dialog:

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00

Enter sales in dollars (-1 to end): 1234.56
Salary is: $311.11

Enter sales in dollars (-1 to end): 1088.89
Salary is: $298.00

Enter sales in dollars (-1 to end): -1

*/

#include <stdio.h>

int main()

{

  float Sales         = 0.0;

  int   FlagVar       = 0;

  while( Sales != -1 ) {
    /* if FlagVar is equal to zero, it means that no data is inserted */
    if( FlagVar == 1) {
    /* Calculate salary and print the value obtained */
    printf("Salary is: %.2f\n", 200.00 + ( Sales * 0.09 ) );
  }  /* End of the first if-case */

    printf("%s", "\nEnter sales in dollars ( -1 to end ): ");

    scanf("%f", &Sales);

    FlagVar = (Sales != -1) ? 1 : 0;

  } /* End of the main while-loop */

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
