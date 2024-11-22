object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 236
  ClientWidth = 387
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 361
    Height = 161
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 8
    Top = 175
    Width = 90
    Height = 23
    TabOrder = 1
    TextHint = #52628#44032#54624' '#45236#50857
  end
  object Button1: TButton
    Left = 8
    Top = 204
    Width = 75
    Height = 25
    Caption = #52628#44032#54616#44592
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 104
    Top = 204
    Width = 75
    Height = 25
    Caption = #48373#49324#54616#44592
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 200
    Top = 204
    Width = 75
    Height = 25
    Caption = #49325#51228#54616#44592
    TabOrder = 4
    OnClick = Button3Click
  end
end
