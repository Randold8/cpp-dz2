#include <iostream>
using namespace std;

// Прототипы функций для арифметических операций
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) {
    if(b != 0) return a / b;
    cout << "Ошибка: Деление на ноль!" << endl;
    return 0;
}

// Тип для указателя на функцию
typedef int (*operation)(int, int);

int main() {
    operation op = nullptr;
    char operationSign;
    int num1, num2;

    do {
        cout << "Введите два числа и знак операции (+,-,*,/), или пробел для завершения: ";
        cin >> num1 >> num2 >> operationSign;

        switch(operationSign){
            case '+':
                op = &add;
                break;
            case '-':
                op = &subtract;
                break;
            case '*':
                op = &multiply;
                break;
            case '/':
                op = ÷
                break;
            default:
                if(operationSign != ' ')
                    cout << "Неизвестная операция. Попробуйте снова." << endl;
        }

        // Если было выбрано действие и это не выход из программы.
        if(op && operationSign != ' ') {
            cout << "Результат: " << op(num1,num2) << endl << endl;;
            // Сбросить указатель после выполнения действия.
            op = nullptr;
        }

      } while(operationSign != ' ');

      return 0;
}
