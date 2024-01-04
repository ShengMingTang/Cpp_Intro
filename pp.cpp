#include <iostream>
#include <string>
using namespace std;

struct list
{
    list(int d): data(d), next{nullptr} {}
    int data;
    struct list *next; // can we just declare list *next;
};

// think about which "object" you are modifying
list *insert_sorted(list *head, int val)
{
    list **pp = &head;
    list *curr = head;
    while(curr && curr->data < val) {
        pp = &(curr->next);
        curr = curr->next;
    }
    list *el = new list(val);
    el->next = *pp;
    *pp = el;
    return head;
}

void print_list(list *head)
{
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    string vals;
    list *head;
    // what is the result of this?
    while(cin >> vals) {
        head = insert_sorted(head, stoi(vals));
        print_list(head);
    }
    return 0;
}

// repeat the pp pattern when implementing list deletion and tree insersion