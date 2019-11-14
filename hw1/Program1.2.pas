// 1) Пользователь вводит с клавиатуры три целых числа. Найти сумму двух наибольших из них.

var 
  number1, number2, number3, max1, max2, indexOfMax, sumOfMax: integer;
begin
  readln(number1, number2, number3);
  
    if number1 > number2 then
  begin
    max1 := number1;
    indexOfMax := 1;
  end
    else 
  begin
    max2 := number2;
    indexOfMax := 2;
  end;
    
    if indexOfMax = 1 then
      max2 := number1 + number3
    else 
      max2 := number2 + number3;
  sumOfMax := max1 + max2;    
  writeln(sumOfMax);
end.
  
    