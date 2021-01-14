var input = require('fs').readFileSync('./dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

const nomeDoVendedor = lines.shift();
const salarioFixo = parseFloat(lines.shift());
const totalVendido = parseFloat(lines.shift());

const comissao = 0.15;

const totalRecebido = salarioFixo + totalVendido*comissao;

console.log("TOTAL = R$ " + totalRecebido.toFixed(2));