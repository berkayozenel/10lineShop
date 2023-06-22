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
    public partial class frmUyeOl : Form
    {
        public frmUyeOl()
        {
            InitializeComponent();
        }

        sqlbaglantisi bgl = new sqlbaglantisi();
        private void btnUyeOl_Click(object sender, EventArgs e)
        {
            SqlCommand komut = new SqlCommand("insert into Tbl_Uyeler (UyeTelNo,UyeSifre,UyeAdSoyad) values (@p1,@p2,@p3)", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", mskTelNo.Text);
            komut.Parameters.AddWithValue("@p2", txtSifre.Text);
            komut.Parameters.AddWithValue("@p3", txtAdSoyad.Text);
            komut.ExecuteNonQuery();
            bgl.baglanti().Close();

            MessageBox.Show("Üyelik İşleminiz Gerçekleşmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);

            frmGirisEkrani fr = new frmGirisEkrani();
            fr.Show();
            this.Hide();
        }

        private void btnTemizle1_Click(object sender, EventArgs e)
        {
            mskTelNo.Text = "";
            mskTelNo.Focus();
        }

        private void btnTemizle2_Click(object sender, EventArgs e)
        {
            txtSifre.Text = "";
            txtSifre.Focus();
        }

        private void btnTemizle3_Click(object sender, EventArgs e)
        {
            txtAdSoyad.Text = "";
            txtAdSoyad.Focus();
        }
    }
}
