// В одномерном массиве все отрицат эл-ты переместить в начало, а остальные в конец. Порядок следования сохранить

const
  size = 10;

var
  arr: array[1..size] of integer;
  negativeElementPosition, temp: integer;
  noNegative: boolean;
  
begin
  for var i := 1 to size do
  begin
    arr[i] := random(-9, 9);
  end;
  
  writeln(arr);
  
  negativeElementPosition := 0;
  temp := 0;
  noNegative := false;
  
  for var i := 1 to size do
  begin
    for var j := i to size do
    begin
      if arr[j] < 0 then
      begin
        negativeElementPosition := j;
        break;
      end;
      
      if (j = size) and (arr[j] >= 0) then
      begin
        noNegative := true;
      end;
    end;
    
    for var j := negativeElementPosition downto i + 1 do
    begin
    
      if noNegative then
      begin
        break;
      end;
    
      // меняем местами
      temp := arr[j - 1];
      arr[j - 1] := arr[j];
      arr[j] := temp;
    end;
  end;
  
  writeln(arr);

end.