//8) Задача на цикл while. Дано целое число N (> 0). Если оно является степенью числа 3, то вывести True, если не является — вывести False. 

var 
  N: integer;
  numberIsPowerOf3: boolean;
  
begin;
  readln(N);
  
  if N > 0 then
  begin
    numberIsPowerOf3 := false;
    
    while N <> 1 do
    begin
      if N mod 3 = 0 then
      begin
        numberIsPowerOf3 := true;
        N := N div 3
      end
      else
      begin
        numberIsPowerOf3 := false;
        break;
      end;
    end; 
    
    writeln(numberIsPowerOf3);
  end
  else
    writeln('Wrong data');
end.