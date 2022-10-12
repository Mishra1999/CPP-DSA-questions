
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        unordered_map<char,int> arr={{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D',500},{'M',1000}};
        for(int i=0;i<s.size();i++){
            if(i==0||arr[s[i]]<=arr[s[i-1]]){
                num+=arr[s[i]];
            }
            else{
                num+= arr[s[i]]-2*arr[s[i-1]];
            }
        }
        return num;
    }
};
