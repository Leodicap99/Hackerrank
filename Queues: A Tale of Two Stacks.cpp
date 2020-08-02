class MyQueue {
  
    public:
        stack<int> st1, st2;   
        void push(int x) {
            st1.push(x);
        }

        void pop() {
            front();
            st2.pop();
        }

        int front() {
            if(st2.empty())
            while(st1.size())
            {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
};
