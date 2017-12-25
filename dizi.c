

#include <stdio.h>


int main(){



int i, j, k;
int s[2][3][2] = { 1,2,3,4,5,6,7,8,9,10,11,12     };

for(k=0; k<2; k++){
printf("katman: %d\n", k);

for(i=0; i<3; i++){
	for(j=0; j<2; j++){
	printf("%d ", s[k][i][j]);
	}
printf("\n");
}

}


printf("\n");

printf(" sizeof: %lu  \n", sizeof(s) );


return 0;
}
