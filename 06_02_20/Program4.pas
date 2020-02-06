const
  size = 6;
  
var
  arr: array[1..size] of integer;
  onlyZeros, positiveEarlier, negativeEarlier: boolean;
  
begin
  for var i := 1 to size do
    readln(arr[i]);
    
  writeln(arr);
  
  positiveEarlier := false;
  negativeEarlier := false;
  
  for var i := 1 to size do
  begin
    if arr[i] > 0 then
    begin
      positiveEarlier := true;
      break;
    end
    else if arr[i] < 0 then
    begin
      negativeEarlier := true;
      break;
    end;
  end;
  
  onlyZeros := (positiveEarlier = false) and (negativeEarlier = false);
  
  if onlyZeros then
    writeln('только нули')
  else if positiveEarlier then
    writeln('положительное раньше')
  else
    writeln('отрицательное раньше')
end.