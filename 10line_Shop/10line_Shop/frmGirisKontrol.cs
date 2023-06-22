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
    public partial class frmGirisKontrol : Form
    {
        private string adSoyadParametre; //adSoyadParametre yi bir alan olarak tanımladık
        private string uyeIdParametre; //uyeIdParametre yi bir alan olarak tanımladık.
        public frmGirisKontrol(string adSoyad,string uyeId)
        {
            InitializeComponent();
            adSoyadParametre = adSoyad; //Constuctor ile değer atadık
            uyeIdParametre = uyeId; //Constructor ile değer atadık.
        }

        sqlbaglantisi bgl = new sqlbaglantisi();
        public void btnDogrula_Click(object sender, EventArgs e)
        {
            
            SqlCommand komut = new SqlCommand("Select * From Tbl_Uyeler Where UyeSifre = @p1", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", txtSifre.Text);
            SqlDataReader dr = komut.ExecuteReader();
            if (dr.Read())
            {
                string adSoyad = adSoyadParametre; //frmGirisEkrani dan aldığımız adSoyadParametreyi kullandık
                string uyeId = uyeIdParametre;
                frmAnaEkran fr = new frmAnaEkran(adSoyad, uyeId);
                fr.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Yanlış ya da Hatalı Şifre Girdiniz!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            bgl.baglanti().Close();
        }

        private void btnTemizle_Click(object sender, EventArgs e)
        {
            txtSifre.Text = "";
            txtSifre.Focus();
        }
    }
}
