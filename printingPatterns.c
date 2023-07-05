#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int count = 2 * n - 1;
  	if(n < 0){
          return -1;
    }
    else if(n == 1){
        printf("%d", n);
    }
    else{
        for (int i = 0; i < count; i++) {
        
            for (int j = 0; j < count; j++) {
                
                int min = i < j ? i : j;
                min = min < count - 1 - i ? min : count - 1 - i;
                min = min < count - 1 - j ? min : count - 1 - j;

                
                printf("%d ", n - min);
            }

            printf("\n"); 
        }
    }
    return 0;
}
