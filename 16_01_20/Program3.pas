﻿// Дан целочисленный массив из 6 элементов. Элементы массива могут принимать целые значения от –10 000 до 10 000 включительно. 
// Опишите на одном из языков программирования алгоритм, позволяющий найти и вывести количество пар элементов массива, в которых 
// сумма элементов делится на 3, но не делится на 9. В данной задаче под парой подразумеваются два соседних элемента массива.

var
  arr: array[1..6] of integer;
  sum, count: integer;
  
begin
  for var i := 1 to 6 do
  begin
    readln(arr[i]);
  end;
  
  sum := 0;
  count := 0;
  
  for var i := 1 to 5 do
  begin
    sum := arr[i] + arr[i + 1];
    
    if (sum mod 3 = 0) and (sum mod 9 <> 0) then 
      count += 1;
  end;
  writeln(count);
end.