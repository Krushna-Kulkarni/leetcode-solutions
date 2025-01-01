/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let result = [];
    for(let i = 0; i< arr.length; i = i + 1){
        if(fn(arr[i], i)){
            result.push(arr[i])
        }
    }
    return result;
};