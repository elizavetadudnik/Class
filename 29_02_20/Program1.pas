// дан массив из 6 элементов. заполнен числами от 2 до 5 - оценки учеников. Определить процентное содержание 2-5

const 
  size = 6;
  
var
  arr: array[1..size] of integer;
  count2, count3, count4, count5: integer;
  
begin
  count2 := 0;
  count3 := 0;
  count4 := 0;
  count5 := 0;
  
  for var i := 1 to size do
    readln(arr[i]);
  
  for var i := 1 to size do
  begin
    if arr[i] = 2 then
      count2 += 1;
      
    if arr[i] = 3 then
      count3 += 1;
      
    if arr[i] = 4 then
      count4 +=1;
      
    if arr[i] = 5 then
      count5 +=1;
  end;
  
  writeln(count2 / size * 100, ' ', count3 / size * 100, ' ', count4 / size * 100, ' ', count5 / size * 100);
end.