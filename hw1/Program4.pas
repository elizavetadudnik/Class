//Пользователь вводит с клавиатуры три целых числа. Найти сумму двух наибольших из них.

var
  number1, number2, number3, sum: integer;
  
begin
  writeln('Введите 3 целых числа');
  readln(number1, number2, number3);
  
  if number1 > number2 then 
  if number3 > number2 then
  sum := number1 + number3;
  writeln('Сумма = ', sum); 
  
    if number1 > number3 then
    if number2 > number3 then
    sum := number1 + number2;
    writeln('Сумма =  ', sum);
    
      if number2 > number1 then
      if number3 > number1 then 
      sum := number2 + number3;
      writeln('Сумма =  ', sum);
end.