//Write a function that reverses a string. The input string is given as an array of characters s.
//You must do this by modifying the input array in-place with O(1) extra memory.


// first method

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int l = s.size();
        vector<char> p = s;
        for(int i=0;i<l;i++)
        {
            s[i] = p[(l-i)-1];
        }
        
    }
};


// second method(faster than first)
class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]); 
        }
        
        return s;
    }
};
