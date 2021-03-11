#ifndef TASK4_H_INCLUDED
#define TASK4_H_INCLUDED

struct list
{
    int id;
    list *next;
};

void push(list*& head, int x);

void pop(list*& head);

void past_after(list *head, int x, int pos);

void past_before(list *head, int x, int pos);

void print(list *head);

void push_at_the_end(list*& head, int x);

void delete_the_end(list *head);

void remove_from_the_list(list *head, int x);

void paste(list*& head, list *L);

#endif // TASK4_H_INCLUDED
