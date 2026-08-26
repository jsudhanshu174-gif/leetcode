class BrowserHistory {
        struct ListNode {
        string val;
        ListNode* next;
        ListNode* back;

        ListNode(string url) {
            val = url;
            next = nullptr;
            back = nullptr;
        }
    };

    ListNode* crp;
   
public:
    BrowserHistory(string homepage) {
      crp= new ListNode(homepage);
    }
    
    void visit(string url) {
        ListNode*newnode=new ListNode(url);
        crp->next=newnode;
        newnode->back=crp;
        crp=newnode;
        
    }
    
    string back(int step) {
        while(step!=0){
            if(crp->back==nullptr)break;
            crp=crp->back;
            step--;
        }
        return crp->val;
    }
    
    string forward(int step) {

        while(step!=0){
            if(crp->next==nullptr)break;;
            crp=crp->next;
            step--;
        }
        return crp->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */