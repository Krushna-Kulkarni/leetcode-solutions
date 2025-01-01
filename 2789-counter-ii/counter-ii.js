/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let initialValue, currentValue;
    initialValue = initialValue === undefined ? init : initialValue;
    currentValue = currentValue === undefined ? init : currentValue;
    return {
        increment:()=>{
            currentValue = currentValue + 1;
            return currentValue;
        },
        decrement:()=>{
            currentValue = currentValue - 1;
            return currentValue;
        },
        reset:()=>{
            currentValue = initialValue;
            return initialValue;
        },
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */