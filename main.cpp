#include <iostream>
#include <windows.h>
#include "Task4.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    list *head;
    head = NULL;
    int variant, x, pos;
    do
    {
        system("cls");
        cout << "Выберите вариант\n" << endl;
        cout << "1. Вывести список\n"
             << "2. Закинуть в начало списка\n"
             << "3. Закинуть в конец списка\n"
             << "4. Вставить после определенного элемента\n"
             << "5. Вставить до определенного элемента\n"
             << "6. Удалить начало списка\n"
             << "7. Удалить конец списка\n"
             << "8. Удалить элемент\n"
             << "9. Добавить в конец списка head максимальный четный элемент списка L\n"
             << "10. Выход из программы\n" << endl;
        cout << ">>> ";
        cin >> variant;
        switch (variant)
        {
        case 2:
            cout << "Введите значение" << endl << ">>> ";
            cin >> x;
            push(head, x);
            break;
        case 6:
            pop(head);
            break;
        case 4:
            cout << "Введите значение" << endl << ">>> ";
            cin >> x;
            cout << "Введите элемент списка" << endl << ">>> ";
            cin >> pos;
            past_after(head, x, pos);
            break;
        case 5:
            cout << "Введите значение" << endl << ">>> ";
            cin >> x;
            cout << "Введите элемент списка" << endl << ">>> ";
            cin >> pos;
            if(head -> id == pos)
                push(head, x);
            else
                past_before(head, x, pos);
            break;
        case 1:
            print(head);
            break;
        case 3:
            cout << "Введите значение" << endl << ">>> ";
            cin >> x;
            push_at_the_end(head, x);
            break;
        case 7:
            if(head -> next == NULL)
                pop(head);
            else
                delete_the_end(head);
            break;
        case 8:
            cout << "Введите значение" << endl << ">>> ";
            cin >> x;
            if(head -> id == x)
                pop(head);
            else
                remove_from_the_list(head, x);
            break;
        case 9:
            list *L;
            L = NULL;
            cout << "Введите элементы" << endl;
            cin >> x;
            while(x != 0)
            {
                push(L, x);
                cin >> x;
            }
            paste(head, L);
            break;
        case 10:
            cout << "Завершение сеанса...";
            break;
        default:
            cout << "Вы выбрали неверный вариант, побробуйте еще раз" << endl;
            break;
        }
        cout << endl;
        system("pause");
    }
    while(variant != 10);
    return 0;
}
