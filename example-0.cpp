#include <iostream>

using namespace std;

int main()
{
    int length = 2; // длина очереди
    int queue[length]; // сама очередь
    
    for (int i = 0; i < length; ++i) {
        queue[i] = -1;
    }
    
    int x;
    cin >> x;
    
    queue[length - 1] = x;
    
    for (int i = 0; i < length; ++i) {
        cout << queue[i] << " ";
    }
    
    cout << "\n";
    return 0;
}
