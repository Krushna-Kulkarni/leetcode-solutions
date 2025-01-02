/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let finalValue = init !== null && init !== undefined ? init : nums[0];
    for(let i = 0; i < nums.length; i = i + 1){
       finalValue = fn(finalValue, nums[i], i);
    }
    return finalValue;
};