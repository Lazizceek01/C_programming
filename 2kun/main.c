// Date: 09.02.2025.
// Word lesson and Task 
// Topic: 2kun  C tilidagi asosiy tushunchalar 



// #include <stdio.h>   // 1) Kutibxona YUklash 
// int main (){         // 2) Asosiy funcsiya 
//   printf("Hello World !\n"); // 3) Kod yozilish qismi 
//   return 0;   // 4) Funcsiya muafaqiyatli tugaganini bildiradi 
// }



// Exampel  
// #include <stdio.h>           // 1) Kutibxona yuklab 
// int main(){                  // 2) Fumsiya boshlanishi bildiradi 
//   printf("Hello World !\n"); // 3) Terminlada kiritilgan va oling qiymatlaerni olip keladi   
//   return 0;                  // 4) Funcsiya muafaqiyatli tugaganini boldiradi 
// }



// #include <stdio.h>
// int main(){
//   printf("Hello Toshkent\n");
//   return 0;
// }



// Toza va chiroyli kod yozish uchun har bir kod darajasi tab bilan boshlab yoziladi 
#include <stdio.h>
int maiN(){
  printf("Hello World !\n");
  return 0;
}



// #include <stdio.h>
// int main(){
//   printf("Salom Toshkent\n");
//   return 0;
// }


// Preprocessor direktivalar (#include, #define)
// #include - print() scanf() va hokzo  
// #define - Constante doyimi qiymatlarni berish uchun ushlatiladi 


// #define PI 3.14159
// int main(){
//   printf("PI: %.2f", PI);
//   return 0;
// }


// #include <stdio.h>
#define SALOM "Assalomu Aleykum:"
int main(){
  printf("%s\n", SALOM);
  return 0;
}

// Funcsiyadagi Ozgaruvchi define Global 
// 




// Men ozim yechgan misolar 
// TASK 1 

// #include <stdio.h>
// #define SALOM "Laziz"
// int main(){
//   printf("Salom %s\n", SALOM);
//   return 0;
// }
// Tohgri chiqdi 



// Task 2 
#include <stdio.h>
#define PI 2004
int main(){
  float yil = 2025;
  printf("Siznig yoshingiz: %.f", PI - yil);
  return 0;
}
// Togri chiqti 


//Task 3 
#include <stdio.h>
#define Shaxar "O'zbekiston"
int main(){
  printf("Men %s fuqarisiman", Shaxar);
  return 0;
}
Mayda hatolar bor ammo togri 


// TAsk 4 
// #include <stdio.h>
// int main(){
//   char harf = 'Z';
//   printf("Siz tanlgan harf: %c", harf);
//   return 0;
// }
//



// // Task  5 
// #include <stdio.h>
// #define PI 4.57
// int main(){
//   float baho = 10;
//   printf("Sizning bahoyingiz: %.2f\n", baho);
//   return
// }
// Notogri 

// Umummiy Baho 5 balli sistemadan 3.5/5 dan 


// Testlar yechildi 20 ta dan 17 ta togri 5/4.5  