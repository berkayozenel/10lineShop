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
    public partial class frmGirisEkrani : Form
    {
        public frmGirisEkrani()
        {
            InitializeComponent();
        }

        sqlbaglantisi bgl = new sqlbaglantisi();

       
        private void btnGirisYap_Click(object sender, EventArgs e)
        {
            SqlCommand komut = new SqlCommand("Select * From Tbl_Uyeler where UyeTelNo = @p1", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", mskTelNo.Text);
            SqlDataReader dr = komut.ExecuteReader();
            if (dr.Read())
            {
                string uyeId = dr["Uyeid"].ToString(); // UyeId değerini aldık
                string adSoyad = dr["UyeAdSoyad"].ToString(); //sql de UyeAdSoyad sütunundaki Ad Soyad bilgisini aldık.
                frmGirisKontrol fr = new frmGirisKontrol(adSoyad, uyeId);
                fr.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Böyle bir kayıt bulunamadı!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            bgl.baglanti().Close();
        }

        private void lnkUyeOl_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            frmUyeOl fr = new frmUyeOl();
            fr.Show();
            this.Hide();
        }

        private void btnTemizle_Click(object sender, EventArgs e)
        {
            mskTelNo.Text = "";
            mskTelNo.Focus();
        }

        private void frmGirisEkrani_Load(object sender, EventArgs e)
        {
            mskTelNo.Focus();
        }
    }
}
