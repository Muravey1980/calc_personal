Program console_calc;

uses math_personal;
var
  a,b,res:real;
  action:string;
begin
  Writeln('������� �����:');
  Readln(a);
  Writeln('������� ��������:');
  Readln(action);
  if (action='sqr') or (action='sqrt') or (action='sin') or (action='cos') or (action='tan') then
    Writeln(FuncCalc(a,action))
  else
    if (action='+') or (action='-') or (action='*') or (action='/') then
      begin
        Writeln('������� �����:');
        Readln(b);
        Writeln(a+' '+action+' '+b+' = ' MathCalc(a,b,action));
      end
    else Writeln('������� �������� ��������.')
    
  
  
end.