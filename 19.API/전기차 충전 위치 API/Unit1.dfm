object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object StringGrid1: TStringGrid
    Tag = 8
    Left = 0
    Top = 16
    Width = 625
    Height = 289
    ColCount = 8
    Ctl3D = False
    DefaultColWidth = 200
    FixedCols = 0
    RowCount = 11
    ParentCtl3D = False
    TabOrder = 0
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 
      'https://api.odcloud.kr/api/15039545/v1/uddi:142ee2ae-0988-41eb-9' +
      '98b-d67dace405ad?page=1&perPage=10&serviceKey=WTZOBklH9N7p5cQgZX' +
      'JELykK4OW%2B9mpn940d5iSxH274ktFx2OridS9SOYBM5W6iDIu%2FlScKC%2FWi' +
      'gYgkpWt4EQ%3D%3D'
    Params = <>
    SynchronizedEvents = False
    Left = 96
    Top = 360
  end
  object RESTRequest1: TRESTRequest
    AssignedValues = [rvConnectTimeout, rvReadTimeout]
    Client = RESTClient1
    Params = <>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 168
    Top = 376
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'application/json'
    RootElement = 'data'
    Left = 240
    Top = 344
  end
  object RESTResponseDataSetAdapter1: TRESTResponseDataSetAdapter
    Active = True
    Dataset = FDMemTable1
    FieldDefs = <>
    Response = RESTResponse1
    Left = 344
    Top = 368
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
    Left = 424
    Top = 352
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDMemTable1
    ScopeMappings = <>
    Left = 136
    Top = 312
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 44
    Top = 317
    object LinkGridToDataSourceBindSourceDB1: TLinkGridToDataSource
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      GridControl = StringGrid1
      Columns = <>
    end
  end
end
