/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
// var twoSum = function(nums, target) {
// let map = new Map();
// for(let i = 0; i < nums.length; i++){
// let value = target - nums[i]
// if(map.has(value)){
// let secondValue = map.get(value);
// return [i, secondValue]
// }else{
// map.set(nums[i], i)
// }
// }
// };

var twoSum = function(nums, target) {
    let map = new Map();
    let l = nums.length;
    for(let i = 0; i < l; i ++) {
        if(map.has(target - nums[i])) {
            return [map.get(target - nums[i]), i];
        } else {
            map.set(nums[i], i);
        }
    }
 return [];
};