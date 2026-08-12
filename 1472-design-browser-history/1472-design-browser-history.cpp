class Node {
public:
    string val;
    Node* next;
    Node * back;
    
    Node(string _val) {
        val = _val;
        next = NULL;
        back = NULL;
    }
};

class BrowserHistory {
public:

    Node * curr = NULL;
    BrowserHistory(string homepage) {
        Node * home = new Node(homepage);
        curr = home;
    }
    
    void visit(string url) {
        Node * newNode = new Node(url);
        curr->next = newNode;
        newNode ->back = curr;
        curr = newNode;
    }
    
    string back(int steps) {
        while(steps)
        {
            if(curr->back)
            {
                curr = curr->back;
            }
            else
            {
                break;
            }
            steps--;
        }

        return curr->val;
    }
    
    string forward(int steps) {
        while(steps)
        {
            if(curr->next)
            {
                curr = curr->next;
            }
            else
            {
                break;
            }
            steps--;
        }

        return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */