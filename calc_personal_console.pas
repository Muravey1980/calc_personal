Program console_calc;

uses math_personal;
var
  a,b:real;
  action,inp:string;
begin
  repeat
    Writeln('¬ведите число:');
    Readln(inp);
  until TryStrToFloat(inp,a); 
  repeat  
    Writeln('¬ведите действие:');
    Readln(action);
  until (action='sqr') or (action='sqrt') or (action='sin') or (action='cos') or (action='tan')
    or (action='+') or (action='-') or (action='*') or (action='/');
  if (action='sqr') or (action='sqrt') or (action='sin') or (action='cos') or (action='tan') then
    Writeln(action+'('+a+') = '+FuncCalc(a,action))
  else
    if (action='+') or (action='-') or (action='*') or (action='/') then
      begin
        repeat
          Writeln('¬ведите число:');
          Readln(inp);
        until TryStrToFloat(inp,b); 
        Writeln(a+' '+action+' '+b+' = '+MathCalc(a,b,action));
      end
    else Writeln('¬ведено неверное действие.')
end.