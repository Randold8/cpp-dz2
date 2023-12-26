#include <iostream>
//1.1
const float constValue = 3.14f;
const float* const ptrToConstFloat = &constValue; // Константный указатель на константу типа float
//1.2
typedef long int* LongIntPtr; // Тип LongIntPtr теперь является указателем на long int
LongIntPtr ptrToLongInt; // Объявляем переменную этого типа
//1.3
double* ptrToDouble; // Указатель на double
//1.4
const short int* ptrToConstShortInt;
//1.5
typedef const float* const ConstPtrToConstFloat;
//1.6
typedef const char* CharPtrToConst;
//1.7
double value = 0.0;
double* const ptrToDoubleConst = &value;
//1.8
typedef unsigned int* const ConstPtrToUnsignedInt;
