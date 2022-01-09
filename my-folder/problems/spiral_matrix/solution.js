/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    if(!matrix||!matrix[0]) return []
    
    let d=0,acc = [[0,1],[1,0],[0,-1],[-1,0]]
    x=0,y=-1,res=[],
        len= [matrix[0].length,matrix.length-1]
    
    while(len[d%2]){
        for(let i=0; i < len[d%2]; i++){
            x += acc[d][0]
            y += acc[d][1]
            res.push(matrix[x][y])
        }
        len[d%2]--
        console.log('d%2',d%2)
        console.log('len[d%2]',len[d%2])
        d = (d+1)%4
    }
    return res
};