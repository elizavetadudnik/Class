// 9) Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых чисел от A до B включительно. 

var 
  A, B, sum: real;
begin
  readln(A, B);
  sum := 1;
  while A < B do 
  begin
    for A to B do
    A := A * A;
    B := B * B;
    sum += A + B;
  end;
writeln(sum);
end.