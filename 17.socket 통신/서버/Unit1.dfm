object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #49436#48260
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object Label1: TLabel
    Left = 344
    Top = 32
    Width = 57
    Height = 25
    Caption = #45769#45348#51076
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 320
    Top = 327
    Width = 68
    Height = 32
    Caption = #45236' IP :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 324
    Top = 365
    Width = 63
    Height = 32
    Caption = 'Port :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 16
    Width = 289
    Height = 401
    Caption = #45824#54868#52285
    Color = clSkyBlue
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 0
    object Memo1: TMemo
      Left = 16
      Top = 24
      Width = 257
      Height = 265
      TabOrder = 0
    end
    object Edit1: TEdit
      Left = 16
      Top = 304
      Width = 257
      Height = 29
      TabOrder = 1
      TextHint = #48372#45244' '#45236#50857#51012' '#51077#47141#54616#49464#50836
      OnKeyPress = Edit1KeyPress
    end
    object Button1: TButton
      Left = 16
      Top = 347
      Width = 257
      Height = 38
      Caption = #48372#45236#44592
      TabOrder = 2
      OnClick = Button1Click
    end
  end
  object Edit2: TEdit
    Left = 440
    Top = 32
    Width = 121
    Height = 29
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TextHint = #45769#45348#51076' '#51077#47141
  end
  object GroupBox2: TGroupBox
    Left = 320
    Top = 75
    Width = 281
    Height = 246
    Caption = 'IP '#50672#44208
    Color = clInfoBk
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentColor = False
    ParentFont = False
    TabOrder = 2
    object ListBox1: TListBox
      Left = 16
      Top = 32
      Width = 249
      Height = 201
      ItemHeight = 25
      TabOrder = 0
    end
  end
  object Edit3: TEdit
    Left = 393
    Top = 372
    Width = 121
    Height = 23
    TabOrder = 3
  end
  object Button2: TButton
    Left = 360
    Top = 409
    Width = 138
    Height = 25
    Caption = #49436#48260' '#50724#54536
    TabOrder = 4
    OnClick = Button2Click
  end
  object ServerSocket1: TServerSocket
    Active = False
    Port = 1234
    ServerType = stNonBlocking
    OnClientConnect = ServerSocket1ClientConnect
    OnClientDisconnect = ServerSocket1ClientDisconnect
    OnClientRead = ServerSocket1ClientRead
    Left = 584
    Top = 336
  end
  object IdIPWatch1: TIdIPWatch
    Active = False
    HistoryFilename = 'iphist.dat'
    Left = 584
    Top = 392
  end
end
