object Dtm: TDtm
  OldCreateOrder = False
  Height = 297
  Width = 424
  object FDConnINTERBASE: TFDConnection
    Params.Strings = (
      
        'Database=C:\Users\Kelver\Desktop\CodeRage XI\FireDAC\DB\FireDAC.' +
        'GDB'
      'User_Name=sysdba'
      'Password=masterkey'
      'Server=localhost'
      'Protocol=tCPIP'
      'DriverID=IB')
    LoginPrompt = False
    Left = 56
    Top = 16
  end
  object FDConnMSSQL: TFDConnection
    Params.Strings = (
      'Database=FireDAC'
      'User_Name=sa'
      'Password=sa123'
      'Server=W7VM-BD'
      'DriverID=MSSQL')
    LoginPrompt = False
    Left = 160
    Top = 16
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'OpenMode=ReadWrite'
      'DriverID=SQLite')
    LoginPrompt = False
    Left = 56
    Top = 160
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select '
      '  * '
      'from '
      '  Local.TableSales'
      'inner join Local.TableCustomers On'
      '  Local.TableSales.IdCliente = Local.TableCustomers.Id')
    Left = 144
    Top = 160
  end
  object FDLocalSQL1: TFDLocalSQL
    SchemaName = 'Local'
    Connection = FDConnection1
    Active = True
    DataSets = <
      item
        DataSet = sqlCustomers
        Name = 'TableCustomers'
      end
      item
        DataSet = sqlSales
        Name = 'TableSales'
      end>
    Left = 56
    Top = 208
  end
  object FDPhysSQLiteDriverLink1: TFDPhysSQLiteDriverLink
    Left = 312
    Top = 200
  end
  object FDPhysMSSQLDriverLink1: TFDPhysMSSQLDriverLink
    Left = 312
    Top = 144
  end
  object FDPhysIBDriverLink1: TFDPhysIBDriverLink
    Left = 312
    Top = 80
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 312
    Top = 24
  end
  object sqlCustomers: TFDQuery
    Connection = FDConnINTERBASE
    SQL.Strings = (
      'select * from Clientes')
    Left = 56
    Top = 72
  end
  object sqlSales: TFDQuery
    Connection = FDConnMSSQL
    SQL.Strings = (
      'select * from vendas')
    Left = 160
    Top = 72
  end
end
