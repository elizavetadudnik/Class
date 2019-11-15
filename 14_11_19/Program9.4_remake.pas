// 9) Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел от A до B включительно. 

var 
  A, B, sum: real;
begin
  readln(A, B);
  sum := 0;
  
  for var i := A to B do
  begin
   sum += i * i;
  end;
  
  writeln(sum);
end.