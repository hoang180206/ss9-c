#include <stdio.h>

int main(){
	int n, index, length, arr[100];
	
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	length=n;
	printf("nhap vi tri can xoa: ");
	scanf("%d", &index);
	
	if(index>=0 && index<n){
		for(int i=index; i<length;i++){
			arr[i]=arr[i+1];
		}
		length--;
		printf("mang sau khi xoa phan tu:\n");
		for(int i=0;i<length;i++){
			printf("%d",arr[i]);
		}
	}else{
		printf("vi tri khong hop le");
	}
	return 0;
} 
