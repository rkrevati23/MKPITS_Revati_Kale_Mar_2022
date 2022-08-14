using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace right_click_on_solution__add_class__student.cs
{
    class Student
    {
        internal int rno;
        internal string name;

        public void displaydata()
        {
            Console.WriteLine("rno= " + rno);
            Console.WriteLine("name " + name);
            Console.ReadLine();
        }
    }
   
    
}
