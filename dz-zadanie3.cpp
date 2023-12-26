#include <iostream>

// Функция для перестановки значений четных и нечетных элементов
void swapEvenOdd(int* array, int size) {
    for (int i = 0; i < size; i += 2) {
        if ((i + 1) < size) { // Убедимся в том, что следующий элемент существует.
            std::swap(array[i], array[i + 1]);
        }
    }
}

int main() {
    int* arr = new int[12]; // Объявление указателя и выделение памяти.

    // Инициализация массива значениями для демонстрации.
    for (int i = 0; i < 12; ++i) {
        arr[i] = i + 1;
    }

    std::cout << "Исходный массив:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << ' ';
    }

    swapEvenOdd(arr, 12); // Вызываем функцию для перестановки.

    std::cout << "\nМассив после перестановки:" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << ' ';
    }

     delete[] arr; // Освободить выделенную память.

     return 0;
}
