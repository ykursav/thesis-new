#include <stdio.h>
#include <math.h>

float get_average_luminance_of_block(float block[8][8], int N){
	int total = 0;
	int i = sizeof(block);
	int k = sizeof(block[i]);
	for (; i > 0; i--){
		for (; k > 0; k--){
			block[i][k] += total;
		}
	}
	total = total / pow(N, 2);
	return total;
}
