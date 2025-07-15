#include <iostream>

using namespace std;

int main() {
    
    int num = 0;
    char plusik;
    bool end = true;

    cout << " Нажми + и число станет больше!!! Чтобы остановиться нажми =" << endl;

    while (end)
    {
        cin >> plusik;
         
        if (plusik == '+')
        {
            num++;
            cout << "Ваше число сейчас - " << num << endl;

        }
        if (plusik == '=') {

            break;
        }
        
    }
    
    cout << "Ваше конечное число!!! - " << num << endl;

    return 0;
}