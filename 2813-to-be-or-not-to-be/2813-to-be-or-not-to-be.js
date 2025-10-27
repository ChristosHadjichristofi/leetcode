/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    toBe = function(check1) {
        if (val === check1) return true;
        
        throw "Not Equal";
    }

    notToBe = function(check2) {
        if (val !== check2) return true;
        
        throw "Equal";
    }

    return { toBe, notToBe }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */