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
    public partial class frmAnaEkran : Form
    {
        private string adSoyad;
        private string uyeId;
        public frmAnaEkran(string adSoyadParametre, string uyeIdParametre)
        {
            InitializeComponent();
            adSoyad = adSoyadParametre;//Constuctor ile adSoyadParametreyi adSoyad a atadık.
            uyeId = uyeIdParametre;
        }

        sqlbaglantisi bgl = new sqlbaglantisi();
        private void frmAnaEkran_Load(object sender, EventArgs e)
        {
            lblAdSoyad.Text = adSoyad;
            lblUyeid.Text = uyeId;
            frmMeyveSebze fr = new frmMeyveSebze(uyeId, adSoyad);
            lblTutar.Text = fr.sepetTutari.ToString() + "TL";
            fiyatGetir();
        }
        public void fiyatGetir()
        {
            SqlCommand komut = new SqlCommand("Select toplam from Tbl_Sepet where UyeId = @p1", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", lblUyeid.Text);
            SqlDataReader dr = komut.ExecuteReader();
            if (dr.Read())
            {
                string toplamDeger = dr["toplam"].ToString();
                lblTutar.Text = toplamDeger + " TL";
            }
            dr.Close();
            bgl.baglanti().Close();

        }
        private void btnHesap_Click(object sender, EventArgs e)
        {
            frmHesabim fr = new frmHesabim(uyeId);
            fr.AdSoyad(lblAdSoyad.Text);
            fr.Show();
        }
        private void btnMeyveSebze_Click(object sender, EventArgs e)
        {
            frmMeyveSebze fr = new frmMeyveSebze(uyeId, adSoyad);
            fr.Show();
            this.Close();
        }

        private void btnSepet_Click(object sender, EventArgs e)
        {
            frmSepet fr = new frmSepet(uyeId,adSoyad);
            fr.Show();
            this.Close();
        }

        private void btnTemelGida_Click(object sender, EventArgs e)
        {
            frmTemelGida fr = new frmTemelGida(uyeId,adSoyad);
            fr.Show();
            this.Close();
        }

        private void btnEtTavukBalik_Click(object sender, EventArgs e)
        {
            frmEtTavukBalık fr = new frmEtTavukBalık(uyeId, adSoyad);
            fr.Show();
            this.Close();
        }

        private void btnSütKahvaltilik_Click(object sender, EventArgs e)
        {
            frmSutKahvaltilik fr = new frmSutKahvaltilik(uyeId,adSoyad);
            fr.Show();
            this.Close();
        }
    }
}
