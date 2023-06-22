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
    public partial class frmHesapAyarlarim : Form
    {
        private string uyeId;
        public frmHesapAyarlarim(string uyeIdParametre)
        {
            InitializeComponent();
            uyeId = uyeIdParametre;
        }
        sqlbaglantisi bgl = new sqlbaglantisi();
        private void frmHesapAyarlarim_Load(object sender, EventArgs e)
        {
            lblid.Text = uyeId;
            telNoGetir();
            adSoyadGetir();
        }
        public void telNoGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select UyeTelNo from Tbl_Uyeler where Uyeid = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            mskTelNo.Text = dt.Rows[0]["UyeTelNo"].ToString();
        }

        public void adSoyadGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select UyeAdSoyad from Tbl_Uyeler where Uyeid = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            txtAdSoyad.Text = dt.Rows[0]["UyeAdSoyad"].ToString();
        }

        public void sifreGuncelle()
        {
            if (!string.IsNullOrEmpty(txtSifre.Text))
            {
                SqlCommand komut = new SqlCommand("Update Tbl_Uyeler set UyeSifre = @p1 where Uyeid = @p2", bgl.baglanti());
                komut.Parameters.AddWithValue("@p1", txtSifre.Text);
                komut.Parameters.AddWithValue("@p2", lblid.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Şifreniz Güncellenmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Lütfen Güncelleme İşlemi İçin Şifrenizi Giriniz", "UYARI", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        public void adSoyadGuncelle()
        {
            if (!string.IsNullOrEmpty(txtAdSoyad.Text))
            {
                SqlCommand komut = new SqlCommand("Update Tbl_Uyeler set UyeAdSoyad = @p1 where Uyeid = @p2", bgl.baglanti());
                komut.Parameters.AddWithValue("@p1", txtAdSoyad.Text);
                komut.Parameters.AddWithValue("@p2", lblid.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Ad Soyad Bilginiz Güncellenmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Lütfen Güncelleme İşlemi İçin Ad Soyad Giriniz", "UYARI", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnGuncelle_Click_1(object sender, EventArgs e)
        {
            sifreGuncelle();
            txtSifre.Text = "";
        }
        private void btnGuncelle2_Click(object sender, EventArgs e)
        {
            adSoyadGuncelle();
            txtAdSoyad.Text = "";
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
