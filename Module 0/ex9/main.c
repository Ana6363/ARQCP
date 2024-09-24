#include <stdio.h>
#include "ex9.h"

int main(){
	
	int v[] = {1,3,4};
    int n = sizeof(v) / sizeof(v[0]);
	int r = 0;
	r = average_array(v,n);
	printf("average_array =%d\n", r);
	return 0;
}