#include <stdio.h>

int main(){
    int a, b, c, i, j, n;
    printf("==============\n");
    printf("Tugas Quiz ASD\n");
    printf("==============\n");
    printf("1. Level 1\n");
    printf("2. Level 2\n");
    printf("3. Level 3\n");
    printf("4. Exit\n");
    printf("==============\n");
    
    printf("masukkan nomor level : ");
    scanf("%d", &n);
    
    switch(n){
        case 1 :
        system("cls");
        printf("masukkan jumlah: ");
        scanf("%d", &n);
        
        for(i=0; i<=n; i++){
            for(j=0; j<=i; j++){
                printf(" %d", i+j);
            }
            printf("\n");
        }
        break;
        
        case 2 :
        system("cls");
        printf("masukkan jumlah: ");
        scanf("%d", &n);
        
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                printf(" %d", i*j);
            }
            printf("\n");
        }
        break;
        
        case 3 :
        system("cls");
        printf("masukkan jumlah: ");
        scanf("%d", &n);
        
        for(a=1; a<=n; a++){
            printf("\n");
            for(c=1; c<=(n-a); c++){
                printf(" ");
            }
            for(b=1; b<=a; b++){
                printf("%d", b);
            }
            for(b=a-1; b>=1; b--){
                printf("%d", b);
            }
        }
        
        for(a=n-1; a>=1; a--){
            printf("\n");
            for(c=1; c<=(n-a); c++){
                printf(" ");
            }
            for(b=1; b<=a; b++){
                printf("%d", b);
            }
            for(b=a-1; b>=1; b--){
                printf("%d", b);
            }
        }
        break;
        
        case 4 :
        system("cls");
        goto*main();
        break;
        
        default :
        printf("Menu Tidak Ada");
    }
}
