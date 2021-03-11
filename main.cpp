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
        cout << "�������� �������\n" << endl;
        cout << "1. ������� ������\n"
             << "2. �������� � ������ ������\n"
             << "3. �������� � ����� ������\n"
             << "4. �������� ����� ������������� ��������\n"
             << "5. �������� �� ������������� ��������\n"
             << "6. ������� ������ ������\n"
             << "7. ������� ����� ������\n"
             << "8. ������� �������\n"
             << "9. �������� � ����� ������ head ������������ ������ ������� ������ L\n"
             << "10. ����� �� ���������\n" << endl;
        cout << ">>> ";
        cin >> variant;
        switch (variant)
        {
        case 2:
            cout << "������� ��������" << endl << ">>> ";
            cin >> x;
            push(head, x);
            break;
        case 6:
            pop(head);
            break;
        case 4:
            cout << "������� ��������" << endl << ">>> ";
            cin >> x;
            cout << "������� ������� ������" << endl << ">>> ";
            cin >> pos;
            past_after(head, x, pos);
            break;
        case 5:
            cout << "������� ��������" << endl << ">>> ";
            cin >> x;
            cout << "������� ������� ������" << endl << ">>> ";
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
            cout << "������� ��������" << endl << ">>> ";
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
            cout << "������� ��������" << endl << ">>> ";
            cin >> x;
            if(head -> id == x)
                pop(head);
            else
                remove_from_the_list(head, x);
            break;
        case 9:
            list *L;
            L = NULL;
            cout << "������� ��������" << endl;
            cin >> x;
            while(x != 0)
            {
                push(L, x);
                cin >> x;
            }
            paste(head, L);
            break;
        case 10:
            cout << "���������� ������...";
            break;
        default:
            cout << "�� ������� �������� �������, ���������� ��� ���" << endl;
            break;
        }
        cout << endl;
        system("pause");
    }
    while(variant != 10);
    return 0;
}
