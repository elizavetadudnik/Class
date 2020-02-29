// Дана матрица m*n. Найти столбец с наиб и наим суммой эл-тов.

const 
  rowLength = 3;
  columnLength = 5;
  
var 
  arr: array[1..rowLength, 1..columnLength] of integer;
  minColumnSum, maxColumnSum, currentColumnSum, indexMin, indexMax: integer;
  
begin
  minColumnSum := integer.MaxValue;
  maxColumnSum := integer.MinValue;
  currentColumnSum := 0;

  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      arr[i, j] := random(1, 10);
    end;
  end;
    
  for var i := 1 to rowLength do
  begin
    for var j := 1 to columnLength do
    begin
      write(arr[i, j], '  ');
    end;
    writeln();
  end;
  
  for var i := 1 to columnLength do
  begin
    for var j := 1 to rowLength do
    begin
      currentColumnSum += arr[j, i];
    end;
    
    if currentColumnSum < minColumnSum then
    begin
      minColumnSum := currentColumnSum;
      indexMin := i;
    end;
    
    if  currentColumnSum > maxColumnSum then
    begin
      maxColumnSum := currentColumnSum;    
      indexMax := i;
    end;
    
    currentColumnSum := 0;
  end;
  
  writeln(minColumnSum, ' ', indexMin, ' ', maxColumnSum, ' ', indexMax);
end.