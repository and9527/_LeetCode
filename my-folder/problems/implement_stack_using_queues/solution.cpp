class MyStack {
public:
     queue<int> myQueue;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        myQueue.push(x);
        int size = myQueue.size();
        for(int i = 0 ; i < size -1;++i)
        {
            myQueue.push(pop());
        }        
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = top();
        myQueue.pop();
        return temp;        
    }
    
    /** Get the top element. */
    int top() {
      return myQueue.front();  
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
      return myQueue.empty();  
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */