//C program of 2D array named  scores#include<stdio.h>
int main () {
int i,j,k;

printf("Scores in a 2D array:\n");
int scores[2][2][2]={ { {65, 92}, {84, 72} }, {{35, 70}, {59, 67} } };
for(i=0; i<2; i++) {
for(j=0; j<2; j++) {
for(k=0; k<2; k++) {
printf("scores[%d][%d]=%d\n", i,j, scores [i][j][k]);
}
}
}
return 0;
}