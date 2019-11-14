// Даны три числа. Найти среднее из них (то есть число, расположенное между наименьшим и наибольшим).

var 
  number1, number2, number3, max, min, sum, average: integer;
begin
  readln(number1, number2, number3);
  sum := number1 + number2 + number3;
  
  if number1 > number2 then // найдем максимальное среди чисел
  max := number1
  else max := number2;
  
  if number3 > max then
  max := number3;
  
  if number1 < number2 then // найдем минимальное среди чисел 
  min := number1
  else min := number2;
  
  if number3 < min then
  min := number3;
  average := sum - max - min;
  writeln(average);
end.
  
  
