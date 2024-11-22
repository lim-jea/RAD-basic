object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 82
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 480
    Top = 35
    Width = 36
    Height = 15
    Caption = '. . . . . . '
  end
  object Edit1: TEdit
    Left = 8
    Top = 32
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 184
    Top = 32
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 353
    Top = 32
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 520
    Top = 32
    Width = 60
    Height = 23
    TabOrder = 3
  end
  object Button1: TButton
    Left = 135
    Top = 32
    Width = 43
    Height = 23
    Caption = '+'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 311
    Top = 32
    Width = 36
    Height = 23
    Caption = '='
    TabOrder = 5
    OnClick = Button2Click
  end
end
