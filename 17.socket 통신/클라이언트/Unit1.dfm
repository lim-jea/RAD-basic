object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #53364#46972#51060#50616#53944
  ClientHeight = 532
  ClientWidth = 380
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 160
    Top = 24
    Width = 52
    Height = 21
    Caption = #45769#45348#51076':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 242
    Top = 26
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object GroupBox1: TGroupBox
    Left = 16
    Top = 55
    Width = 353
    Height = 338
    Caption = #45824#54868#52285
    Color = clHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 1
    object Memo1: TMemo
      Left = 16
      Top = 32
      Width = 313
      Height = 281
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
    end
  end
  object Edit2: TEdit
    Left = 32
    Top = 416
    Width = 217
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    TextHint = #48372#45244' '#45236#50857
  end
  object Button1: TButton
    Left = 270
    Top = 416
    Width = 75
    Height = 33
    Caption = #48372#45236#44592
    TabOrder = 3
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 32
    Top = 455
    Width = 121
    Height = 23
    TabOrder = 4
    TextHint = #49436#48260' IP'
  end
  object Edit4: TEdit
    Left = 32
    Top = 484
    Width = 121
    Height = 23
    TabOrder = 5
    TextHint = 'Port'
  end
  object Button2: TButton
    Left = 159
    Top = 455
    Width = 105
    Height = 52
    Caption = #49436#48260' '#51217#49549
    TabOrder = 6
    OnClick = Button2Click
  end
  object ClientSocket1: TClientSocket
    Active = False
    ClientType = ctNonBlocking
    Host = '192.168.0.4'
    Port = 1234
    OnConnect = ClientSocket1Connect
    OnRead = ClientSocket1Read
    Left = 80
    Top = 16
  end
end
