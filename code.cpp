class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int>A;
        for(auto t:s)
        {
            if(isdigit(t[0]))
               {
                   A.push(stoi(t));
               }
            else if(t.size()>1)
            {
                A.push(stoi(t));
            }
               else
               {
                   if(t=="+")
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c+d);
                    }
                    else if(t=="-")
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c-d);
                    }
                    else if(t=="/")
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c/d);
                    }
                    else if(t=="*")
                    {
                        int d=A.top();
                        A.pop();
                        int c=A.top();
                        A.pop();
                        A.push(c*d);
                    } 
               }
        }
        
        return A.top();
    }
};
