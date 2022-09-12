class Solution {
public:
    bool isValid(string s) {
        stack<int> c;
        
        if(s[0]==')' || s[0]==']' || s[0]=='}')
             return false;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='['  || s[i]=='{') c.push(s[i]);
            
            else if(s[i]==')'){
                if(c.size()==0 || c.top()!='(') return false;
                else if(c.top()=='('){
                    c.pop();
                    continue;
                }
            }
            else if(s[i]==']'){
                if(c.size()==0 || c.top()!='[') return false;
                else if(c.top()=='['){
                    c.pop();
                    continue;
                }
            }
            else if(s[i]=='}'){
                if(c.size()==0 || c.top()!='{') return false;
                else if(c.top()=='{'){
                    c.pop();
                    continue;
                }
            }
        }
        if(c.size()==0)  return true;
        else return false;        
    }
};
