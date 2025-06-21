// Date: 21.06.2025.
// Topic: Operatorlar 



// Asosiy vazifasi matematik ammalarni bajaradi
// Exampel:	
// +Qoshish  5 + 3 = 9
// - Ayirish  10 - 4 = 6
// * Kopaytir  3 * 5 = 15
// Boluv   10 \ 2 = 5
// % Qoldiq olish 7 % 3 = 1 
// % faqat butun somnlar bilan ishlap qoldiqlarni beradi 



// 2 Taqosalash operatorlari 
// Operatori     Manosi         Misol      Natija 
//	  ==		  Teng		    5==5		1
//    !=        Teng emas       5!=3        1   
//     >          Katta         7>3         1    
//     <          Kichik        2<5         1 
//	  >=      Katta yok teng    5>=5        1    
//    <=     Kichik yoki teng   4<=6        1



// 3 Mantiqiy operatorlar 
//  Operator    Ma’nosi               Misol     Natija                                  
//   & &     Va (ikkalasi ham true)    1 && 1     1         
//    `                              Yoki (bittasi true bo‘lsa yetarli)
//    !			Emas teskari qiymat   !1          0  





// 4 Tayyinlash ( assign ) operatorlari  
//Operator  Nima qiladi ?      Misol    Natija       
// =       Qiymat berish       a = 5    a = 5    
// + =     Qo‘shib tayinlash   a += 3   a = a + 3
// - =     Ayirib tayinlash    a -= 2   a = a - 2 
// * =     Ko‘payti tayinlash  a *= 4   a = a * 4 
// / =     Bo‘lib tayinlash    a /= 2   a = a / 2 
// % =     Qoldiqni olib tayi  a %= 3   a = a % 3


///// Task and Exempel  
#include <stdio.h>
int main() {
	int a = 5, b = 2;
	int yigindi = a + b;
	int katta = a > b;
	int mantiqiy = (a > 3 && b < 5);

	printf("Yigindi: %d\n",yigindi);
	printf("Katta: %d\n", katta);
	printf("Mantiqiy: %d\n", mantiqiy);
	return 0;
}
