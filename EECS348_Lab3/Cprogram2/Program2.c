#include <stdio.h>

/*

• Touchdown (TD) worth 6 points 
• Field goal (FG) worth 3 points 
• Safety worth 2 points 
• Touchdown (TD) + 2-point conversion worth 8 points 
• Touchdown (TD) + 1-point field goal worth 7 points

*/

int main() {
  int n, TD, FG, Safety, TD2pt, TD1pt;
  printf("Input a number: ");
  scanf("%d", & n);
  if (n >= 1 && n <= 100) {
    int count = 0;
    for (TD = 0; TD <= n; TD++) {
      for (FG = 0; FG <= n; FG++) {
        for (Safety = 0; Safety <= n; Safety++) {
          for (TD2pt = 0; TD2pt <= n; TD2pt++) {
            for (TD1pt = 0; TD1pt <= n; TD1pt++) {
              if ((6 * TD) + (3 * FG) + (2 * Safety) + (8 * TD2pt) + (7 * TD1pt) == n) {
                printf("\n%d TD | %d FG | %d Safety | %d TD + 2pt | %d TD + 1pt FG", TD, FG, Safety, TD2pt, TD1pt);
                count++;
              }
            }
          }
        }
      }
    }
    printf("\n\n%d Combinations\n", count);
  }
  return 0;
}



