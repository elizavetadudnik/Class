// Дано целое число N (> 0). Используя операции деления нацело и взятия остатка от деления, найти количество и сумму его цифр. 

var
  N, number, countOfDigits, sumOfDigits: integer;

begin
  readln(N);
  countOfDigits := 0;
  sumOfDigits := 0;
  
  if N > 0 then
  begin
    number := N;
    
    while number > 0 do
    begin
      sumOfDigits += number mod 10;
      number := number div 10;
      countOfDigits += 1;
    end;
    writeln(countOfDigits,' ', sumOfDigits);
  end;
end.