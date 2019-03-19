using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpCleint
{
    using ComSvr = AtlComServerLib;
    class Program
    {
        static void Main(string[] args)
        {
            ComSvr.Calculator cal = new ComSvr.Calculator();

            Console.WriteLine("1+...+20={0}", cal.Sum(1, 20));
        }
    }
}
