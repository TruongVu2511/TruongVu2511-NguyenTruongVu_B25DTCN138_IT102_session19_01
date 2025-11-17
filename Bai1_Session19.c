#include <stdio.h>

int findMax(int *arr,int n){
	int max;
	for(int i =0;i<n;i++){
		if(*(arr + i)){
			max = *(arr +i); 
		} 
	} 
	return max; 
} 

int main(){
	int arr[5]={1,2,3,4,5};
	int max = findMax(arr,5);
	printf("So lon nhat la : %d",max); 
	
	return 0; 
} 
