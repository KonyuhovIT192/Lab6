﻿

#include <iostream>
#include <locale.h>
#include<stdio.h> 
#define N 20 
#define M 20
#define V 20 

int main()
{ 
    setlocale(LC_CTYPE, ""); 
    int mas1[N] = { 1,1,1,4,4,4,5,5,5,1,1,3,3,3,3,7,7,7,7,7 }, mas2[M] = {}, mas3[V] = {}, i, j, a, c;
    j = 0;
    a = 0;
    c = 0;
    for (i = 0; i < N; i++)
 
        if (mas1[i] == mas1[i + 1])
        {
        }
        else
        {
            mas2[j] = mas1[i];
            mas2[j + 1] = i + 1;
            j = j + 2;
        }
    
        for (j = M-1; j >=0; j=j-2)
         if (mas2[j] == 20)
         { 
             a = mas2[j] - mas2[j - 2];
            c = j;
                for (i = 0; i < mas2[j] - mas2[j - 2]; i++)
             mas3[i] = mas2[j - 1];
                   
         }   
        for (i = V - 1; i > V-1-mas2[1]; --i)
            mas3[i] = mas2[0];
   
        for (j = 3; j < c; j = j + 2)
        {
            i = mas2[j] - mas2[j - 2];
            while (i > 0)
            {
                mas3[a] = mas2[j - 1];
                a = a + 1;
                --i;
            }
        }
    printf("Элементы массива: \n "); 
    for (i = 0; i < N; i++)  
    printf("%d–й элемент: %d \n ", i + 1, mas1[i]);
    for (j = 0; j < M; j++)
        printf("%d–й элемент: %d \n ", j + 1, mas3[j]);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
