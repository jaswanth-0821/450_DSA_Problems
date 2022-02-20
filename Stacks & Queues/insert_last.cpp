stack<int> insert(int x,stack<int> s)
{
    if(s.empty())
    {
        s.push(x);
    }
    else
    {
        int j = s.top();
        s.pop();
        insert(x ,s);
        s.push(j);
        
    }
    return s;
}
