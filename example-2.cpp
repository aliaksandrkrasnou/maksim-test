#include <iostream>

using namespace std;

int main()
{
    int length = 5; // максимальный размер стека
    int stack[length];
    for (int i = 0; i < length - 1; ++i) {
        stack[i] = 0;
    }
    
    cout << "Добавляем 3 элемента в стек\n";
    int k = 0;
    int uk = 0;
    while (k < 3) {
        cout << "\nВведите " << k + 1 << "-ый элемент для добавления: ";
        
        int x = 0;
        cin >> x;
        
        stack[uk] = x; // добавляем только в конец
        uk++;
        
        k++;
    }
    
    cout << "Элементы в стеке: ";
    for (int i = 0; i < uk; ++i) {
        cout << stack[i] << " ";
    }
    cout << "\n";
    
    // Задача: достать 2 элемента из стека и добавить туда 1400
    
    k = 0;
    while (k < 2) {
        cout << "Элемент: " << stack[uk - 1] << "\n";
        uk--; // типа удалили элемент из стека
        
        k++;
    }
    
    cout << "Элементы в стеке после удаления: ";
    for (int i = 0; i < uk; ++i) {
        cout << stack[i] << " ";
    }
    cout << "\n";
    
    stack[uk] = 1400; // добавляем только в конец
    uk++;
    
    cout << "Элементы в стеке после добавления 1400: ";
    for (int i = 0; i < uk; ++i) {
        cout << stack[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
