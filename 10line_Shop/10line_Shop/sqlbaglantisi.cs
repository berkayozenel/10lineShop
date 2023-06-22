using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;

namespace _10line_Shop
{
    internal class sqlbaglantisi
    {
        public SqlConnection baglanti()
        {
            SqlConnection baglan = new SqlConnection("Data Source=LAPTOP-G0MHBCB3;Initial Catalog=10lineShop;Integrated Security=True");
            baglan.Open();
            return baglan;
        }
    }
}
