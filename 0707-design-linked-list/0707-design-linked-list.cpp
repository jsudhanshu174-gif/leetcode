class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        int cnt = 0;
        Node* temp = head;

        while (temp != nullptr) {
            if (cnt == index)
                return temp->data;

            cnt++;
            temp = temp->next;
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* newhead = new Node(val);
        newhead->next = head;
        head = newhead;
    }

    void addAtTail(int val) {
        Node* newtail = new Node(val);

        if (head == nullptr) {
            head = newtail;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newtail;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr) {
            if (cnt == index - 1) {
                Node* node = new Node(val);
                node->next = temp->next;
                temp->next = node;
                return;
            }

            cnt++;
            temp = temp->next;
        }
    }

    void deleteAtIndex(int index) {
        if (head == nullptr)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp != nullptr) {
            if (cnt == index - 1) {
                Node* del = temp->next;

                if (del == nullptr)
                    return;

                temp->next = del->next;
                delete del;
                return;
            }

            cnt++;
            temp = temp->next;
        }
    }
};