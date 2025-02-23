class MinStack {
    public Stack<Integer> stack;

    public MinStack() {
        stack = new Stack<>();
    }
    
    public void push(int val) {
        stack.push(val);
    }
    
    public void pop() {
        stack.pop();
    }
    
    public int top() {
        int b = stack.pop();
        stack.push(b);
        return b;
    }
    
    public int getMin() {
        int a = stack.get(0);
        for(int i = 1 ; i < stack.size(); i ++) {
            if(a> stack.get(i)) {
                a=stack.get(i);
            }
        }
        return a;

    }
}


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */