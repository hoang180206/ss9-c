#include <stdio.h>

int main(){
	int n, choice, length, index, value; 
	int arr[100]={}; 
	length=n;
	do{
	printf("\nMENU\n\n");
	printf("1. Nhap vao mang\n");
	printf("2. Hien thi mang\n");
	printf("3. Them phan tu\n");
	printf("4. Sua phan tu\n");
	printf("5. Xoa phan tu\n");
	printf("6. Thoat\n\n");
	printf("lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			for(int i=0; i<n; i++){
				printf("nhap phan tu thu %d: ",i);
				scanf("%d",&arr[i]);
			}
			break; 
		case 2:
			printf("mang: ");
			for(int i=0; i<n; i++){
				printf("%d ",arr[i]);
			} 
			printf("\n");
			break;
		case 3:
			printf("them phan tu vao mang: ");
    		scanf("%d", &value);
    		printf("vi tri muon them: ");
   			scanf("%d", &index);
   			if (index>=0 && index<100){
        		if(index>=length) {
            		arr[index]=value;
            		length=index+1;
        		}else{
            		for (int i=length; i>index; i--) {
                	arr[i]=arr[i-1];
            		}
            		arr[index]=value;
            		length++;
        		}
        	printf("mang sau khi them phan tu: ");
        	for (int i=0; i<length; i++){
            	printf("%d ",arr[i]);
        	}
    		}else{
        		printf("vi tri khong hop le\n");
    		}
    		printf("\n");
    		break; 
    	case 4:
    		printf("nhap vi tri can sua: ");
    		scanf("%d", &index);
    		printf("nhap gia tri moi: ");
    		scanf("%d", &value);
    		if(index>=0 && index<length){
        		arr[index]=value;
    		}else{
        		printf("vi tri khong hop le\n");
    		}
    		printf("mang sau khi sua: ");
    		for (int i = 0; i < length; i++) {
        		printf("%d ", arr[i]);
    		}
    		printf("\n");
    		break; 
    	case 5:
			printf("nhap vi tri can xoa: ");
			scanf("%d", &index);
	
			if(index>=0 && index<length){
				for(int i=index; i<length;i++){
					arr[i]=arr[i+1];
				}
				length--;
				printf("mang sau khi xoa phan tu: ");
				for(int i=0;i<length;i++){
					printf("%d ",arr[i]);
				}
			}else{
			printf("vi tri khong hop le");
			}
			printf("\n");
			break;
		case 6:
			printf("thoat chuong trinh") ;
			break; 
		default: 
			printf("lua chon khong hop le\n");
			break;	
	}	
	}while(choice!=6);
	
	return 0;
}
