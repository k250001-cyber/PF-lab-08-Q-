#include <stdio.h>

int main(){
	int matric[3][3]={
	{12,45,32},
	{2,13,45},
	{56,72,41}
	};
	int max=matric[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matric[i][j]>max){
				max=matric[i][j];
			}
		}
	}
	printf("max is: %d",max);
	
	
	
	return 0;
}
