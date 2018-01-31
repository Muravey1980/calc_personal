Program console_calc;

uses math_personal;
var
  a,b,res:real;
  action:string;
begin
  Writeln('¬ведите число:');
  Readln(a);
  Writeln('¬ведите действие:');
  Readln(action);
  if (action='sqr') or (action='sqrt') or (action='sin') or (action='cos') or (action='tan') then
    Writeln(FuncCalc(a,action))
  else
    if (action='+') or (action='-') or (action='*') or (action='/') then
      begin
        Writeln('¬ведите число:');
        Readln(b);
        Writeln(a+' '+action+' '+b+' = ' MathCalc(a,b,action));
      end
    else Writeln('¬ведено неверное действие.')
    
  
  
end.