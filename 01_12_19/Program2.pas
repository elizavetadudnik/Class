// Дано целое число N (> 0). Найти сумму 1^N + 2^{N–1} + … + N^1. Чтобы избежать целочисленного переполнения, вычислять слагаемые этой суммы с
// помощью вещественной переменной и выводить результат как вещественное число. 

var
  N, sum, powerOfNumber: integer;
  
begin
  readln(N);
  sum := 0;
  powerOfNumber := 1;
  
  for var i := 1 to N do
  begin
    for var j := N - i + 1 downto 1 do
    begin
      powerOfNumber *= i;
    end;
    
    sum += powerOfNumber;
    powerOfNumber := 1;
  end;
  
  writeln(sum)  
end.