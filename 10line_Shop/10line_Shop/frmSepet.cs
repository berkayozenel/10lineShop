using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace _10line_Shop
{
    public partial class frmSepet : Form
    {
        private string uyeIdParametre;
        private string adSoyadParametre;
        public frmSepet(string uyeId, string adSoyad)
        {
            InitializeComponent();
            uyeIdParametre = uyeId;
            adSoyadParametre = adSoyad;
        }
        sqlbaglantisi bgl = new sqlbaglantisi();

        private void frmSepet_Load(object sender, EventArgs e)
        {
            lblid.Text = uyeIdParametre;
            adresGetir();
            fiyatGetir();
            if (lblTutar.Text == "NULL")
            {
                dataGridView1.Enabled = false;
                lblTutar.Text = "0 TL";
                lblTutar.ForeColor = Color.Red;
                MessageBox.Show("Sepetinizde Ürün Bulunmamaktadır! Lütfen Ekleme Yapınız!", "BİLGİLENDİRME", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                panel1.Enabled = true;
            }
            if (string.IsNullOrEmpty(rchSeciliAdres.Text))
            {
                panel2.Enabled = false;
            }
            else
            {
                panel2.Enabled = true;
            }

        }
        public void indirimliFiyat()
        {
            SqlCommand komut = new SqlCommand("Select toplam from Tbl_Sepet where UyeId = @p1", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", lblid.Text);
            SqlDataReader dr = komut.ExecuteReader();
            if (dr.Read())
            {
                string toplamDeger = dr["toplam"].ToString();
                decimal toplam = decimal.Parse(toplamDeger);
                decimal indirimliToplam = toplam * 0.8m;
                lblindirim.Text = indirimliToplam.ToString()+" TL";
            }
            dr.Close();
            bgl.baglanti().Close();
        }
        public void fiyatGetir()
        {
            SqlCommand komut = new SqlCommand("Select toplam from Tbl_Sepet where UyeId = @p1", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", lblid.Text);
            SqlDataReader dr = komut.ExecuteReader();
            if (dr.Read())
            {
                string toplamDeger = dr["toplam"].ToString();
                lblTutar.Text = toplamDeger + " TL";
            }
            dr.Close();
            bgl.baglanti().Close();
        }
        public void adresGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select Id, AdresBaslik,Adres from Tbl_UyeAdres where UyeId = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            dataGridView1.DataSource = dt;
            dataGridView1.Columns[0].Visible = false;
            dataGridView1.Columns[1].Width = 110;
        }

        public void kartGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select Id,KartBaslik,KartAdSoyad,KartNo,KartSktAy,KartSktYil,KartCvv from Tbl_UyeKart where UyeId = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            dataGridView2.DataSource = dt;
            dataGridView2.Columns[0].Visible = false;
        }

        public void tutarSifirla()
        {
            SqlCommand komut = new SqlCommand("UPDATE Tbl_Sepet SET toplam = 0", bgl.baglanti());
            komut.ExecuteNonQuery();
            bgl.baglanti().Close();
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int secilen = dataGridView1.SelectedCells[0].RowIndex;
            rchSeciliAdres.Text = dataGridView1.Rows[secilen].Cells["Adres"].Value.ToString();
            rchSeciliAdresBasligi.Text = dataGridView1.Rows[secilen].Cells["AdresBaslik"].Value.ToString();
            if (string.IsNullOrEmpty(rchSeciliAdres.Text))
            {
                panel2.Enabled = false;
            }
            else
            {
                panel2.Enabled = true;
            }
        }
        private void dataGridView2_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int secilen = dataGridView2.SelectedCells[0].RowIndex;
            rchSeciliKart.Text = dataGridView2.Rows[secilen].Cells["KartBaslik"].Value.ToString();
        }
        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked)
            {
                radioButton2.Checked = false;
                radioButton3.Checked = false;
            }
            kartGetir();
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            indirimliFiyat();
            if (radioButton2.Checked)
            {
                radioButton1.Checked = false;
                dataGridView2.DataSource = null;
                dataGridView2.Rows.Clear();
                dataGridView2.Refresh();
            }
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked)
            {
                radioButton1.Checked = false;
                dataGridView2.DataSource = null;
                dataGridView2.Rows.Clear();
                dataGridView2.Refresh();
            }
        }

        private void btnSiparisTamamla_Click(object sender, EventArgs e)
        {
            if(radioButton1.Checked)
            {
                if(rchSeciliKart.Text == "")
                {
                    MessageBox.Show("Lütfen Bir Kart Seçin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                else
                {
                    MessageBox.Show($"Siparişiniz Alınmıştır! \n SEÇİLİ ADRES BAŞLIĞINIZ: {rchSeciliAdresBasligi.Text} \n SEÇİLİ ADRESİNİZ : {rchSeciliAdres.Text} \n ÖDEME YÖNTEMİ: {lblWKart.Text} \n SEÇİLİ KARTINIZ: {rchSeciliKart.Text} \n ÖDEDİĞİNİZ TUTAR: {lblTutar.Text}", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    tutarSifirla();
                    frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
                    fr.Show();
                    this.Hide();
                }
            }
            else if(radioButton2.Checked)
            {
                MessageBox.Show($"Siparişiniz Alınmıştır! \n SEÇİLİ ADRES BAŞLIĞINIZ: {rchSeciliAdresBasligi.Text} \n SEÇİLİ ADRESİNİZ : {rchSeciliAdres.Text} \n ÖDEME YÖNTEMİ: {lblNakit.Text} \n %20 İNDİRİM FIRSATINDAN YARARLANDINIZ! \n ÖDENECEK TUTAR: {lblindirim.Text}", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);

                tutarSifirla();
                frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
                fr.Show();
                this.Hide();
            }
            else if(radioButton3.Checked)
            {
                MessageBox.Show($"Siparişiniz Alınmıştır! \n SEÇİLİ ADRES BAŞLIĞINIZ: {rchSeciliAdresBasligi.Text} \n SEÇİLİ ADRESİNİZ : {rchSeciliAdres.Text} \n ÖDEME YÖNTEMİ: {lblKart.Text} \n ÖDENECEK TUTAR: {lblTutar.Text}", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                tutarSifirla();
                frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
                fr.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Lütfen Bir Ödeme Yöntemi Seçin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void btnGeri_Click(object sender, EventArgs e)
        {
            frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
            fr.Show();
            this.Hide();
        }
    }
}
