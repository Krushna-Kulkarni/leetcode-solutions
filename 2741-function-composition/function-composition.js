/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(functions) {
    
    return function(x) {
        let finalValue = x;
        for(let i = functions.length - 1; i >= 0; i = i - 1){
            finalValue = functions[i](finalValue);
        }
        return finalValue;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */