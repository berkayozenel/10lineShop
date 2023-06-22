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
using System.Data.Common;

namespace _10line_Shop
{
    public partial class frmAdreslerim : Form
    {
        private string uyeId;
        public frmAdreslerim(string uyeIdParametre)
        {
            InitializeComponent();
            uyeId = uyeIdParametre;
        }
        sqlbaglantisi bgl = new sqlbaglantisi();
        private void frmAdreslerim_Load(object sender, EventArgs e)
        {
            lblid.Text = uyeId;
            adresGetir();
        }
        public void adresEkle()
        {
            if (!string.IsNullOrEmpty(lblid.Text))
            {
                if (!string.IsNullOrEmpty(rchYeniAdres.Text))
                {
                    SqlCommand komut2 = new SqlCommand("insert into Tbl_UyeAdres (UyeId,Adres, AdresBaslik) values(@p1,@p2,@p3)", bgl.baglanti());
                    komut2.Parameters.AddWithValue("@p1", lblid.Text);
                    komut2.Parameters.AddWithValue("@p2", rchYeniAdres.Text);
                    komut2.Parameters.AddWithValue("@p3", txtAdresBaslik.Text);
                    komut2.ExecuteNonQuery();
                    bgl.baglanti().Close();
                    MessageBox.Show("Yeni Adres Ekleme İşleminiz Gerçekleşmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    rchYeniAdres.Text = "";
                    txtAdresBaslik.Text = "";
                }
                else
                {
                    MessageBox.Show("Lütfen Bir Adres Girin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }

        }
        public void adresGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select Id, AdresBaslik,Adres from Tbl_UyeAdres where UyeId = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            dataGridView1.DataSource = dt;
            dataGridView1.Columns[0].Visible = false;
            dataGridView1.Columns[1].Width = 70;
        }
        public void adresGuncelle()
        {
            int secilen = dataGridView1.SelectedCells[0].RowIndex;
            if (!string.IsNullOrEmpty(lblAdresId.Text))
            {
                if (!string.IsNullOrEmpty(rchAdresGuncelle.Text))
                {
                    SqlCommand komut = new SqlCommand("Update Tbl_UyeAdres set Adres = @p1, AdresBaslik = @p4 where UyeId = @p2 and Id= @p3", bgl.baglanti());
                    komut.Parameters.AddWithValue("@p1", rchAdresGuncelle.Text);
                    komut.Parameters.AddWithValue("@p2", lblid.Text);
                    komut.Parameters.AddWithValue("@p3", lblAdresId.Text);
                    komut.Parameters.AddWithValue("@p4", txtAdresBaslikGuncelle.Text);
                    komut.ExecuteNonQuery();
                    bgl.baglanti().Close();
                    MessageBox.Show("Adresiniz Güncellenmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    rchAdresGuncelle.Text = "";
                    txtAdresBaslikGuncelle.Text = "";
                }
                else
                {
                    MessageBox.Show("Lütfen Bir Adres Girin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
            else
            {
                MessageBox.Show("Lütfen satır seçin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        public void adresSil()
        {
            if (!string.IsNullOrEmpty(lblAdresId.Text))
            {
                int secilen = dataGridView1.SelectedCells[0].RowIndex;
                SqlCommand komut = new SqlCommand("Delete from Tbl_UyeAdres where Id = @s1", bgl.baglanti());
                komut.Parameters.AddWithValue("@s1", lblAdresId.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Adres Silindi!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                rchAdresGuncelle.Text = "";
                txtAdresBaslikGuncelle.Text = "";
            }
            else
            {
                MessageBox.Show("Lütfen satır seçin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int secilen = dataGridView1.SelectedCells[0].RowIndex;
            rchAdresGuncelle.Text = dataGridView1.Rows[secilen].Cells["Adres"].Value.ToString();
            lblAdresId.Text = dataGridView1.Rows[secilen].Cells["Id"].Value.ToString();
            txtAdresBaslikGuncelle.Text = dataGridView1.Rows[secilen].Cells["AdresBaslik"].Value.ToString();
        }
        private void btnEkle_Click(object sender, EventArgs e)
        {
            adresEkle();
            adresGetir();
        }
        private void btnGuncelle_Click(object sender, EventArgs e)
        {
            adresGuncelle();
            adresGetir();
        }
        private void btnSil_Click(object sender, EventArgs e)
        {
            adresSil();
            adresGetir();
        }
    }
}
