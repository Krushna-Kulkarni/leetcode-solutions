/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let result = [];

    for(let i = 0; i < arr.length; i = i + 1){
        const transFormedEle = fn(arr[i], i);
        result.push(transFormedEle);
    }
    return result;
};