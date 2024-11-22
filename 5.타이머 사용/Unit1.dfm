object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 213
  ClientWidth = 398
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 72
    Top = 8
    Width = 52
    Height = 128
    Caption = '0'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -96
    Font.Name = 'Segoe UI Emoji'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Memo1: TMemo
    Left = 176
    Top = 8
    Width = 209
    Height = 153
    TabOrder = 0
  end
  object Button1: TButton
    Left = 8
    Top = 176
    Width = 75
    Height = 25
    Caption = #49884#51089
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 112
    Top = 176
    Width = 75
    Height = 25
    Caption = #51333#47308
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 208
    Top = 176
    Width = 75
    Height = 25
    Caption = #44592#47197
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 310
    Top = 176
    Width = 75
    Height = 25
    Caption = #52488#44592#54868
    TabOrder = 4
    OnClick = Button4Click
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 8
    Top = 8
  end
end
