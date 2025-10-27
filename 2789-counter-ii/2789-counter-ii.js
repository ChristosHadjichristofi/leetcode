/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let cnt = init;
    let resetN = init;

    const increment = () => ++cnt;
    const decrement = () => --cnt;
    const reset = () => {
        cnt = resetN;
        return cnt;
    }

    return { increment, decrement, reset };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */