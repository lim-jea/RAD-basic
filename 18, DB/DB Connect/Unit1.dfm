object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 316
  ClientWidth = 627
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Edit1: TEdit
    Left = 8
    Top = 232
    Width = 121
    Height = 23
    TabOrder = 0
    TextHint = #51648#50669
  end
  object Edit2: TEdit
    Left = 8
    Top = 261
    Width = 121
    Height = 23
    TabOrder = 1
    TextHint = #51064#44396
  end
  object Button1: TButton
    Left = 150
    Top = 231
    Width = 75
    Height = 25
    Caption = #52628#44032
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 150
    Top = 262
    Width = 75
    Height = 25
    Caption = #49688#51221
    TabOrder = 3
    OnClick = Button2Click
  end
  object DBChart1: TDBChart
    Left = 244
    Top = 8
    Width = 376
    Height = 233
    Title.Text.Strings = (
      #51648#50669#48324' '#51064#44396'('#51064#47749')')
    TabOrder = 4
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series1: TBarSeries
      HoverElement = []
      DataSource = FDQuery1
      XLabelsSource = 'city'
      XValues.Name = 'X'
      XValues.Order = loAscending
      XValues.ValueSource = 'man'
      YValues.Name = 'Bar'
      YValues.Order = loNone
      YValues.ValueSource = 'man'
    end
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 16
    Width = 230
    Height = 193
    DataSource = DataSource1
    Options = [dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 5
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM test1')
    Left = 512
    Top = 256
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Password=0418'
      'Database=map_people'
      'User_Name=root'
      'Server=127.0.0.1'
      'CharacterSet=utf8'
      'DriverID=MySQL')
    Connected = True
    LoginPrompt = False
    Left = 288
    Top = 256
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 408
    Top = 256
  end
end
