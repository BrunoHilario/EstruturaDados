#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int x, y, z;
int teste;
x = 5;
y = x++;
z = x--;
	printf("y %d \n",x);
	printf("%d \n",!y);
teste = !y == !x;
	printf("%d \n", teste);
teste = ((x++ > y) && (--z <= y));
	printf("%d \n",teste);
teste = ((!x) || (!(!z))); 
	printf("%d \n",teste);
teste = (((x + y) > z) && (x++)); 
	printf("%d \n",teste);
teste = x && y + !3 || 4; 
	printf("%d \n",teste);
teste = y + !3;
	printf("%d \n",teste);
return 0;
}