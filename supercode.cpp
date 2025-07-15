#include <iostream>
#include <string>

using namespace std;

int main() {
    string username = "Vlados340";
    string password = "Qwerty123456";

    string input_User;
    string input_Pass;


    cout << "Введите имя пользователя: ";
    cin >> input_User;
    cout << "Введите пароль: ";
    cin >> input_Pass;

    if (input_User != username and input_Pass != password) {

        cout << "неверные имя пользователя и пароль! " << endl;
    }
    else if (input_User != username and input_Pass == password) {

        cout << "неверное имя пользователя! " << endl;
    }
    else if (input_User == username and input_Pass != password) {

        cout << "неверный пароль! " << endl;
    }
    else {

        cout << "Успешная авторизация! " << endl;
    }


    return 0;
}