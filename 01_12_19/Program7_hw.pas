// Дано вещественное число X и целое число N (> 0). Найти значение выражения 1 - X + X^2/(2!) - … +(-1)^(N) * X^N/(N!)  (N! = 1·2·…·N). 

var
  N, sign: integer;
  X, factorial, powerOfX, expression: real;
  
begin
  readln(X, N);
  expression := 1;
  factorial := 1;
  powerOfX := 1;
  sign := 1;
  
  for var i := 1 to N do
  begin
    factorial *= i;
    powerOfX *= X;
    sign *= -1;
    expression += sign * powerOfX / factorial;
  end;
  
  writeln(expression)  
end.