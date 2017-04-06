program Player;

uses
  Forms,
  ChessPrg in 'ChessPrg.pas' {Form1},
  ChessBrd in '..\chessbrd.pas';

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
