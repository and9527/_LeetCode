class Solution {
public:
    string defangIPaddr(string address) {
        if(address.size() == 1){
            if(address[0] == '.'){
                return "[.]";
            }
            return address;
        }
        int half = address.size() / 2;
        string left = address.substr(0,half);
        string right = address.substr(half);
        return defangIPaddr(left) + defangIPaddr(right);
    }
};