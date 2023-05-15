#include <stdio.h>
#include <stdlib.h>

//Dugum yapisi tanimlanir
struct dugum{
	int veri;
	struct dugum *sonraki;
};
//Dugumun ilk ve son elemani tanimlanir
struct dugum *ilk = NULL;
struct dugum *son = NULL;

//Kuyruga yeni bir eleman eklemek icin kullanilan fonksiyon
void ekle(int veri){
	if(ilk == NULL){
		struct dugum *Dugum = (struct dugum*)malloc(sizeof(struct dugum));
		Dugum->veri = veri;
		Dugum->sonraki = NULL;
		
		ilk = Dugum;
		son = Dugum;
	}
	else{
		struct dugum *Dugum = (struct dugum*)malloc(sizeof(struct dugum));
		Dugum->veri = veri;
		Dugum->sonraki = NULL;
		
		son->sonraki = Dugum;
		son = Dugum;	
	}
}

//Kuyruktan eleman silmek icin kullanilan fonksiyon
void sil(){
	if(ilk == NULL){
		printf("Kuyruk zaten bostu.\n");
	}
	else{
		struct dugum *gecici = ilk;
		ilk = ilk->sonraki;
		printf("%d degeri kuyruktan silindi.\n", gecici->veri);
		free(gecici);
	}
}

//Kuyrugu goruntulemek icin kullaninilan fonksiyon
void goruntule(){
	if(ilk == NULL){
		printf("Kuyruk bostur.\n");
	}
	else{
		struct dugum *gecici = ilk;
		printf("Kuyruk:");
		while(gecici!=NULL){
			printf("%d-", gecici->veri);
			gecici = gecici->sonraki;
		}
	}
	printf("\n");
}


int main(int argc, char *argv[]) {
	//Kullanicidan yapmak istedgi islem istenir ve gerekli fonksiyon cagrilir.
	int secim;
	printf("Lutfen asagidaki islemlerden birini seciniz\n");
	
	while(1){
		printf("\n1. Ekleme\n2. Silme\n3. Goruntuleme\n4. Cikis\n\nSeciminiz:");
	
		scanf("%d", &secim);
		switch(secim){
			case 1:
				printf("Eklemek istediginiz degeri giriniz:");
				int deger;
				scanf("%d", &deger);
				ekle(deger);
				continue;
			case 2:
				sil();
				continue;
			case 3:
				goruntule();
				continue;
			case 4:
				return 0;
			default:
				printf("Yanlis veya hatali bir deger girdiniz.");
				break;		
		}
	}
	
	return 0;
}