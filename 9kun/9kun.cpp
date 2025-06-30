// Data: 30.06.2025.
// All work and lessonb: 
// Topic: Day 8 Switch-case operatori
// -switch - case tuzilishi
// - break va default kalit so'zlari
// - switch - case bilan amaliy masalalar

// Exampel 1
// Queastion and Answer ! 
// switch case -> bu kop shartlarni tartabli va toza yozish uchun
// ishlatiladi kopolab if-else orniga switch yordamida kod oqilishi 
// oson boladi 

// Exampel 2
// Qayerlarda ishlatiladi ? 
// Menu tanlashda 
// Tugma raqamli 
// Oylik ob-havo hafta kunlari 
// Mini kalkulyator 


// Exampel 3
// Exampel Switch case tuzulimasi 
//switch (ifoda){
//case qiymat:
//	// kodlar yoziladi
//break;
//case (qiymat2) {
//	// kodlar yoziladi
//break;
//
//
//
//
//default:
//	// boshqa holatlarda 
//}
//return 0;
//}

// Exampel 4 
// Muxim va kop kerak boladigon eslatma 
// switch -> bu qaysi qiymatga qarash kerakligini bildiradi
// case -> Har hil qiymatlar uchun alohida yonalih 
// break -> Osha holat ishlagnidan song chiqadi 
// default -> Hech biriga mos kelmasa shu ishga tushadi 

// Exampel 4 uchun sodda misol 
// Week day 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int kun;
//
//	printf("Hafta kunlarini kiriting ( 1 - 7 ): ");
//	scanf("%d", &kun);
//
//	switch (kun) {
//	case 1:
//		printf("Dushanba\n");
//		break;
//	case 2:
//		printf("Seshanba\n");
//		break;
//	case 3:
//		printf("Chorsanba\n");
//		break;
//	case 4:
//		printf("Payshanba\n");
//		break;
//	case 5:
//		printf("Juma\n");
//		break;
//	case 6: 
//		printf("Shanba\n");
//		break;
//	case 7:
//		printf("Yakshanba\n");
//		break;
//	default: 
//		printf("Bunday kun yoq\n");
//	}
//	return 0;
//}


// Exampel 5 Calculator 
#include <stdio.h>
int main() {
	float a, b;
	char op;

	printf("Birinchi son: ");
	scanf("%f", &a); 

	printf("Amalni kiriting ( + - * / ): ");
	scanf(" %c", &op);

	printf("Ikkinchi son: ");
	scanf("%f\n", &b);
	
	switch (op) {
	case '+':
		printf("Natija: %.2f\n", a + b);
		break;
	case '-':
		printf("Natija: %.2f\n", a - b);
		break;
	case '*':
		printf("Natija: %.2f\n", a * b);
		break;
	case '/':
		if (b == 0)printf("0 ga bolish mumkin emas!\n");
		else printf("Natija: %.2f\n", a / b);
		break;
	default:
		printf("Notogri amal!");
	}
	return 0;
}
