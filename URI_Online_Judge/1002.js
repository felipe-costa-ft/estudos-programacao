var input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

var pi = 3.14159;
var r = lines.shift();
var area = pi * (r*r);

console.log("A="+area.toFixed(4));