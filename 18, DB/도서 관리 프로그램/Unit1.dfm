object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #46020#49436' '#44288#47532' '#54532#47196#44536#47016
  ClientHeight = 442
  ClientWidth = 674
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 657
    Height = 426
    Caption = #46020#49436' '#44288#47532
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 360
      Width = 177
      Height = 17
      Caption = '1. '#45824#52636' '#49884' '#44592#54620#51008' 10'#51068' '#51077#45768#45796'.'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 383
      Width = 205
      Height = 17
      Caption = '2.'#45824#52636' '#49884' '#50672#51109#51008' 2'#54924#47564' '#44032#45733#54633#45768#45796'.'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 16
      Top = 312
      Width = 412
      Height = 17
      Caption = #49688#51221#51012' '#51228#50808#54620' '#45208#47672#51648' '#48260#53948#51008' '#52293' '#51060#47492#51012' '#44592#51456#51004#47196' '#45936#51060#53552#47484' '#44160#49353#54633#45768#45796'.'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object DBGrid1: TDBGrid
      Left = 16
      Top = 24
      Width = 629
      Height = 201
      DataSource = DataSource1
      Options = [dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -12
      TitleFont.Name = 'Segoe UI'
      TitleFont.Style = []
    end
    object Edit1: TEdit
      Left = 16
      Top = 231
      Width = 121
      Height = 23
      TabOrder = 1
      TextHint = #52293' '#51060#47492
    end
    object Edit2: TEdit
      Left = 143
      Top = 231
      Width = 121
      Height = 23
      TabOrder = 2
      TextHint = #51200#51088
    end
    object Edit3: TEdit
      Left = 270
      Top = 231
      Width = 121
      Height = 23
      TabOrder = 3
      TextHint = #52636#54032#49324
    end
    object Edit4: TEdit
      Left = 397
      Top = 231
      Width = 121
      Height = 23
      TabOrder = 4
      TextHint = #52636#54032' '#48264#54840
    end
    object Edit5: TEdit
      Left = 524
      Top = 231
      Width = 121
      Height = 23
      TabOrder = 5
      TextHint = #49345#53468
    end
    object Button1: TButton
      Left = 16
      Top = 272
      Width = 105
      Height = 25
      Caption = #46020#49436' '#51221#48372' '#44161#49353
      TabOrder = 6
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 143
      Top = 272
      Width = 105
      Height = 25
      Caption = #46020#49436' '#51221#48372' '#52628#44032
      TabOrder = 7
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 270
      Top = 272
      Width = 105
      Height = 25
      Caption = #46020#49436' '#51221#48372' '#49688#51221
      TabOrder = 8
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 397
      Top = 272
      Width = 105
      Height = 25
      Caption = #46020#49436' '#51221#48372' '#49325#51228
      TabOrder = 9
      OnClick = Button4Click
    end
    object RadioGroup1: TRadioGroup
      Left = 460
      Top = 303
      Width = 185
      Height = 105
      Caption = #45824#52636'/'#48152#45225
      TabOrder = 10
    end
    object RadioButton1: TRadioButton
      Left = 488
      Top = 336
      Width = 57
      Height = 17
      Caption = #45824#52636
      TabOrder = 11
    end
    object RadioButton2: TRadioButton
      Left = 560
      Top = 336
      Width = 57
      Height = 17
      Caption = #48152#45225
      TabOrder = 12
    end
    object Button5: TButton
      Left = 512
      Top = 375
      Width = 75
      Height = 25
      Caption = #52376#47532
      TabOrder = 13
      OnClick = Button5Click
    end
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'User_Name=root'
      'Password=0418'
      'Server=127.0.0.1'
      'Database=db1'
      'CharacterSet=utf8'
      'DriverID=MySQL')
    Connected = True
    Left = 280
    Top = 352
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 344
    Top = 352
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECt * FROM book_management')
    Left = 400
    Top = 352
  end
end
