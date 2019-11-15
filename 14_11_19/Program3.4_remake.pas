﻿// 6) Задача на цикл while.  Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений).
// Не используя операции умножения и деления, найти длину незанятой части отрезка A. 

var
  A, B, C: integer;
  
begin
  writeln(' Ввесли два положительных числа: ');
  readln(A, B);
  
  C := A;
  
  while C > B do
    C := C - B; // C - длина незанятой части отрезка
   
  writeln(A);
end.
    