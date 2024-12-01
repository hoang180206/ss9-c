#include <stdio.h>

int main() {
    int arr[100], n, index, value;

    printf("nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("nhap vi tri can sua: ");
    scanf("%d", &index);
    printf("nhap gia tri moi: ");
    scanf("%d", &value);

    if(index>=0 && index<n){
        arr[index]=value;
    } else {
        printf("vi tri khong hop le\n");
    }

    printf("mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

