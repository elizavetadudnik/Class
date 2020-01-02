// Даны целые числа K, N и набор из N целых чисел. Если в наборе
// имеются числа, меньшие K, то вывести True; в противном случае вывести False.

program WEGH;
var 
  k, n, number: integer;
  setHasNumberLowerThanK: boolean;
    
begin
  readln(n,k);
  
  setHasNumberLowerThanK := false;
 
  for var i := 1 to n do
  begin
    readln(number);
    if number < k then
      setHasNumberLowerThanK := true;      
  end;
  
  writeln(setHasNumberLowerThanK);

end. 