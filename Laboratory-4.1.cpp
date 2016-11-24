#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(void)
{
    double *pmas = 0; // Иницилизация укзателя на массив
    unsigned int size = 0; // Неизвестный размер массива
    cout << "Please enter the size of the array - ";
    cin >> size;
    pmas = (double *)malloc( size*sizeof(double) ); // Выделение памяти для массива
    for ( int i=1; i<size; i++)
    {
    pmas[i]=rand() % 100; // заполненеи массави рандомными числами от 0 до 100
    cout << pmas[i] << " ";
    }
    // Сортировка массива
    cout << endl;
    for ( int i=0; i<size; i++)
    {
        for (int z=0; z<size-i; z++)
        {
            if(pmas[z]<pmas[z+1])
            {
            //Обмен местами
            double a = pmas[z];
            pmas[z] = pmas[z+1];
            pmas[z+1] = a;
            }
         }
    }
    cout << endl << "An array in descending order -  ";
    for(int i=0; i<size-1; i++)
    {
    cout << pmas[i] << " ";
    }
    cout << endl;

    free(pmas); // Освобождаем память

    _getch();
    
    return 0;
}