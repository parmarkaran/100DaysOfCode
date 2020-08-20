#include<stdio.h>
#include<conio.h>

//int, float, char, 
//long, double


int main(){
	int layers = 10;
	int i, j;
	
	for(i=0; i<layers; i++){
		
		for(j=(layers-i)/2;j>0+1;j--){
			printf(" ");	
		}
		
		for(j=0;j<i+1;j++){
			printf("*");	
		}
		printf("\n");
	}
	
	return 0;
}
