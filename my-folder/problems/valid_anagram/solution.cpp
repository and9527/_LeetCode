using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {        
// for (const auto& element : mapChars) {    
//     cout << "Key: " << element.first << " ,Value: " << element.second << "\n";
// }  
        bool hasKey=false;
        if(s.length()!=t.length()){
           return 0; 
        }else{
    map<char, int> mapCharsS,mapCharsT; 
        for (char x:s){
            mapCharsS[x]++;
        }    
        for (char x:t){
            mapCharsT[x]++;
        }    
        for (auto [k, v]: mapCharsS) {
            if(mapCharsT[k]!=v){
               return 0;
            }else{
                hasKey= true;
            }
        }          
        }
        return hasKey;
}
};