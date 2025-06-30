// Date: 28.06.2025. 
// All world: Tasks and New Topic 
// Topic: Switch va case Operatori 

//#include <stdio.h>
//int main() {
//	int kun;
//
//	printf("Hafta kunini raqam sifatida kiriting ( 1 - 7 ): ");
//	scanf_s("%d", &kun);
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
//		printf("Notogri raqam !\n");
//	}
//	return 0;
//}


// Exampel 2 
//#include <stdio.h>
//int main() {
//	float a, b;
//	char op;
//
//	printf("Birinchi sonni kiriting: ");
//	scanf_s("%f", &a);
//
//	printf("Amalni kiriting ( + - * / ): ");
//	scanf_s(" %c", &op,1);
//
//	printf("Ikkinchi sonnig kiriting: ");
//	scanf_s("%f", &b);
//
//  switch (op) {
//	case '+':
//		printf("Natija: %.2f\n", a + b);
//		break;
//	case '-':
//		printf("Natija: %.2f\n", a - b);
//		break;
//	case '*':
//		printf("Natija: %.2f\n", a * b);
//		break;
//	case '/':
//		if (b == 0)
//			printf("Xatolik 0 ga bolinmaydi !\n");
//		else
//			printf("Natija: %.2f\n", a / b);
//		break;
//    default:
//		printf("Notogri amal !\n");
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//    float a, b;
//    char op;
//
//    printf("Birinchi sonni kiriting: ");
//    scanf("%f", &a);
//
//    printf("Amalni kiriting (+ - * /): ");
//    scanf(" %c", &op);  // bo‘sh joy muhim
//
//    printf("Ikkinchi sonni kiriting: ");
//    scanf("%f", &b);
//
//    switch (op) {
//    case '+':
//        printf("Natija: %.2f\n", a + b);
//        break;
//    case '-':
//        printf("Natija: %.2f\n", a - b);
//        break;
//    case '*':
//        printf("Natija: %.2f\n", a * b);
//        break;
//    case '/':
//        if (b == 0)
//            printf("Xatolik: 0 ga bo‘lib bo‘lmaydi!\n");
//        else
//            printf("Natija: %.2f\n", a / b);
//        break;
//    default:
//        printf("Noto‘g‘ri amal!\n");
//    }
//
//    return 0;
//}
