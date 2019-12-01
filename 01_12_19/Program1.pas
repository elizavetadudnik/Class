// Даны целые положительные числа N и K. Найти сумму 1^K + 2^K + … + N^K.
// Чтобы избежать целочисленного переполнения, вычислять слагаемые этой
// суммы с помощью вещественной переменной и выводить результат как
// вещественное число. 

var
  N, K, sum, powerK: integer;
begin
  readln(N, K);
  powerK := 1;
  sum := 0;
  for var i := 1 to N do
  begin
    for var j := 1 to K do
    begin
      powerK *= i;
    end;
     sum += powerK;
    
    powerK := 1;
  end;

end.