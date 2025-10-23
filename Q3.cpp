#include <stdio.h>
int main(){
	char seating[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		
		if(i%2 == 0){
			if(j%2==0){
				seating[i][j]='x';
			}else{
				seating[i][j]='o';
			}
		}else{
			if(j%2==0){
			 seating[i][j]='o';
			}else{
				seating[i][j]='o';
			}
			
			
		}
	}
	printf("seating plan\n");
	}
	for(int x=0;x<5;x++){
		printf("row %c",x);
		for(int y=0;y<5;y++){
			printf("%c\t",seating[x][y]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
