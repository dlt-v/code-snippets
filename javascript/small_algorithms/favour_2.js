const determine = (a, b, c) => {
    if (a + b <= c || a + c <= b || b + c <= a) return false;
    return true;
};

const a = parseInt(prompt('A:'));
const b = parseInt(prompt('B:'));
const c = parseInt(prompt('C:'));
const result = determine(a, b, c);
console.log(result);
