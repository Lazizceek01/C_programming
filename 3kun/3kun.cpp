// Topic: 2Kun takrorlashdan boshlayapman 
// Task : 
// 1) Tartibli kod yozish
// 2) Preprocessor direktivalar (#include, #define)-Repeat.

// Task 1 
//#include <stdio.h>
//int main() {
//	printf("Hello World\n");
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//int main() {
//	printf("Hello world\n");
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//int main() {
//	printf("Hello world\n");
//	return 0;
//}


// Task 2
// Performs these tasks
//#include <stdio.h> //printf(),scanf()  And so on
//#define <math.h> // sqrt(),pow(), and mathematik function 

// Task 
// Aylana uzunligini topish 
//#include <stdio.h>
//#define PI 3.14 
//
//int main() {
//	float r = 2;
//	float aylana = 2 * PI * r;
//	printf("Aylana uzunligi: %.2f\n", aylana);
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//#define PI 3.14
//int main() {
//	float r = 2;
//	float aylana = 2 * PI * r;
//	printf("Aylana uzunligi: %.2f\n", aylana);
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//#define PI 3.14
//int main() {
//	float r = 2;
//	float aylana = 2 * PI * r;
//	printf("Aylana uzunligi: %.2f\n", aylana);
//	return 0;
//}

// New Task 
// Tortburchak yuzasini hisoblash 
//#include <stdio.h> 
//#define UZUNLIK 5.5
//#define EN 3.2 
//
//int main() {
//	float yuza = UZUNLIK * EN;
//	printf("Tortburchak yuzasi: %.2fkv.m\n", yuza);
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//#define UZINLIK 5.5 
//#define EN 3.2 
//int main() {
//	float yuza = UZINLIK * EN;
//	printf("Tortburchak yuzasi: %.2fKv.m\n", yuza);
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//#define UZUNLIK 5.5 
//#define EN 3.2 
//int main(){
//	float yuza = UZUNLIK * EN;
//	printf("Tortburchak yuzasi: %.2fKv.m\n", yuza);
//	return 0;
//}



// Day 3: 
// Topic: Variables and data types
// Start Data types 
// 
// int - For integers 
// int Example int yosh = 18;
// 
// float - Decimal numbers (low precision)
// float Example float narx = 12.5;
// 
// double - Fractional numbers (high precision)
// double Example double kattaSon = 123.45678;
// 
// char - Single character (letter, number, symbols)
// char Example char harf = 'A';


// Elon qilish 
//int yosh;
//float narx;
//char belgi; 


// Elon qilip qiymat berish 
//yosh = 25;
//narx = 12.99;
//belgi = 'A';

// E'lon qilish va qiymat berishni birga yozish;
//int yosh = 25;
//float narx = 12.99;
//char belgi = 'A';

// Example 
//#include <stdio.h>
//int main() {
//	int yosh = 25;
//	float narx = 12.99;
//	char belgi = 'A';
//	
//	printf("Yosh: %d\n", yosh);	//%d - int 
//	printf("Narxi: %2f\n", narx);
//	printf("belgi: %c\n", belgi);
//
//	return 0;
//};


// Repeat 
//#include <stdio.h>
//int main() {
//	int yosh = 25;
//	float narx = 12.99;
//	char belgi = 'A';
//
//	printf("Yosh: %d\n", yosh);
//	printf("Narxi: %.2f\n", narx);
//	printf("Belfi: %c\n", belgi);
//
//	return 0;
//}

// Repeat 
//#include <stdio.h>
//int main() {
//	int yosh = 25;
//	float narx = 12.99;
//	char belgi = 'A';
//
//	printf("Yoshi: %d\n", yosh);
//	printf("Narxi: %.2f\n", narx);
//	printf("Belgi: %c\n", belgi);
//
//	return 0;
//}


// Task 1 
//#include <stdio.h>
//#define PI 3.14 
//int main() {
//	float r = 2;
//	float aylana = 2 * PI * r;
//	printf("Aylana uzunligi: %.2f\n", aylana);
//	return 0;
//}

// Task 2 
//#include <stdio.h>
//#define UZUNLIGI 5.5 
//#define EN 3.2 
//int main() {
//	float yuza = UZUNLIGI * EN;
//	printf("Tortburchak yuzasi: %.2fKm.v\n", yuza);
//	return 0;
//}


// Task 3 
//#include <stdio.h>
//int main() {
//	int yosh = 25; 
//	float narx = 12.99;
//	char belgi = 'A';
//
//	printf("Yoshi: %d\n", yosh);
//	printf("Narxi: %.2f\n", narx);
//	printf("Belgi: %c\n", belgi);
//
//	return 0;
//}




// Konstantalar (doimiy qiymatlar)
// Kocstruktirlarni keyinchalkik ozgartirip bolmaydi 
// c tilida #define yoki const bilan yoziladi 

// 1 - Usul #define bilan 
//#define PI 3.14 

// 2 - Usul const bilan 
//const float PI = 3.14 

// Exampel 

//#include <stdio.h>
//#define PI 3.14 
//int main() {
//	float r = 2;
//	float aylana = 2 * PI * r;
//	printf("Aylana uzunligi: %.2f\n", aylana);
//	return 0;
//}


// Esda tutish kerak bolgan protokolar :

// int = Butun sonlar uchun 
// float - kasirli sonlar uchun 
// char - belgilar uchun 
// const va #define ozgarmaydigon qiymat 


// Konstruktorda #define va const ishlatilsa ularning 
// qiymatini ozgar tirip bolmaydi 

// 1 usul #define 
//#define PI 3.14 

// 2 usul const 
//const float PI = 3.14

// Task 
// Aylanani yuzasini topish 
#include <stdio.h>
#define PI 3.14 
int main() {
	float r = 2;
	float aylana = 2 * PI * r;
	printf("Aylana uzunligi: %.2f\n", aylana);
	return 0;
}