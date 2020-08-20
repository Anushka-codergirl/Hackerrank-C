#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int a=1; a<=n; a++) {
        for (int b=a+1; b<=n; b++) {
            if (((a&b) > maxAnd) && ((a&b) < k)) {
                maxAnd = a&b;
            }
            if (((a|b) > maxOr) && ((a|b) < k)) {
                maxOr = a|b;
            }
            if (((a^b) > maxXor) && ((a^b) < k)) {
                maxXor = a^b;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
