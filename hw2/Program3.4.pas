﻿// 6) Задача на цикл while.  Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
// Не используя операции умножения и деления, найти длину незанятой части отрезка A. 

var 
  A, B, С: integer;
  writeln(' Ввесли два положительных числа: ');
  readln(A, B);
  while A > B do
   C := A - B; // C - длина незанятой части отрезка
   writeln(C);
end.
    