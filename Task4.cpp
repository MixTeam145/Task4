#include <iostream>
#include "Task4.h"
using namespace std;

void push(list*& head, int x)
{
    list *tmp = new (list);
    tmp -> id = x;
    tmp -> next = head;
    head = tmp;
}

void pop(list*& head)
{
    list *tmp = new (list);
    tmp = head;
    head = head -> next;
    delete (tmp);
}

void past_after(list *head, int x, int pos)
{
    while(head -> id != pos && head -> next != NULL)
    {
        head = head -> next;
    }
    if(head -> id == pos)
    {
        list *tmp = new (list);
        tmp -> id = x;
        tmp -> next = head -> next;
        head -> next = tmp;
    }
}

void past_before(list *head, int x, int pos)
{
    list *previous = new (list);
    while(head -> id != pos && head -> next != NULL)
    {
        previous = head;
        head = head -> next;
    }
    if(head -> id == pos)
    {
        list *tmp = new (list);
        tmp -> id = x;
        tmp -> next = head;
        previous -> next = tmp;
    }
}

void print(list *head)
{
    while (head != NULL)
    {
        cout << head -> id << ' ';
        head = head -> next;
    }
}

void push_at_the_end(list*& head, int x)
{
    if(head == NULL)
    {
        push(head, x);
        return;
    }
    list *start = head;
    while(head -> next != NULL)
        head = head -> next;
    list *tmp = new (list);
    tmp -> id = x;
    tmp -> next = NULL;
    head -> next = tmp;
    head = start;
}

void delete_the_end(list *head)
{
    list *tmp;
    while(head -> next -> next != NULL)
    {
        head = head -> next;
    }
    tmp = NULL;
    head -> next = tmp;
}

void remove_from_the_list(list *head, int x)
{
    list *prev = new(list);
    while(head != NULL && head -> id != x)
    {
        prev = head;
        head = head -> next;
    }
    if(head != NULL && head -> id == x)
    {
        list *tmp = new(list);
        tmp = head;
        prev -> next = head -> next;
        delete(tmp);
    }
}

void paste(list*& head, list *L)
{
    int maximum = L -> id;
    L = L -> next;
    while(L != NULL)
    {
        if((maximum < L -> id || maximum % 2 != 0) && (L -> id) % 2 == 0)
            maximum = L -> id;
        L = L -> next;
    }
    if(maximum % 2 == 0)
        push_at_the_end(head, maximum);
}
