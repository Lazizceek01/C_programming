// Date:10.07.2025
// Topic:Ozgaruvchilar va Malumotlar turlari 
// All world tasks and lessons.

// Remember
// int - bu faqat butun sonlar uchun ishlatiladi {%d}
// float - esa kasirli kichiksonlar uchun {%f yoki %.2f}
// double - esa katta aniqligdagi kasirli sonlar  {%if}
// char - esa bitta belgi uchun ishlatildi 


// Exampel 
// Ozgaruvchilarni elon qilish
// int yosh = 18;
// float baho = 4.75;
// char harf = 'b';
// double pi = 3.14789;
// Ozgaruvchilar bu - biz kiritgan qiymatni oziga vaqticha saqlab turuvchi konteneyr


// Konstantelar
// define da oldindan belgilangan qiymat 
// #define PI 3.14

// Qiymati ozgarmayfigon ozgaruivchi 
// const int yosh = 18;




// Exampel 
// Ozgaruvchilarni elon qildim 
// #include <stdio.h>
// #define Ism "Laziz"
// int main(){
//   const int yosh = 20;
//   float baho = 4.75;
//   char belgi = 'A';

//   printf("Ism: %s\n", Ism);
//   printf("Yosh: %d\n", yosh);
//   printf("Baho: %.2f\n", baho);
//   printf("Belgi: %c\n", belgi);
//   return 0;
// }


// The given exercise.

// Task 1 
// #include <stdio.h>
// #define Ism "Laziz"
// int main(){
//   const int yosh = 21;
//   float baho = 4.25;
//   char belgi = 'A';

//   printf("Ismingiz: %s\n", Ism);
//   printf("Yoshingiz: %d\n", yosh);
//   printf("Siz eng kop olgan baho: %.2f\n", baho);
//   printf("Sizga yoqadigon belgi: %c\n", belgi);
//   return 0;
// }



// Task 2 
// #include <stdio.h>
// #define Ism "Diyorbek"
// int main(){
//   printf("Salom mening ismim %s\n", Ism);
//   return 0;
// }


// Task 3 
// #include <stdio.h>
// #define tugYil 2004
// int main(){
//   int yil = 2025;

//   printf("Siz hozir %d\n yoshdasiz", tugYil - yil);
//   return 0;
// }


// #define tugYil 2004
// int main() {
//   int hozirgiYil = 2025;
//   int yosh = hozirgiYil - tugYil;
//   printf("Siz hozir %d yoshdasiz\n", yosh);
//   return 0;
// }


// Task 4 
// #include <stdio.h>
// int main(){
//   double baho = 4.7;

//   printf("Eng aniq son: %.2f", baho);
//   return 0;
// }


// Task 5 
// #include <stdio.h>
// int main(){
//   int yosh = 19;
//   char belgi = 'A';
//   float baho = 4;

//   printf("Yoshi: %d\n", yosh);
//   printf("Belgi: %c\n", belgi);
//   printf("Ortacha baho: %.2f\n", baho);
//   return 0;
// }



// New Tasks
// Task 1 
// #include <stdio.h>
// #define Ism "Ali"
// int main(){
//   int yosh = 20;
//   float baho = 4.75;
//   char belgi = 'A';

//   printf("Ismingiz: %s\n", Ism);
//   printf("Yoshingiz: %d\n", yosh);
//   printf("Ortacha bahoyingiz: %.2f\n", baho);
//   printf("Yoqtirgan belgingiz: %c\n", belgi);
//   return 0;
// }




// Task 2 
// #include <stdio.h>
// int main(){
//   int yil = 2025;
//   int tugulYili = 2004;
//   printf("Siz %d\n yoshdasiz", tugulYili - yil);
//   return 0;
// }

// Togri variyant
// int yosh = yil - tugulYili;
// printf("Siz %d yoshdasiz\n", yosh);



// Task 3 
// #include <stdio.h>
// #define PI 3.14
// int main(){
//   float r = 1;
//   float yuza = PI * r * r;

//   printf("Aylana yuzasi: %.2f", yuza);
//   return 0;
// }



// Task 4 
// #include <stdio.h>
// int main(){
//   char belgi = 'Z';
//   int son = 90;

//   printf("Z belgisi teng: %d\n", son);
//   return 0;
// }


// char belgi = 'Z';
// printf("'%c' belgining ASCII kodi: %d\n", belgi, belgi);



// Task 5 
// #include <stdio.h>
// int main(){
//   float naho1
// }



// #include <stdio.h>
// int main(){
//   float baho1 = 4.5, baho2 = 5.0;
//   float ortacha = (baho1 + baho2) / 2;

//   printf("O'rtacha baho: %.2f\n", ortacha);
//   return 0;
// }




