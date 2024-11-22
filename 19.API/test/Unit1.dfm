object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object DBGrid1: TDBGrid
    Left = -5
    Top = 0
    Width = 601
    Height = 249
    DataSource = DataSource1
    Options = [dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 296
    Top = 328
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 1
    OnClick = Button1Click
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 
      'https://api.odcloud.kr/api/15039545/v1/uddi:142ee2ae-0988-41eb-9' +
      '98b-d67dace405ad'
    Params = <>
    SynchronizedEvents = False
    Left = 56
    Top = 48
  end
  object RESTRequest1: TRESTRequest
    AssignedValues = [rvConnectTimeout, rvReadTimeout]
    Client = RESTClient1
    Params = <>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 64
    Top = 112
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'application/json'
    RootElement = 'data'
    Left = 64
    Top = 184
  end
  object RESTResponseDataSetAdapter1: TRESTResponseDataSetAdapter
    Active = True
    Dataset = FDMemTable1
    FieldDefs = <>
    Response = RESTResponse1
    Left = 64
    Top = 264
  end
  object FDMemTable1: TFDMemTable
    Active = True
    FieldDefs = <
      item
        Name = #44221#46020
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #49345#49464#51452#49548
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #50672#46973#52376
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #50948#46020
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #51060#50857#44032#45733#49884#44036
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #52649#51204#49548'ID'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #52649#51204#49548#47749
        DataType = ftWideString
        Size = 255
      end
      item
        Name = #52649#51204#49548#51452#49548
        DataType = ftWideString
        Size = 255
      end>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvUpdateChngFields, uvUpdateMode, uvLockMode, uvLockPoint, uvLockWait, uvRefreshMode, uvFetchGeneratorsPoint, uvCheckRequired, uvCheckReadOnly, uvCheckUpdatable]
    UpdateOptions.LockWait = True
    UpdateOptions.FetchGeneratorsPoint = gpNone
    UpdateOptions.CheckRequired = False
    StoreDefs = True
    Left = 64
    Top = 344
  end
  object DataSource1: TDataSource
    DataSet = FDMemTable1
    Left = 192
    Top = 360
  end
end
