#include <stdio.h>
#include <math.h>

double sum(double **x,int n)
{
  double counter;
  counter = 0;
  counter = counter+x[0][0] + counter+x[0][1] + counter+x[0][2] +counter+x[0][3] +counter+x[0][4] +counter+x[0][5] +counter+x[0][6] +counter+x[0][7];
  counter = counter+x[1][0] + counter+x[1][1] + counter+x[1][2] +counter+x[1][3] +counter+x[1][4] +counter+x[1][5] +counter+x[1][6] +counter+x[1][7];
  counter = counter+x[2][0] + counter+x[2][1] + counter+x[2][2] +counter+x[2][3] +counter+x[2][4] +counter+x[2][5] +counter+x[2][6] +counter+x[2][7];
  counter = counter+x[3][0] + counter+x[3][1] + counter+x[3][2] +counter+x[3][3] +counter+x[3][4] +counter+x[3][5] +counter+x[3][6] +counter+x[3][7];
  counter = counter+x[4][0] + counter+x[4][1] + counter+x[4][2] +counter+x[4][3] +counter+x[4][4] +counter+x[4][5] +counter+x[4][6] +counter+x[4][7];
  counter = counter+x[5][0] + counter+x[5][1] + counter+x[5][2] +counter+x[5][3] +counter+x[5][4] +counter+x[5][5] +counter+x[5][6] +counter+x[5][7];
  counter = counter+x[6][0] + counter+x[6][1] + counter+x[6][2] +counter+x[6][3] +counter+x[6][4] +counter+x[6][5] +counter+x[6][6] +counter+x[6][7];
  counter = counter+x[7][0] + counter+x[7][1] + counter+x[7][2] +counter+x[7][3] +counter+x[7][4] +counter+x[7][5] +counter+x[7][6] +counter+x[7][7];
  
  return counter / (n * n);
}


double calculateSD(int *data)
{
    double sum = 0.0, mean, standardDeviation = 0.0;

    int i;
    int counter = sizeof(data);

    for(i=0; i< counter; ++i)
    {
        sum += data[i];
    }
    mean = sum/counter;

    for(i=0; i<counter; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation/counter);
}

double calSqrt(double *p1, double *p2)
{
	printf("%f", p1[0]);
	return sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2));
}

int main(int argc, char *argv[]){
	
	return 0;
}

