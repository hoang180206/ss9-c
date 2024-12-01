#include <stdio.h>

int main(){
	int arr[100]; 
	int n, choice, length, index, value, max, min, sum, count; 
	do{
	printf("\nMENU\n\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. Hien thi cac phan tu dang quan ly\n");
	printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
	printf("7. Them mot phan tu vao vi tri chi dinh\n");
	printf("8. Thoat\n");
	printf("lua chon cua ban: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			length=n;
			for(int i=0; i<n; i++){
				printf("nhap phan tu thu %d: ",i);
				scanf("%d",&arr[i]);
			}
			break; 
		case 2:
			printf("phan tu dang quan ly: ");
			for(int i=0; i<length; i++){
				printf("%d ",arr[i]);
			} 
			printf("\n");
			break;
		case 3:
			sum=0;
			printf("phan tu chan: ");
			for(int i=0; i<length; i++){
				if(arr[i]%2==0){
				printf("%d ",arr[i]);
				sum+=arr[i];
				}
			}
			printf("\ntong so chan: %d\n",sum);
			break;
		case 4:
			max=arr[0];
			min=arr[0];
			for(int i=0; i<length; i++){
				if(arr[i]>max){
					max=arr[i];
				}
				if(arr[i]<min){
					min=arr[i];
				}
			}
			printf("phan tu lon nhat la: %d\n",max);
			printf("phan tu nho nhat la: %d\n", min);
			break;
		case 5:
			sum=0;
			printf("cac so nguyen to trong mang: ");
			for(int i=0; i<length; i++){
				if(arr[i]>1){
					count=0;
						for(int j=1; j<=arr[i]; j++){
							if(arr[i]%j==0){
								count++;
							}
						}
					if(count==2){
						printf("%d ",arr[i]);
						sum+=arr[i];
					}
				}
			}
			printf("\ntong cac so nguyen to: %d",sum);
			break;
		case 6:
			count=0;
			printf("nhap so phan tu can thong ke: ");
			scanf("%d",&value);
			for(int i=0; i<n; i++){
				if(arr[i]==value){
					count++; 
				} 
			}
			printf("so phan tu co gia tri %d trong mang la: %d\n", value, count);
			break;
		case 7:
    		printf("vi tri muon them: ");
   			scanf("%d", &index);
			printf("them phan tu vao mang: ");
    		scanf("%d", &value);

   			if (index>=0 && index<100){
        		if(index>=length) {
            		arr[index]=value;
            		length=index+1;
        		}else{
            		for(int i=length; i>index; i--){
                	arr[i]=arr[i-1];
            		}
            		arr[index]=value;
            		length++;
        		}
        	printf("mang sau khi them phan tu: ");
        	for(int i=0; i<length; i++){
            	printf("%d ",arr[i]);
        	}
    		}else{
        		printf("vi tri khong hop le\n");
    		}
    		printf("\n");
    		break;
    	case 8:
    		printf("thoat chuong trinh");
    		break;
		default: 
			printf("lua chon khong hop le\n");
			break;	
	}	
	}while(choice!=8);
	
	return 0;
}
