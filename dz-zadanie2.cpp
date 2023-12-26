//2
// Функция выделения памяти для массива
double* allocateArray(int size) {
    return new double[size];
}

// Функция заполнения ячеек данными
void fillArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Введите значение для элемента " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

// Функция вывода данных на экран
void printArray(const double* arr, int size) {
    std::cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Функция освобождения памяти
void freeArray(double* &arr) {
    delete[] arr;
    arr = nullptr;
}

int main() {
    int arraySize;
    char userChoice;

    do {
        // Запрос размера массива у пользователя
        std::cout << "Введите размер массива: ";
        std::cin >> arraySize;

        // Объявление указателя на массив типа double и работа с ним через функции
        double* myArray = allocateArray(arraySize);

        fillArray(myArray, arraySize);

        printArray(myArray, arraySize);

        freeArray(myArray);

        // Предложение пользователю продолжить или завершить работу программы
        std::cout << "\nХотите создать новый динамический массив? (y/n): ";
        std::cin >> userChoice;

     } while(userChoice == 'y');

     return 0;
}

