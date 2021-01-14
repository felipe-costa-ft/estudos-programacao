var input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

const A = parseFloat(lines.shift());
const B = parseFloat(lines.shift());
const C = parseFloat(lines.shift());

const media = (A*2 + B*3 + C*5)/10;

console.log("MEDIA = " + media.toFixed(1));