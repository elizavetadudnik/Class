//Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число. 

var 
  number, number2, a, b, c: integer;
begin 
 writeln('Введите целое число');
 readln(number);
 a := number mod 10; // а - количество единиц 
 b := number div 10 mod 10;// b - количество десятков
 c := number div 100; //с - количество сотен
 number2 := b*100 + a*10 + c;
 writeln(number2); 
 end.