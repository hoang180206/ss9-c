#include <stdio.h>

int main(){
    int n, m, idx, arr[100], length;

    printf("nhap vào so phan tu muon nhap: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    length=n;
    printf("them phan tu vao mang: ");
    scanf("%d", &m);
    printf("vi tri muon them: ");
    scanf("%d", &idx);

    if (idx>=0 && idx<100) {
        if (idx>=length) {
            arr[idx]=m;
            length=idx+1;
        } else {
            for (int i=length; i>idx; i--) {
                arr[i]=arr[i-1];
            }
            arr[idx]=m;
            length++;
        }
        printf("mang sau khi them phan tu:\n");
        for (int i=0; i<length; i++) {
            printf("%d ",arr[i]);
        }
    } else {
        printf("vi tri khong hop le\n");
    }

    return 0;
}

