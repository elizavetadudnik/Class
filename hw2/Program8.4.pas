//8) Задача на цикл while. Дано целое число N (> 0). Если оно является степенью числа 3, то вывести True, если не является — вывести False. 

var 
  N: integer;
begin;
  readln(N);
  while N > 0 do
  begin
    if N mod 3 = 0 then 
    writeln('True')
    else writeln('False');
    end;
end.