object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 401
  ClientWidth = 461
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 104
    Height = 21
    Caption = #45824#44592' '#54872#51088' '#52264#53944
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 208
    Top = 33
    Width = 100
    Height = 25
    Caption = #54872#51088' '#47532#49828#53944
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 43
    Width = 169
    Height = 86
    Caption = #51060#47492'/'#45208#51060
    TabOrder = 0
    object Label2: TLabel
      Left = 16
      Top = 24
      Width = 24
      Height = 15
      Caption = #51060#47492
    end
    object Label3: TLabel
      Left = 16
      Top = 56
      Width = 24
      Height = 15
      Caption = #45208#51060
    end
    object Edit1: TEdit
      Left = 61
      Top = 21
      Width = 92
      Height = 23
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 61
      Top = 50
      Width = 92
      Height = 23
      TabOrder = 1
    end
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 135
    Width = 169
    Height = 105
    Caption = #49457#48324
    TabOrder = 1
    object RadioButton1: TRadioButton
      Left = 16
      Top = 32
      Width = 113
      Height = 17
      Caption = #45224#49457
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 16
      Top = 64
      Width = 113
      Height = 17
      Caption = #50668#49457
      TabOrder = 1
    end
  end
  object GroupBox3: TGroupBox
    Left = 8
    Top = 256
    Width = 169
    Height = 97
    Caption = 'GroupBox3'
    TabOrder = 2
    object RadioButton3: TRadioButton
      Left = 16
      Top = 32
      Width = 49
      Height = 17
      Caption = 'A'
      TabOrder = 0
    end
    object RadioButton4: TRadioButton
      Left = 16
      Top = 72
      Width = 49
      Height = 17
      Caption = 'B'
      TabOrder = 1
    end
    object RadioButton5: TRadioButton
      Left = 104
      Top = 31
      Width = 49
      Height = 17
      Caption = 'O'
      TabOrder = 2
    end
    object RadioButton6: TRadioButton
      Left = 104
      Top = 70
      Width = 49
      Height = 17
      Caption = 'AB'
      TabOrder = 3
    end
  end
  object Button1: TButton
    Left = 128
    Top = 368
    Width = 169
    Height = 25
    Caption = #52628#44032#54616#44592
    TabOrder = 3
    OnClick = Button1Click
  end
  object ListBox1: TListBox
    Left = 208
    Top = 64
    Width = 245
    Height = 289
    ItemHeight = 15
    TabOrder = 4
  end
end
