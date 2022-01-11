class Solution:
    def canFinish(self, num: int, pres: List[List[int]]) -> bool:
        checked = set()
        reqMap = {}
        
        for pre in pres :
            take = pre[0]
            req = pre[1]
            
            reqList = reqMap.get(take, [])
            reqList.append(req)
            reqMap[take] = reqList
        
        print(reqMap)
        
        checking = set()
        for n in range(num):
            checking.clear()
            if(not self.valid(num, reqMap, n, checked, checking)):
                return False
        return True
    
    def valid(self, num: int, reqMap: dict, target: int, checked: set, checking: set) -> bool:
        if target in checked or target not in reqMap:
            checked.add(target)
            return True
        if target in checking:
            return False
        checking.add(target)
        reqs = reqMap[target]
        for req in reqs:
            if not self.valid(num, reqMap, req, checked, checking) :
                return False
        checked.add(target)
        return True
        