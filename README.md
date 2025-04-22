# Método de Henrique

**O Método de Henrique é uma forma simplificada do Algoritmo de Horner.**
Imagine em um número que, a cada caractere de um número binário, é multiplicado por dois, e, caso o caractere seja 1, o resultado da multiplicação é somado a 1. Denominado como **Método de Henrique**, esse é um **método de conversão Binário - decimal extremamente simples e válido para todos os casos.**

## Representação mais simples:

$$
X = Número atual

0 — X * 2
1 — X * 2 + 1
$$

## Exemplo com 1011011:

**1** — $0 × 2 + 1 = 1$  
**0** — $1 × 2 = 2$  
**1** — $2 × 2 + 1 = 5$  
**1** — $5 × 2 + 1 = 11$  
**0** — $11 × 2 = 22$  
**1** — $22 × 2 + 1 = 45$  
**1** — $45 × 2 + 1 = 91$  

Logo, **1011011 equivale a 186**.
