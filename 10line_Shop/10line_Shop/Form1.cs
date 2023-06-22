using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace _10line_Shop
{
    public partial class frmAcilis : Form
    {
        sqlbaglantisi bgl = new sqlbaglantisi();
        public frmAcilis()
        {
            InitializeComponent();
        }

        public void sepetSifirla()
        {
            SqlCommand komut = new SqlCommand("UPDATE Tbl_Sepet SET toplam = 0", bgl.baglanti());
            komut.ExecuteNonQuery();
            bgl.baglanti().Close();
        }

        public void idSil()
        {
            SqlCommand komut = new SqlCommand("Delete from Tbl_Sepet where id = 1", bgl.baglanti());
            komut.ExecuteNonQuery();
            bgl.baglanti().Close();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            sepetSifirla();
            idSil();
            frmGiris fr = new frmGiris();
            fr.Show();
            this.Hide();
        }
    }
}
