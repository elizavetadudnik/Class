// Даны десять вещественных чисел. Найти их сумму.

var
  number, sum: real;
  
begin
  sum := 0;
  
  for var i := 1 to 10 do
  begin
    readln(number);
    sum += number;
  end;
  
  writeln(number);

end.