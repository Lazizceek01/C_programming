// Data: 26.06.2025.
// Word all : Repeat lesson week.
// Topic: Repeat all 

// 1kun 
// Misoll
// Topic: Kirish va Muhitni tayyorlash: 
// #include - Vazifasi standert kirish va chiqishni taminlaydi 
// ( Kutbxona olib kealdi Printf() ishlahi uchun)
// main() - bu esa funksuya boshi qayerdan boshlanishini korsatadi 
// printf("Hello world\n") - Bu esa biz yizgan qiymatni terminalga 
// olip chiiqip beradi 
// return 0; - bu esa bizga funksiya muafaqiyatli tugaganini bildirdi 


// 2kun 
// Misoll
// Topic: Dastur tuzilishi
// Pre-prosessor - #include <math.p> bu bizga matematik kutibxona 
// ulash uchun kerak boladi 
// int hisob = 0; - bu global ozgaruvchi maindan tashqari hamma joyda korinadi



// 3kun 
// Topic: Ozgaruvchilar va ularning turlari
// Misoll
// int butun = 42;
// float kasr  = 12.99;
// double aniq = 3.1234567;
// char belgi = 'A';
// const float PI = 3.14; (Ozgarmas konstante ) 


// Natija: printf("%d  %.2f  %.7f  %c\n", butun, kasr, aniq, belgi);


// 4kun 
// Topic: Operatorlar 
// Misoll
//#include <stdio.h>
//int main() {
//	int a = 10;
//	int b = 3;
//
//	printf("a + b = %d\n", a + b);
//	printf("a - b = %d\n", a - b);
//	printf("a * b = %d\n", a * b);
//	printf("a / b = %d\n", a / b);
//	printf("a %% b = %d\n", a % b);
//
//
//	printf("a > b: %d\n", a > b);
//	printf("a == b: %d\n", a == b);
//	printf("a < 15 && b < 5 : %d\n", a < 15 && b < 5);
//
//	a += 5;
//	printf("a += 5 -> %d\n", a);
//
//	return 0;
//}




// 5kun 
// Topic: Kirish va chiqarish funcsiyalari  
// Yaniy scanf() va pinrtf() 
// Misoll
//#include <stdio.h>
//int main() {
//	int yosh;
//	printf("Yoshingizni kiriting: ");
//	scanf_s("%d", &yosh);
//	printf("Siz %d yoshdasiz! :)\n", yosh);
//	return 0;
//}


// Keyingiz protokolari 
// getchar va putchar 

//#include <stdio.h>
//int main() {
//	char x;
//	printf("Harf kiriting: ");
//	x = getchar();
//	printf("Siz kiritgan harf: ");
//	putchar(x);
//	putchar('\n');
//	return 0;
//}



// 6kun 
// Topic: Shartli operatorlar 
//#include <stdio.h>
//int main() {
//	int ball = 73;
//
//	if (ball >= 90)
//		printf("A\n");
//
//	else if (ball >= 80)
//		printf("B\n");
//
//	else if (ball >= 70)
//		printf("C\n");
//
//	else printf("D yoki F\n");
//
//	// Ternary
//	int yosh = 17;
//	printf("%s\n", (yosh >= 18) ? "Balogat" : "Voyaga yetmagan");
//	return 0;
//}





// 7kun 
// Topic: Mini Loyiha 
// Kalkulator 
#include <stdio.h>

int main(void) {
    float x, y;
    char op;

    printf("Birinchi sonni kiriting: ");
    scanf_s("%f", &x);

    printf("Amalni kiriting (+ - * /): ");
    scanf_s(" %c", &op, 1);   // bo'sh joy + buffer uzunligi (1)

    printf("Ikkinchi sonni kiriting: ");
    scanf_s("%f", &y);

    if (op == '+') {
        printf("Natija: %.2f\n", x + y);

    }
    else if (op == '-') {
        printf("Natija: %.2f\n", x - y);

    }
    else if (op == '*') {
        printf("Natija: %.2f\n", x * y);

    }
    else if (op == '/') {
        if (y == 0) {
            printf("Xatolik: 0 ga bo‘lib bo‘lmaydi!\n");
        }
        else {
            printf("Natija: %.2f\n", x / y);
        }

    }
    else {
        printf("Xatolik: amal noto‘g‘ri!\n");
    }

    return 0;
}

