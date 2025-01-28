#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct kutup {
char bookname[50];
    char yazar[20];
    int sayfa;
    float price;

};
int main() {
    struct kutup lib[100];
char yazarnm[30],kıtapnm[30];
    int i,input,count;
    i=input=count=0;
    while (input !=5) {
        printf("\n\nE-KUTUPHANEYE HOSGELDINIZ\n\n");
        printf("Kutuphaneye kitap eklemek icin--1\n");
        printf("Kitap listesini gormek icin--2\n");
        printf("Belirtilen yazarin tum kitaplarini gormek icin--3\n");
        printf("Kutuphanede ki kitap sayisini gormek icin--4\n");
        printf("Cikis yapmak icin--5\n");
        printf("Lutfen bir secim yapiniz..");
        scanf("%d",&input);
        switch (input) {
            case 1:
                printf("Kitabi giriniz:");
            scanf("%s",lib[i].bookname);
            printf("Yazar:");
            scanf("%s",lib[i].yazar);
            printf("Sayfa sayisi giriniz:");
            scanf("%d",&lib[i].sayfa);
            printf("Price:");
            scanf("%f",&lib[i].price);
            count++;
            break;
            case 2:
                printf("\n\n==KUTUPHANE LİSTESİ==\n\n");
            for (i=0;i<count;i++) {
               printf("Kitap ismi:%s\n",lib[i].bookname);
                printf("Yazar ismi:%s\n",lib[i].yazar);
                printf("Sayfa sayisi:%d\n",lib[i].sayfa);
                printf("Price :%f\n",lib[i].price);
            }
            break;
            case 3:
                printf("Yazar ismini giriniz:");
            scanf("%s",yazarnm);
            for (i=0;i<count;i++) {
                if (strcmp(yazarnm,lib[i].yazar==0)) {
printf("%s %s %d %f",lib[i].bookname,lib[i].yazar,lib[i].sayfa,lib[i].price);
                }
            }
            break;
            case 4:
                printf("Kitap sayisi:%d",count);
            break;
            case 5:
                exit(0);
        }
    }

    return 0;
}