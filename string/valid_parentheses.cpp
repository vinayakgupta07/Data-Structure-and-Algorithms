#Valid Parentheses

string temp = "";

    for(char c : s) {
        // Opening brackets
        if(c == '(' || c == '{' || c == '[') {
            temp += c;
        } 
        else {
            if(temp.empty()) return false;

            char last = temp.back();
            temp.pop_back();

            if((c == ')' && last != '(') ||
               (c == '}' && last != '{') ||
               (c == ']' && last != '[')) {
                return false;
            }
        }
    }

    return temp.empty();
}
