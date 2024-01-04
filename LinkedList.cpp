#include <iostream>
using namespace std;

struct node {
    int val;
    struct node* ptr;
};

void display(struct node* h) {
    while (h != NULL) {
        cout << h->val << "->";
        h = h->ptr;
    }
    cout << "NULL" << endl;
}

int main() {
    struct node n1, n2, n3, n4;
    struct node* head, * temp;

    n1.val = 10;
    n1.ptr = NULL;
    n2.val = 20;
    n2.ptr = NULL;
    n3.val = 30;
    n3.ptr = NULL;
    n4.val = 40;
    n4.ptr = NULL;

    n1.ptr = &n2;
    n2.ptr = &n4;
    n4.ptr = &n3;
    n3.ptr = NULL;

    // accessing all values/traversing all values;

    temp = &n1;
    head = temp;
    display(temp);

    return 0;
}
