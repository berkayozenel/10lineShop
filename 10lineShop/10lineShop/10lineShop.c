#include <stdio.h>

void main() {
	int loop = 0, loop3 = 0, loop2 = 0, loop4 = 0;
	int secim, tursecim, urunsecim, devam, odemeYontemi;
	int sepet = 0;
	float indirim = 0.2;
	char indirimYazdir[] = "% 20";
	float guncelSepet;
	char* p, s[100];

	while (loop == 0) {
		loop2 = 0;
		loop3 = 0;
		printf("***********************************\n");
		printf("10'LINE SHOP \n");
		printf("***********************************\n");
		printf("-----------------------------------\n");
		printf("NE IHTIYACINIZ VAR?\n");
		printf("-----------------------------------\n");
		printf("1- Meyve & Sebze\n");
		printf("2- Temel Gida\n");
		printf("3- Et & Tavuk & Balik\n");
		printf("4- Sut & Kahvaltilik\n");
		printf("5- Firin\n");
		printf("6- Sporcu Beslenmesi\n");
		printf("7- Atistirmalik\n");
		printf("8- Icecekler\n");
		printf("9- Dondurma\n");
		printf("10- Temizlik & Ev Gerecleri\n");
		printf("11- Kisisel Bakim\n");
		printf("---------------------\n");
		printf("Lutfen bir  kategori seciniz: ");

		while (fgets(s, sizeof(s),stdin))
		{ 
			secim = strtol(s, &p, 10);
			if (p == s || *p != '\n')
			{
				break;
			}
			//scanf("%d", &secim);
			if (secim == 1) {
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("MEYVE & SEBZE\n");
					printf("---------------------\n");
					printf("1- MEYVE\n");
					printf("2- SEBZE\n");
					printf("3- YESILLIK\n");
					printf("---------------------\n");
					printf("4- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- MEYVE\n");
							printf("---------------------\n");
							printf("100- Mandalina Naturel 1KG >>> 10TL\n");
							printf("101- Limon 1KG >>> 15TL\n");
							printf("102- Ananas 1 ADET >>> 15TL\n");
							printf("103- Uzum 1KG >>> 8TL\n");
							printf("104- Nar 1 ADET >>> 6TL\n");
							printf("105- Erik 1KG >>> 22TL\n");
							printf("106- Elma 1KG >>> 9TL\n");
							printf("107- Armut 1KG >>> 11TL\n");
							printf("108- Portakal 1KG >>> 8TL\n");
							printf("109- Kavun 1 ADET >>> 15TL\n");
							printf("110- Karpuz 1 ADET >>> 20TL\n");
							printf("111- Muz 1 KG >>> 13TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Mandalina' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Limon' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}
							}
							if (urunsecim == 102) {
								printf("'Ananas' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Uzum' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 104) {
								printf("'Nar' sepete eklendi.\n");
								sepet = 6 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 105) {
								printf("'Erik' sepete eklendi.\n");
								sepet = 22 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 106) {
								printf("'Elma' sepete eklendi.\n");
								sepet = 9 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 107) {
								printf("'Armut' sepete eklendi.\n");
								sepet = 11 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 108) {
								printf("'Portakal' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 109) {
								printf("'Kavun' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 110) {
								printf("'Karpuz' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 111) {
								printf("'Muz' sepete eklendi.\n");
								sepet = 13 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}


							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-111] arasi deger giriniz.\n");
							}
						}
					}
					else if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- SEBZE\n");
							printf("---------------------\n");
							printf("200- Patates 1KG >>> 11TL\n");
							printf("201- Domates 1KG >>> 8TL\n");
							printf("202- Sogan 1 KG >>> 15TL\n");
							printf("203- Biber 1KG >>> 9TL\n");
							printf("204- Patlican 1 KG >>> 12TL\n");
							printf("205- Havuc 1KG >>> 7TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);

							if (urunsecim == 200) {
								printf("'Patates' sepete eklendi.\n");
								sepet = 11 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Domates' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Sogan' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Biber' sepete eklendi.\n");
								sepet = 9 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 204) {
								printf("'Patlican' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 205) {
								printf("'Havuc' sepete eklendi.\n");
								sepet = 7 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-205] arasi deger giriniz.\n");
							}
						}
					}
					else if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- YESILLIK\n");
							printf("---------------------\n");
							printf("300- Maydanoz DEMET >>> 5TL\n");
							printf("301- Roka DEMET >>> 3TL\n");
							printf("302- Dereotu DEMET >>> 4TL\n");
							printf("303- Marul 1ADET >>> 7TL\n");
							printf("304- Pirasa 1KG >>> 8TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);

							if (urunsecim == 300) {
								printf("'Maydanoz' sepete eklendi.\n");
								sepet = 5 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Roka' sepete eklendi.\n");
								sepet = 3 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Dereotu' sepete eklendi.\n");
								sepet = 4 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Marul' sepete eklendi.\n");
								sepet = 7 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 304) {
								printf("'Pirasa' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-304] arasi deger giriniz.\n");
							}
						}
					}
					else if (tursecim == 4)
					{
						break;
					}

				}
			}
			else if (secim == 2)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("TEMEL GIDA\n");
					printf("---------------------\n");
					printf("1- BAKLIYAT\n");
					printf("2- MAKARNA\n");
					printf("3- CORBA\n");
					printf("4- SIVI YAG\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- BAKLIYAT\n");
							printf("---------------------\n");
							printf("100- Pirinc 1KG >>> 12TL\n");
							printf("101- Bulgur 1KG >>> 10TL\n");
							printf("102- Mercimek 1KG >>> 8TL\n");
							printf("103- Nohut 1KG >>> 15TL\n");
							printf("104- Barbunya  1KG >>> 15TL\n");
							printf("105- Fasulye 1KG >>> 11TL\n");
							printf("106- Bugday 1KG >>> 10TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Pirinc' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Bulgur' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Mercimek' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Nohut' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 104) {
								printf("'Barbunya' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 105) {
								printf("'Fasulye' sepete eklendi.\n");
								sepet = 11 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 106) {
								printf("'Bugday' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-106] arasi deger giriniz.\n");
							}

						}

					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- MAKARNA\n");
							printf("---------------------\n");
							printf("200- Burgu 1PAKET >>> 8TL\n");
							printf("201- Fiyonk 1PAKET >>> 8TL\n");
							printf("202- Spaghetti 1PAKET >>> 10TL\n");
							printf("203- Lazanya 1PAKET >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Burgu' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Fiyonk' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Spaghetti' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Lazanya' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-203] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- CORBA\n");
							printf("---------------------\n");
							printf("300- Mercimek 1PAKET >>> 9TL\n");
							printf("301- Tarhana 1PAKET >>> 9TL\n");
							printf("302- Yayla 1PAKET >>> 9TL\n");
							printf("303- Tavuk 1PAKET >>> 11TL\n");
							printf("304- Andaloz 1PAKET >>> 12TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Mercimek' sepete eklendi.\n");
								sepet = 9 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Tarhana' sepete eklendi.\n");
								sepet = 9 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Yayla' sepete eklendi.\n");
								sepet = 9 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Tavuk' sepete eklendi.\n");
								sepet = 11 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 304) {
								printf("'Andaloz' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-304] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- SIVI YAG\n");
							printf("---------------------\n");
							printf("400- Sizma Zeytinyagi 1L >>> 30TL\n");
							printf("401- Sizma Zeytinyagi 2L >>> 50TL\n");
							printf("402- Aycicek Yagi 1L >>> 25TL\n");
							printf("403- Aycicek Yagi 2L >>> 40TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Sizma Zeytinyagi 1L' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Sizma Zeytinyagi 2L' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Aycicek Yagi 1L' sepete eklendi.\n");
								sepet = 25 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Aycicek Yagi 2L' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-403] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}
			else if (secim == 3)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("ET & TAVUK & BALIK\n");
					printf("---------------------\n");
					printf("1- KIRMIZI ET\n");
					printf("2- KOFTE\n");
					printf("3- BEYAZ ET\n");
					printf("4- DENIZ URUNLERI\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- KIRMIZI ET\n");
							printf("---------------------\n");
							printf("100- Kiyma Dana 1KG >>> 40TL\n");
							printf("101- Kiyma Kuzu 1KG >>> 30TL\n");
							printf("102- Dana Kusbasi 1KG >>> 60TL\n");
							printf("103- Dana Doner 1PAKET >>> 40TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Kiyma Dana' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Kiyma Kuzu' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Dana Kusbasi' sepete eklendi.\n");
								sepet = 60 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Dana Doner' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}

						}

					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- KOFTE\n");
							printf("---------------------\n");
							printf("200- Kasap Kofte 1PAKET >>> 30TL\n");
							printf("201- Inegol Kofte 1PAKET >>> 40TL\n");
							printf("202- Hamburger Kofte 1PAKET >>> 35TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Kasap Kofte' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Inegol Kofte' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Hamburger Kofte' sepete eklendi.\n");
								sepet = 35 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-202] arasi deger giriniz.\n");
							}

						}

					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- BEYAZ ET\n");
							printf("---------------------\n");
							printf("300- Pilic Bonfile Gogus 1KG >>> 20TL\n");
							printf("301- Pilic Kanat 1KG >>> 22TL\n");
							printf("302- Pilic Pirzola 1Kg >>> 25TL\n");
							printf("303- Pilic Izgara Tava 1KG >>> 22TL\n");
							printf("304- Pilic Nugget 1PAKET >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Pilic Bonfile Gogus' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Pilic Kanat' sepete eklendi.\n");
								sepet = 22 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Pilic Pirzola' sepete eklendi.\n");
								sepet = 25 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Pilic Izgara Tava' sepete eklendi.\n");
								sepet = 22 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 304) {
								printf("'Pilic Nugget' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-304] arasi deger giriniz.\n");
							}

						}

					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- DENIZ URUNLERI\n");
							printf("---------------------\n");
							printf("400- Hamsi 1KG >>> 20TL\n");
							printf("401- Palamut 1KG >>> 17TL\n");
							printf("402- Sardalye 1KG >>> 15TL\n");
							printf("403- Alabalik 1KG >>> 40TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Hamsi' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Palamut' sepete eklendi.\n");
								sepet = 17 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Sardalye' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Alabalik' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-403] arasi deger giriniz.\n");
							}

						}

					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}
			else if (secim == 4)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("SUT & KAHVALTILIK\n");
					printf("---------------------\n");
					printf("1- YUMURTA\n");
					printf("2- SUT\n");
					printf("3- PEYNIR\n");
					printf("4- ZEYTIN\n");
					printf("5- BAL & RECEL\n");
					printf("---------------------\n");
					printf("6- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- YUMURTA\n");
							printf("---------------------\n");
							printf("100- 6 Li Yumurta >>> 15TL\n");
							printf("101- 10 Lu Yumurta >>> 20TL\n");
							printf("102- 15 Li Yumurta >>> 30TL\n");
							printf("103- 30 Lu Yumurta >>> 50TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'6 li Yumurta' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'10 lu Yumurta' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'15 li Yumurta' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'30 lu Yumurta' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- SUT\n");
							printf("---------------------\n");
							printf("200- Yarim Yagli Sut 1L >>> 12TL\n");
							printf("201- Tam Yagli Sut 1L >>> 15TL\n");
							printf("202- Laktoksuz Sut 1L >>> 20TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Yarim Yagli Sut' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Tam Yagli Sut' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Laktoksuz Sut' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-202] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- PEYNIR\n");
							printf("---------------------\n");
							printf("300- Labne Peynir 200G >>> 10Tl\n");
							printf("301- Lor Peyniri 350G >>> 15TL\n");
							printf("302- Kasar Peyniri 700G >>> 50Tl\n");
							printf("303- Klasik Inek Peyniri 350G >>> 30TL\n");
							printf("304- Ucgen Peynir 200G >>> 25TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Labne Peynir' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Lor Peyniri' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Kasar Peyniri' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Klasik Inek Peyniri' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 304) {
								printf("'Ucgen Peynir' sepete eklendi.\n");
								sepet = 25 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}


							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-304] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- ZEYTIN\n");
							printf("---------------------\n");
							printf("400- Gemlik Siyah Zeytin 380G >>> 15TL\n");
							printf("401- Yesil Zeytin 200G >>> 10TL\n");
							printf("402- Dilimli Siyah Zeytin 160G >>> 20TL\n");
							printf("403- Biberli Zeytin 200G >>> 30TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Gemlik Siyah Zeytin' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Yesil Zeytin' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Dilimli Siyah Zeytin' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Biberli Zeytin' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-403] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 5) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("5- BAL & RECEL\n");
							printf("---------------------\n");
							printf("500- Suzme Cicek Bali 350G >>> 30TL\n");
							printf("501- Cilek Receli 270G >>> 20TL\n");
							printf("502- Visne Receli 270G >>> 20TL\n");
							printf("503- Kayisi Receli 270G >>> 20TL\n");
							printf("504- Incir Receli 270G >>> 25TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 500) {
								printf("'Suzme Cicek Bali' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 501) {
								printf("'Cilek Receli' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 502) {
								printf("'Visne Receli' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 503) {
								printf("'Kayisi Receli' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 504) {
								printf("'Incir Receli' sepete eklendi.\n");
								sepet = 25 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [500-504] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 6)
					{
						break;
					}
				}

			}
			else if (secim == 5)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("FIRIN\n");
					printf("---------------------\n");
					printf("1- EKMEK\n");
					printf("2- UNLU MAMULLER\n");
					printf("3- TATLI\n");
					printf("---------------------\n");
					printf("4- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- EKMEK\n");
							printf("---------------------\n");
							printf("100- Sofra Ekmek 200G >>> 4TL\n");
							printf("101- Tombul Ekmek 320G >>> 10TL\n");
							printf("102- Tam Bugday Ekmegi 350G >>> 15TL\n");
							printf("103- Cavdarli Karabugday Ekmegi 350G >>> 20TL\n");
							printf("104- Tost Ekmegi 550G >>> 30TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Sofra Ekmek' sepete eklendi.\n");
								sepet = 4 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Tombul Ekmek' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Tam Bugday Ekmek' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Cavdarli Karabugday Ekmek' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 104) {
								printf("'Tost Ekmegi' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-104] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- UNLU MAMULLERI\n");
							printf("---------------------\n");
							printf("200- Yufka 500G >>> 10TL\n");
							printf("201- Zeytinyagli Kepekli Galeta 125G >>> 12TL\n");
							printf("202- Klasik Galeta 150G >>> 15TL\n");
							printf("203- Geleneksel Lavas 520G >>> 20TL\n");
							printf("204- Tandir Lavas 376G >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Yufka' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Zeytinyagli Kepekli Galeta' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Klasik Galeta' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Geleneksel Lavas' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 204) {
								printf("'Tandir Lavas' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-204] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- TATLI\n");
							printf("---------------------\n");
							printf("300- Ekler 240G >>> 10TL\n");
							printf("301- Donut Cikolatali 56G >>> 8TL\n");
							printf("302- Donut Cilekli 56G >>> 8TL\n");
							printf("303- Sakizli Muhallebi 150G >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Ekler' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Donu Cikolatali' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Donut Cilekli' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Sakizli Muhallebi' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}
								else {
									printf("Lutfen [300-303] arasi deger giriniz.\n");
								}
							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-303] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 4)
					{
						break;
					}

				}


			}
			else if (secim == 6)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("6- SPORCU BESLENMESI\n");
					printf("---------------------\n");
					printf("1- SAGLIK TAKVIYELERI\n");
					printf("2- BAR\n");
					printf("3- SPORCU ICECEGI\n");
					printf("4- ENERJI ICECEGI\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- SAGLIK TAKVIYELERI\n");
							printf("---------------------\n");
							printf("100- C Vitamini 40 Kapsul >>> 50TL\n");
							printf("101- Omega 3 Balik Yagi >>> 60TL\n");
							printf("102- Collagen Pepdites 60ML >>> 30TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'C Vitamini ' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Balik Yagi' sepete eklendi.\n");
								sepet = 60 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Collagen Pepdites' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-102] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------------\n");
							printf("2- BAR\n");
							printf("---------------------------\n");
							printf("200- Bar Kakaolu 35G >>> 10TL\n");
							printf("201- Bar Findikli 35G >>> 15Tl\n");
							printf("202- Bar Bademli 35G >>> 17TL\n");
							printf("203- Meyve Bari 35G >>> 12TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Bar Kakaolu' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Bar Findikli'sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Bar Bademli' sepete eklendi.\n");
								sepet = 17 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Meyve Bari' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}


							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-201] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("--------------------------\n");
							printf("3- SPORCU ICECEGI\n");
							printf("--------------------------\n");
							printf("300- Portakal Aromali  500ML >>> 20TL\n");
							printf("301- Karisik Aromali  500ML >>> 20Tl\n");
							printf("302- C Vitaminli Su 500ML >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Portakal Aromali' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Karisik Aromali' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'C Vitaminli Su' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-302] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("-------------------------\n");
							printf("4- ENERJI ICECEGI\n");
							printf("-------------------------\n");
							printf("400- Redbull 250ML >>> 20TL\n");
							printf("401- Redbull 473ML >>> 35Tl\n");
							printf("402- Burn 250ML >>> 18TL\n");
							printf("403- Burn 500ML >>> 30TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Redbull 250ML' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Redbul 473 ML' sepete eklendi.\n");
								sepet = 35 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Burn 250ML' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Burn 500ML' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-403] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}
			else if (secim == 7)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("7- ATISTIRMALIK\n");
					printf("---------------------\n");
					printf("1- CIKOLATA\n");
					printf("2- KURUYEMIS\n");
					printf("3- CIPS\n");
					printf("---------------------\n");
					printf("4- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- CIKOLATA\n");
							printf("---------------------\n");
							printf("100- Bitter Cikolata 65g >>> 15TL\n");
							printf("101- Sutlu Cikolata 60g >>> 12TL\n");
							printf("102- Antep Fistikli Cikolata 60g >>> 18TL\n");
							printf("103- Karamel Dolgulu Cikolata 32g >>> 6TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Bitter Cikolata' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Sutlu Cikolata' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Antep Fistikli Cikolata' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Karamel Dolgulu Cikolata' sepete eklendi.\n");
								sepet = 6 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- KURUYEMIS\n");
							printf("---------------------\n");
							printf("200- Yer Fistigi 200g >>> 18TL\n");
							printf("201- Tuzlu Aycekirdegi 200g >>> 10TL\n");
							printf("202- Antep Fistigi 200g >>> 50TL\n");
							printf("203- Sari Leblebi 250g >>> 11TL\n");
							printf("204- Cig Badem 150g >>> 35TL\n");
							printf("205- Kaju 200g >>> 45TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("Yer Fistigi' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Tuzlu Aycekirdegi' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Antep Fistigi' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Sari Leblebi' sepete eklendi.\n");
								sepet = 11 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 204) {
								printf("'Cig Badem' sepete eklendi.\n");
								sepet = 35 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 205) {
								printf("'Kaju' sepete eklendi.\n");
								sepet = 45 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-205] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- CIPS\n");
							printf("---------------------\n");
							printf("300- Sade Patates Cips 150g >>> 18TL\n");
							printf("301- Ketcapli Patates Cips 150g >>> 15TL\n");
							printf("302- Peynirli Misir Cips 105g >>> 13TL\n");
							printf("303- Domates Soslu Misir Cips 150g >>> 17TL\n");
							printf("304- Yogurtlu Patates Cips 96g >>> 14TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Sade Patates Cips' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Ketcapli Patates Cips' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Peynirli Misir Cips' sepete eklendi.\n");
								sepet = 13 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Domates Soslu Misir Cips' sepete eklendi.\n");
								sepet = 17 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 304) {
								printf("'Yogurtlu Patates Cips' sepete eklendi.\n");
								sepet = 14 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-304] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 4)
					{
						break;
					}
				}
			}
			else if (secim == 8)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("ICECEKLER\n");
					printf("---------------------\n");
					printf("1- GAZLI ICECEK\n");
					printf("2- MEYVE SUYU\n");
					printf("3- CAY\n");
					printf("4- KAHVE\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- GAZLI ICECEK\n");
							printf("---------------------\n");
							printf("100- Kola 1L >>> 15TL\n");
							printf("101- Gazoz 1L >>> 14TL\n");
							printf("102- Portakal Aromali Gazoz 1L >>> 15TL\n");
							printf("103- Limon Aromali Gazoz 1L >>> 13TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Kola 1L' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Gazoz 1L' sepete eklendi.\n");
								sepet = 14 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Portakal Aromali Gazoz' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Limon Aromali Gazoz' sepete eklendi.\n");
								sepet = 13 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- MEYVE SUYU\n");
							printf("---------------------\n");
							printf("200- Portakalli Icecek 1L >>> 20TL\n");
							printf("201- Seftali Aromali Icecek 1L >>> 16TL\n");
							printf("202- Karisik Meyve Suyu 1L >>> 21TL\n");
							printf("203- Limonata 1L >>> 13TL\n");
							printf("204- Visne Nektari 1L >>> 19TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("Portakalli Icecek' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Seftali Aromali Icecek' sepete eklendi.\n");
								sepet = 16 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Karisik Meyve Suyu' sepete eklendi.\n");
								sepet = 21 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Limonata' sepete eklendi.\n");
								sepet = 13 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 204) {
								printf("'Visne Nektari' sepete eklendi.\n");
								sepet = 19 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-204] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- CAY\n");
							printf("---------------------\n");
							printf("300- Filiz Cay 500g >>> 26TL\n");
							printf("301- Tiryaki Cay 1KG >>> 78TL\n");
							printf("302- Adacayi 20'li >>> 20TL\n");
							printf("303- Tomurcuk Cay 125g >>> 23TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Filiz Cay' sepete eklendi.\n");
								sepet = 26 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Tiryaki Cay' sepete eklendi.\n");
								sepet = 78 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Adacayi' sepete eklendi.\n");
								sepet = 20 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Tomurcuk Cay' sepete eklendi.\n");
								sepet = 23 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-303] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- KAHVE\n");
							printf("---------------------\n");
							printf("400- Turk Kahvesi 100g >>> 24TL\n");
							printf("401- Filtre Kahve 250g >>> 65TL\n");
							printf("402- Mocha 18g >>> 3TL\n");
							printf("403- Sicak Cikolata 27g >>> 4TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Turk Kahvesi' sepete eklendi.\n");
								sepet = 24 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Filtre Kahve' sepete eklendi.\n");
								sepet = 65 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Mocha' sepete eklendi.\n");
								sepet = 3 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Sicak Cikolata' sepete eklendi.\n");
								sepet = 4 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-403] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}
			else if (secim == 9)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("DONDURMA\n");
					printf("---------------------\n");
					printf("1- TEK DONDURMA\n");
					printf("2- KAP DONDURMA\n");
					printf("---------------------\n");
					printf("3- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- TEK DONDURMA\n");
							printf("---------------------\n");
							printf("100- Vanilyali Dondurma >>> 15TL\n");
							printf("101- Bademli Dondurma >>> 17TL\n");
							printf("102- Karadutlu Dondurma >>> 15TL\n");
							printf("103- Beyaz Cikolatali Dondurma >>> 18TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Vanilyali Dondurma' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Bademli Dondurma' sepete eklendi.\n");
								sepet = 17 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Karadutlu Dondurma' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Beyaz Cikolatali Dondurma' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- KAP DONDURMA\n");
							printf("---------------------\n");
							printf("200- Sade Dondurma 500ml >>> 37TL\n");
							printf("201- Antep Fistikli Dondurma 500ml >>> 43TL\n");
							printf("202- Maras Usulu Dondurma 500ml >>> 45TL\n");
							printf("203- Cikolatali Dondurma 500ml >>> 40TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Sade Dondurma' sepete eklendi.\n");
								sepet = 37 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Antep Fistikli Dondurma' sepete eklendi.\n");
								sepet = 43 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Maras Usulu Dondurma' sepete eklendi.\n");
								sepet = 45 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Cikolatali Dondurma' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-203] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 3)
					{
						break;
					}
				}
			}
			else if (secim == 10)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("TEMIZLIK & EV GERECLERI\n");
					printf("---------------------\n");
					printf("1- CAMASIR\n");
					printf("2- BULASIK\n");
					printf("3- TEMIZLIK\n");
					printf("4- MUTFAK\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- CAMASIR\n");
							printf("---------------------\n");
							printf("100- Sivi Deterjan 2,5L >>> 70TL\n");
							printf("101- Yumusatici 1,5L >>> 55TL\n");
							printf("102- Toz Deterjan 1,5KG >>> 45TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Sivi Deterjan' sepete eklendi.\n");
								sepet = 70 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Yumusatici' sepete eklendi.\n");
								sepet = 55 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Toz Deterjan' sepete eklendi.\n");
								sepet = 45 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-102] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- BULASIK\n");
							printf("---------------------\n");
							printf("200- Bulasik Deterjani 750ml >>> 15TL\n");
							printf("201- Bulasik Makinesi Parlatici 250ml >>> 30TL\n");
							printf("202- Bulasik Sungeri 5'li >>> 10TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Bulasik Deterjani' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Bulasik Makinesi Parlatici' sepete eklendi.\n");
								sepet = 30 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Bulasik Sungeri' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-202] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- TEMIZLIK\n");
							printf("---------------------\n");
							printf("300- Lavabo Acici 100g >>> 8TL\n");
							printf("301- Temizlik Bezi 5'li >>> 13TL\n");
							printf("302- Yuzey Temizleyici 1500ml >>> 15TL\n");
							printf("303- Camsil 750ml >>> 15TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Lavabo Acici' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Temizlik Bezi' sepete eklendi.\n");
								sepet = 13 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 302) {
								printf("'Yuzey Temizleyici' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 303) {
								printf("'Camsil' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-303] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- MUTFAK\n");
							printf("---------------------\n");
							printf("400- Cop Torbasi 15'li >>> 16TL\n");
							printf("401- Bulasik Fircasi >>> 27TL\n");
							printf("402- Buzdolabi Poseti >>> 10TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Cop Torbasi' sepete eklendi.\n");
								sepet = 16 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Bulasik Fircasi' sepete eklendi.\n");
								sepet = 27 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Buzdolabi Poseti' sepete eklendi.\n");
								sepet = 10 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-402] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}
			else if (secim == 11)
			{
				while (loop2 == 0) {
					printf("---------------------\n");
					printf("KISISEL BAKIM\n");
					printf("---------------------\n");
					printf("1- AGIZ BAKIM\n");
					printf("2- SAC BAKIM\n");
					printf("3- DUS & BANYO\n");
					printf("4- MAKYAJ VE CILT BAKIM\n");
					printf("---------------------\n");
					printf("5- Ust menuye don.\n");
					printf("---------------------\n");

					printf("Lutfen istediginiz turu seciniz:\n");
					scanf("%d", &tursecim);
					if (tursecim == 1) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("1- AGIZ BAKIM\n");
							printf("---------------------\n");
							printf("100- Dis Fircasi 1+1 >>> 35TL\n");
							printf("101- Agiz Suyu 95ml >>> 21TL\n");
							printf("102- Dis Ipi >>> 45TL\n");
							printf("103- Dis Macunu 75ml >>> 55TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 100) {
								printf("'Dis Fircasi' sepete eklendi.\n");
								sepet = 35 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 101) {
								printf("'Agiz Suyu' sepete eklendi.\n");
								sepet = 21 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 102) {
								printf("'Dis Ipi' sepete eklendi.\n");
								sepet = 45 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 103) {
								printf("'Dis Macunu' sepete eklendi.\n");
								sepet = 55 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [100-103] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 2) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("2- SAC BAKIM\n");
							printf("---------------------\n");
							printf("200- Sac Spreyi 250ml >>> 73TL\n");
							printf("201- Sampuan 500ml >>> 50TL\n");
							printf("202- Sac Bakim Kremi 275ml >>> 35TL\n");
							printf("203- Jole 400ml >>> 25TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 200) {
								printf("'Sac Spreyi' sepete eklendi.\n");
								sepet = 73 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 201) {
								printf("'Sampuan' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 202) {
								printf("'Sac Bakim Kremi' sepete eklendi.\n");
								sepet = 35 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 203) {
								printf("'Jole' sepete eklendi.\n");
								sepet = 25 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [200-203] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 3) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("3- DUS & BANYO\n");
							printf("---------------------\n");
							printf("300- Dus Jeli 500ml >>> 50TL\n");
							printf("301- Banyo Lifi >>> 18TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 300) {
								printf("'Dus Jeli' sepete eklendi.\n");
								sepet = 50 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 301) {
								printf("'Banyo Lifi' sepete eklendi.\n");
								sepet = 18 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [300-301] arasi deger giriniz.\n");
							}
						}
					}
					if (tursecim == 4) {
						while (loop3 == 0) {
							printf("---------------------\n");
							printf("4- MAKYAJ VE CILT BAKIM\n");
							printf("---------------------\n");
							printf("400- Makyaj Pamugu >>> 8TL\n");
							printf("401- Aseton 50ml >>> 12TL\n");
							printf("402- Cimbiz >>> 15TL\n");
							printf("403- Bakim Kremi 300ml >>> 90TL\n");
							printf("404- Dudak Bakim Kremi 200ml >>> 40TL\n");
							printf("---------------------\n");
							printf("1- Ana menuye don.\n");
							printf("2- Ust menuye don.\n");
							printf("---------------------\n");
							printf("Lutfen istediginiz urunu seciniz:\n");
							scanf("%d", &urunsecim);
							if (urunsecim == 400) {
								printf("'Makyaj Pamugu' sepete eklendi.\n");
								sepet = 8 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 401) {
								printf("'Aseton' sepete eklendi.\n");
								sepet = 12 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 402) {
								printf("'Cimbiz' sepete eklendi.\n");
								sepet = 15 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 403) {
								printf("'Bakim Kremi' sepete eklendi.\n");
								sepet = 90 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}
							if (urunsecim == 404) {
								printf("Dudak Bakim Kremi' sepete eklendi.\n");
								sepet = 40 + sepet;
								printf("***Sepet tutari= %d TL***\n", sepet);
								printf("---------------------\n");
								printf("1-Alisverisi bitir.\n");
								printf("2- Ust menuye don.\n");
								printf("---------------------\n");
								printf("Karariniz : ");
								scanf("%d", &devam);
								if (devam == 1)
								{
									system("CLS");
									while (loop4 == 0)
									{
										loop2 = 1;
										loop = 1;
										loop3 = 1;
										printf("********************\n");
										printf("ODEME EKRANI\n");
										printf("********************\n");
										printf("GUNCEL SEPET TUTARINIZ : %d TL.\n", sepet);
										printf("---------------------\n");
										printf("1-KREDI KARTI\n2-NAKIT(%s Indirim firsati!)\nOdeme Yontemi Seciniz: ", indirimYazdir);
										scanf("%d", &odemeYontemi);
										if (odemeYontemi == 1)
										{
											printf("Kredi karti odemeniz yapilmistir.\n");
											printf("***Odenen Tutar = %d TL***\n", sepet);
											loop4 = 1;
										}
										else if (odemeYontemi == 2)
										{
											printf("Nakit Odemede %s Indirim uygulandi.\n", indirimYazdir);
											guncelSepet = sepet - (sepet * indirim);
											printf("***Odenen Tutar= %2.f TL***\n", guncelSepet);
											loop4 = 1;
										}
										else
										{
											printf("Lutfen gecerli bir odeme yontemi secin!\n");
											printf("---------------------------------------\n");
										}
									}
									break;
								}
								else if (devam == 2)
								{
									loop3 = 0;
								}

							}

							else if (urunsecim == 1) {
								loop2 = 1;
								break;
							}
							else if (urunsecim == 2) {
								loop2 = 0;
								break;
							}
							else {
								printf("Lutfen [400-404] arasi deger giriniz.\n");
							}
						}
					}

					else if (tursecim == 5)
					{
						break;
					}
				}
			}

			else {
				printf("Lutfen [1-11] arasi deger giriniz.\n");
			}
		}
	}

}


																//Created by ANIL AKHAN - BERKAY ÖZENEL