queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
     
    stack<int> s;
    int n = q.size();
    int r = n-k;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(r--)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}
