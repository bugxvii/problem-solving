/**
 * Runtime: 80 ms, faster than 48.26% 
 * Memory Usage: 38.4 MB, less than 78.41%
 */
var subtractProductAndSum = function(n) {
  let p = 1;
  let s = 0;

  while (n>0) {
    let t = n%10;
    n = Math.floor(n / 10);

    p *= t;
    s += t;
  }

  return p - s;
};
