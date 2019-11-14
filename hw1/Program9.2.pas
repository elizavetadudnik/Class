//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д. 

var 
  number: real;
begin
  readln(number);
  
  if (number mod 2 = 0) and (number < 0) then 
  writeln('отрицательное четное число');
  
  if (number mod 2 = 0) and (number > 0) then
  writeln('положительное четное');
  
  if (number mod 2 <> 0) and (number < 0) then
  writeln('отрицательное нечетное число');
  
  if (number mod 2 <> 0) and (number > 0) then
  writeln('положительное нечетное число')
  
  else writeln('нулевое число');
end.
  
