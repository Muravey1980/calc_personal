Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Func = function (x: real): real;
  
  Form1 = class(Form)
    procedure DigitButton_Click(sender: Object; e: EventArgs);
    procedure add_char(a:string;i:integer:=1);
    procedure MathOperButton_Click(sender: Object; e: EventArgs);
    procedure button_ce_Click(sender: Object; e: EventArgs);
    procedure button_c_Click(sender: Object; e: EventArgs);
    procedure button_unarminus_Click(sender: Object; e: EventArgs);
    procedure button_bcksps_Click(sender: Object; e: EventArgs);
    procedure button_func_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    button_dig6: Button;
    button_dig1: Button;
    button_dig3: Button;
    Button_plus: Button;
    button_dig2: Button;
    button_dig5: Button;
    button_dig7: Button;
    button_dig8: Button;
    button_dig9: Button;
    button_dig4: Button;
    button_unarminus: Button;
    button_ce: Button;
    button_bcksps: Button;
    button_dot: Button;
    button_dig0: Button;
    button16: Button;
    button17: Button;
    button18: Button;
    button_c: Button;
    groupBox1: GroupBox;
    button_func_sqrt: Button;
    DisplayBox: TextBox;
    button_func_sqr: Button;
    button_func_cos: Button;
    button1: Button;
    button_func_sin: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

var
  funcs: array of Func := (sqr,sqrt,sin,cos,tan);

Procedure Form1.add_char(a:string;i:integer);
var
  rows:array of string;
begin
  rows:=DisplayBox.Lines;
  if rows[i]='0' then rows[i]:='';
  rows[i]+= a;
  DisplayBox.Text:=rows[0]+#13#10+rows[1];
end;


procedure Form1.MathOperButton_Click(sender: Object; e: EventArgs);
var
  rows:array of string;
  subresult: real;
begin
  rows:=DisplayBox.Lines;
  if rows[0]='' then rows[0]:=rows[1]+Button(sender).Text+#13#10+'0'
  else begin
    var a:string:=Copy(rows[0],1,Length(rows[0])-1);
    var b:string:=Button(sender).Text;
    if rows[1]='0' then rows[0]:=a+b
    else begin
      case Copy(rows[0],Length(rows[0]),1) of
        String('+'):
          subresult:=StrToFloat(Copy(rows[0],1,Length(rows[0])-1))+StrToFloat(Copy(rows[1],1,Length(rows[1])));
        String('-'):
          subresult:=StrToFloat(Copy(rows[0],1,Length(rows[0])-1))-StrToFloat(Copy(rows[1],1,Length(rows[1])));
        String('*'):
          subresult:=StrToFloat(Copy(rows[0],1,Length(rows[0])-1))*StrToFloat(Copy(rows[1],1,Length(rows[1])));
        String('/'):
          subresult:=StrToFloat(Copy(rows[0],1,Length(rows[0])-1))/StrToFloat(Copy(rows[1],1,Length(rows[1])));
      end;
      rows[0]:=FloatToStr(subresult)+b;
    end;
  end;
  rows[1]:='0';
  DisplayBox.Text:=rows[0]+#13#10+rows[1]; 
end;


procedure Form1.DigitButton_Click(sender: Object; e: EventArgs);
var
  a: real;
begin
  a:=StrToFloat(DisplayBox.Lines[1]);
  if (Pos('.',DisplayBox.Lines[1])=0) Or (Button(sender).Text<>'.')
    then add_char(Button(sender).Text);
end;

procedure Form1.button_ce_Click(sender: Object; e: EventArgs);
begin
  DisplayBox.Text:=DisplayBox.Lines[0]+#13#10+'0';
end;

procedure Form1.button_c_Click(sender: Object; e: EventArgs);
begin
  DisplayBox.Text:=''+#13#10+'0';
end;

procedure Form1.button_unarminus_Click(sender: Object; e: EventArgs);
begin
  DisplayBox.Text:=DisplayBox.Lines[0]+#13#10+FloatToStr(-StrToFloat(DisplayBox.Lines[1]));
end;

procedure Form1.button_bcksps_Click(sender: Object; e: EventArgs);
var
  rows:array of string;
begin
  rows:=DisplayBox.Lines;
  rows[1]:=Copy(rows[1],1,Length(rows[1])-1);
  if rows[1]='' then rows[1]:='0';
  DisplayBox.Text:=rows[0]+#13#10+rows[1];
end;

procedure Form1.button_func_Click(sender: Object; e: EventArgs);
var
  resultat:real;
  f:Func;
  rows:array of string;
begin
  rows:=DisplayBox.Lines;
  f:=funcs[StrToInt(Button(sender).Tag.ToString)];
  resultat:=f(StrToFloat(DisplayBox.Lines[1]));
  rows[1]:=FloatToStr(resultat);
  DisplayBox.Text:=''+#13#10+rows[1];
end;




end.
