object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #47928#51088#50676' '#52376#47532#44592
  ClientHeight = 269
  ClientWidth = 436
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
    Width = 257
    Height = 241
    Lines.Strings = (
      '2024'#45380' 11'#50900' 3'#51068
      #45216#50472' '#55120#47548
      #51076#51116#50689
      #48120#49464#47676#51648' '#50630#51020
      #44053#49688#54869#47456' 10%')
    TabOrder = 0
  end
  object ComboBox1: TComboBox
    Left = 271
    Top = 8
    Width = 145
    Height = 23
    TabOrder = 1
    Text = #49440#53469
    Items.Strings = (
      #44160#49353
      #52628#44032
      #49325#51228
      #49688#51221)
  end
  object Edit1: TEdit
    Left = 288
    Top = 56
    Width = 121
    Height = 23
    HelpType = htKeyword
    TabOrder = 2
    TextHint = ' '#44160#49353', '#49688#51221
  end
  object Edit2: TEdit
    Left = 288
    Top = 104
    Width = 121
    Height = 23
    TabOrder = 3
    TextHint = #49884#51089' '#50948#52824
  end
  object Edit3: TEdit
    Left = 288
    Top = 144
    Width = 121
    Height = 23
    TabOrder = 4
    TextHint = #45236#50857' or '#48148#51060#53944' '#49688
  end
  object Button1: TButton
    Left = 271
    Top = 173
    Width = 145
    Height = 68
    Caption = #54869#51064
    TabOrder = 5
    OnClick = Button1Click
  end
end
