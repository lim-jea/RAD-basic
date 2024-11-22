object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 438
  ClientWidth = 294
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 104
    Top = 16
    Width = 68
    Height = 21
    Caption = #44284#47785' '#49440#53469
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object ComboBox1: TComboBox
    Left = 72
    Top = 43
    Width = 145
    Height = 23
    TabOrder = 0
    Text = #44284#47785
    Items.Strings = (
      #49688#54617
      #44284#54617
      #50689#50612
      #49324#54924
      #46020#45909)
  end
  object GroupBox1: TGroupBox
    Left = 56
    Top = 72
    Width = 185
    Height = 105
    Caption = #49828#52992#51572' '#48152#48373' '#51452#44592
    TabOrder = 1
    object RadioButton1: TRadioButton
      Left = 48
      Top = 24
      Width = 113
      Height = 17
      Caption = #54217#51068
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 48
      Top = 47
      Width = 113
      Height = 17
      Caption = #53664#50836#51068
      TabOrder = 1
    end
    object RadioButton3: TRadioButton
      Left = 48
      Top = 70
      Width = 113
      Height = 17
      Caption = #51068#50836#51068
      TabOrder = 2
    end
  end
  object Button1: TButton
    Left = 97
    Top = 183
    Width = 75
    Height = 25
    Caption = #46321#47197
    TabOrder = 2
    OnClick = Button1Click
  end
  object ListBox1: TListBox
    Left = 40
    Top = 224
    Width = 217
    Height = 177
    ItemHeight = 15
    TabOrder = 3
  end
end
