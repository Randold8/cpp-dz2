#include <iostream>
#include <cstdlib> // Для std::rand() и std::srand()
#include <ctime>   // Для std::time()

// Функция для заполнения двумерного массива случайными числами от 10 до 50
void fillArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = rand() % (50 - 10 + 1) + 10;
        }
    }
}

// Функция для вывода двумерного массива на экран
void printArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << '\t';
        }
        std::cout << '\n'; // Перевод строки после каждой строки массива
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // Инициализация генератора случайных чисел

    int rows, cols;

    // Запрос у пользователя количества строк и столбцов
    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    // Объявление двумерного динамического массива
    int** myArray = new int*[rows];

     for (int i = 0; i < rows; ++i) {
         myArray[i] = new int[cols];
     }

     fillArray(myArray, rows, cols); // Заполнение массива

     printArray(myArray, rows, cols); // Отображение массива

     // Освобождение памяти перед выходом из программы
     for (int i = 0; i < rows; ++i)
         delete[] myArray[i];

     delete[] myArray;

     return 0;
}
