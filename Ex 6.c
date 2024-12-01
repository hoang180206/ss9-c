#include <stdio.h>

int main(){
    int arr[100][100];
    int n, m, choice, sum, product, maxSum, maxRow;

    do{
        printf("\nMENU\n\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Nhap kich co cua mang (m x n): ");
                scanf("%d %d",&n,&m);
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        printf("Nhap phan tu arr[%d][%d]: ",i,j);
                        scanf("%d",&arr[i][j]);
                    }
                }
                break;
            case 2:
                printf("Gia tri cac phan tu cua mang theo ma tran:\n");
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        printf("%d ",arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                sum=0;
                printf("Cac phan tu le: ");
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        if(arr[i][j]%2!=0){
                            printf("%d ",arr[i][j]);
                            sum+=arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n",sum);
                break;
            case 4:
                product=1;
                printf("Cac phan tu nam tren duong bien: ");
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        if(i==0 || i==n-1 || j==0 || j==m-1){
                            printf("%d ",arr[i][j]);
                            product*=arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu nam tren duong bien: %d\n",product);
                break;
            case 5:
                printf("Cac phan tu nam tren duong cheo chinh: ");
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        if(i==j) {
                            printf("%d ",arr[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            case 6:
                printf("Cac phan tu nam tren duong cheo phu: ");
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        if(i+j==n-1) {
                            printf("%d ",arr[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            case 7:
                maxSum=0;
                maxRow=0;
                for(int i=0; i<n; i++){
                    sum=0;
                    for(int j=0; j<m; j++){
                        sum+=arr[i][j];
                    }
                    if(sum>maxSum){
                        maxSum=sum;
                        maxRow=i;
                    }
                }
                printf("Dong co tong gia tri cac phan tu lon nhat la dong %d voi tong la %d\n", maxRow+1, maxSum);
                printf("Cac phan tu trong dong do la: "); 
				for(int j=0; j<m; j++){
					printf("%d ",arr[maxRow][j]); 
				}
				printf("\n"); 
                break;
            case 8:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    }while(choice!=8);

    return 0;
}

