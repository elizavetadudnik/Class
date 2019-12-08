// Переставить местами первую и последнюю цифры натурального числа.

var
  number, currentNumber, firstDigit, lastDigit, numberOfDigits, power10, expression: integer;
  
begin
  readln(number);
  
  if number >= 10 then
  begin
    lastDigit := number mod 10;
    currentNumber := number;
    numberOfDigits := 0;
    
    while currentNumber > 0 do
    begin
      currentNumber := currentNumber div 10;
      numberOfDigits += 1;
    end;
    
    power10 := 1;
    
    for var i := 1 to numberOfDigits - 1 do
    begin
      power10 *= 10;    
    end;  
    
    firstDigit := number div power10;
    expression := number - lastDigit + firstDigit;
    expression -= power10;
    expression += lastDigit * power10;
    
    writeln(expression);
  end;
end.