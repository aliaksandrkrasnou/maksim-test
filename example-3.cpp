#include <iostream>

using namespace std;
// значения - вещественные
// 1. Создать стек
// 2. Добавить элемент в стек
// 3. Удалить элемент из стека
// 4. Посмотреть элемент последний в стеке (текущий элемент)
// 5. Посмотреть все элементы стека

class Stack
{
    private:
        int maxLength; // использовать для указания МАКСИМАЛЬНОГО количества элементов в стеке
        int n; // кол-во ТЕКУЩИХ эдементов в стеке (в прошлом объяснении это uk, указатель конца)
        float *stack; // ссылка на представление стека в памяти в виде массива
        
        void fill(float value)
        {
            for (int i = 0; i < n; ++i) {
                stack[i] = value;
            }
        }
    public:
        Stack() // конструктор по умолчанию
        {
           maxLength = 10;
           n = 0;
           stack = new float[maxLength]; // выделяем память под массив стека на maxLength элементов
           
           this->fill(0);
        }
        
        Stack(int maxLength)
        {
            this->maxLength = maxLength;
        
            n = 0;
            stack = new float[maxLength]; // выделяем память под массив стека на maxLength элементов
           
            this->fill(0);
        }
        
        ~Stack()
        {
            delete[] stack;
            stack = nullptr;
        }
        
        int countCurrentElements() // посчитать кол-во текущих элементов в стеке, т.е ТЕКУЩИЙ размер стека
        {
            return n;
        }
        
        void push(float value) // добавляет в стек
        {
            if (n == maxLength) {
                cout << "Стек заполнен полностью. Элемент " << value << " нельзя добавить.\n";
            } else {
                stack[n++] = value; // тоже самое, что и эти две операции: stack[n] = value; n++;
            }
        }
        
        float pop() // возврат элемента из стека
        {
            if (n == 0)
            {
                 cout << "Стек пуст. Нечего вернуть.\n";
            }
            else
            {
                return stack[--n]; // тоже самое, что и n--; return stack[n];  
            }
        }
        
        void print() // вывод стека на консоль
        {
            cout << "Текущий размер стека: " << n << "\n";
            cout << "Элементы стека: ";
            
            for (int i = n - 1; i >= 0; --i) {
                cout << stack[i] << " ";
            }
            
            cout << "\n";
        }
};

int main()
{
    /*
    Задание 1. Создать стек с максимальным размером 3. Ввести с клавиатуры три элемента, записать их в стек. Вывести весь стек на экран
    
    Задание 2. Создать в классе Стэк метод, считающий сумму всех элементов, которые на данный момент в стеке
    Пример:
    Вводим с клавиатуры следующие числа:
    4.2
    8
    3.1
    Ответ: 15.3
    */
  
  
    Stack stack; // его максмальный размер 10 (maxLength = 10, смотри консруктор по умолчанию)
    
    stack.push(1.423);
    stack.push(23.77);
    
    stack.print();
    
    float x = stack.pop();

    stack.print();
    
    cout << x << "\n";
    
    Stack stackWithParams(1); // задаем сами максмальный размер стека (смотри конструктор с параметрами)
    
    stackWithParams.push(1.423);
    stackWithParams.push(23.77);
    
    stackWithParams.print();
    
    return 0;
}
