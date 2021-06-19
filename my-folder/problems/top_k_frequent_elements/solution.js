/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
// var topKFrequent = function(nums, k) {
    
// };

var topKFrequent = function(nums, k) {
    const count = new Map()
    const bucket = Array.from({ length: nums.length + 1 }, _ => [])
    console.log('bucket',bucket)
    for (const n of nums) {
        count.set(n, (count.get(n) || 0) + 1)
    }
    console.log('count',count.entries())
    for (const entry of count.entries()) {
        console.log('entry',entry)
        const [n, freq] = entry
        bucket[freq].push(n)
    }
    console.log('bucket',bucket)
    console.log(bucket.flat())
    return bucket.flat().slice(-k)
};