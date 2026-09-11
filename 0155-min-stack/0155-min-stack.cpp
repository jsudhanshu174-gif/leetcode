class MinStack {
    stack<long long> st;
    long long mn = INT_MAX;

public:
    MinStack() {}

    void push(int value) {
        if (st.empty()) {
            mn = value;
            st.push(value);
        } else {
            if (value > mn) {
                st.push(value);
            } else {
                st.push(2LL * value - mn);
                mn = value;
            }
        }
    }

    void pop() {
        if (st.empty())
            return;

        long long x = st.top();
        st.pop();

        if (x < mn)
            mn = 2LL * mn - x;
    }

    int top() {
        if (st.empty())
            return -1;

        long long x = st.top();

        if (x < mn)
            return mn;

        return x;
    }

    int getMin() { return mn; }
};