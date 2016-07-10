    #include <stdio.h>
    #include <stdbool.h>
    #include "stacksADT.h"
    #DEFINE smallest 0
    int main (void) {
        void push();
       	pop();
       	void hanoi(int N, char source, char dest, char aux);
    	int* moveDisk;
    	STACK* stack;
       stack = createStack ();
       printf("Enter a disc(s): ");
    	scanf ("%d", N);
    	if (N > 0) {
              pushStack(dest, pop(source));
              }
        else {
             hanoi(N - 1, source, dest, aux);
             pushStack(dest, pop(source));
             hanoi(N - 1, aux, source, dest);
        }
       void makeLegalMove() {
         if (smallest <= source) {
         printf("\nThe tower of hanoi\n");
      while(!emptyStack(stack)) {
      destroyStack (stack);
    	system("pause");
    	return 0;
    }
