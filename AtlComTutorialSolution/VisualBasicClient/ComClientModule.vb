Imports ComSvr = AtlComServerLib

Module ComClientModule

    Sub Main()
        Dim cal As New ComSvr.Calculator
        Dim hCal As ComSvr.Calculator

        hCal = New ComSvr.Calculator

        Console.WriteLine("1+...+10={0}", cal.Sum(1, 10))
        Console.WriteLine("1+...+20={0}", hCal.Sum(1, 20))
    End Sub

End Module
