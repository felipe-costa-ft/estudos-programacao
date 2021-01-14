var input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

const numeroFuncionario = parseInt(lines.shift());
const horasTrabalhadas = parseInt(lines.shift());
const valorPorHora = parseFloat(lines.shift());

console.log("NUMBER = " + numeroFuncionario);
console.log("SALARY = U$ " + (horasTrabalhadas*valorPorHora).toFixed(2))