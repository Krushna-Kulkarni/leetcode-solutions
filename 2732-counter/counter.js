/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
let isCalledN = null;
    return function() {
    if(isCalledN !== null){
        return isCalledN =  isCalledN + 1;
    } else{
        isCalledN = n;
        return n;
    }
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */