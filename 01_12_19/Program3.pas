// Дано число A (> 1). Вывести наибольшее из целых чисел K, для которых сумма 1 + 1/2 + … + 1/K будет меньше A, и саму эту сумму. 

var 
  K: integer;
  sum, A: real;
  
begin
  readln(A);
  sum := 0;
  K := 0;
  
  if A > 1 then 
  begin
    while sum < A do
    begin
      K += 1;
      sum += 1 / K;
    end;
    
    writeln(K, ' ', sum);
  end
  else 
    writeln('Very bad');
end.
  