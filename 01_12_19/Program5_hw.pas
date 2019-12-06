// Дано целое число N (> 0). Найти квадрат данного числа, используя для
// его вычисления следующую формулу: N^2 = 1 + 3 + 5 + … + (2·N – 1). После добавления к сумме каждого слагаемого выводить текущее значение

var
  N, NSquared: integer;
  
begin
  readln(N);
  NSquared := 0;
  
  for var i := 1 to 2 * N - 1 do
  begin
    if i mod 2 <> 0 then 
    begin
     NSquared += i;
     writeln(NSquared);
    end;
  end;
end.