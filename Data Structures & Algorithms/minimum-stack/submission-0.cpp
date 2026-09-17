class MinStack {
    std::stack<long> _stack;
    long _min;

   public:
    MinStack() {}

    void push(int val) {
        if (_stack.empty()) {
            _stack.push(0);
            _min = val;
        } else {
            _stack.push(val - _min);
            if (val < _min) _min = val;
        }
    }

    void pop() {
        if (_stack.empty()) return;

        long pop = _stack.top();
        _stack.pop();

        if (pop < 0) _min = _min - pop;
    }

    int top() {
        long top = _stack.top();
        return (top > 0) ? (top + _min) : (int)_min;
        }

    int getMin() {return (int)_min;}
};
