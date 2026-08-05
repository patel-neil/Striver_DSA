struct Node {
public:
    int key, val;
    Node* next;
    Node(int k, int v, Node* n) {
        key = k;
        val = v;
        next = n;
    }
};

class MyHashMap {
public:

    const static int size = 100003;
    const static int multi = 12345677;

    Node* data[size] = {};

    MyHashMap() {
    }

    int hash(int key) { return (int)((long)key % size); }

    void put(int key, int value) {
        remove(key);
        int h = hash(key);

        Node* n = new Node(key, value, data[h]);
        data[h] = n;
    }

    int get(int key) {
        int h = hash(key);
        Node* n = data[h];

        while (n != NULL) {
            if (n->key == key) {
                return n->val;
            }
            n = n->next;
        }

        return -1;
    }

    void remove(int key) {
        int h = hash(key);
        Node* n = data[h];

        if(n == NULL)
        {
            return;
        }

        if (n->key == key) {
            data[h] = n->next;
            delete n;
        } else {
            while (n->next != NULL) {
                if (n->next->key == key) {
                    Node* temp = n->next;
                    n->next = temp->next;
                    delete temp;
                }
                n = n->next;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */