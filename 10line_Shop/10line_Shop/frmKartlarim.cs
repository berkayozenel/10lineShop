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
    public partial class frmKartlarim : Form
    {
        private string uyeId;
        public frmKartlarim(string uyeIdParametre)
        {
            InitializeComponent();
            uyeId = uyeIdParametre;
        }

        sqlbaglantisi bgl = new sqlbaglantisi();
        private void frmKartlarim_Load(object sender, EventArgs e)
        {
            lblid.Text = uyeId;
            kartGetir();
        }
        public void kartEkle()
        {
            if (string.IsNullOrEmpty(lblid.Text) || string.IsNullOrEmpty(txtAdSoyad.Text) || string.IsNullOrEmpty(mskKartNo.Text) || string.IsNullOrEmpty(cmbSktAy.Text) || string.IsNullOrEmpty(cmbSktYil.Text) || string.IsNullOrEmpty(mskCvv.Text) || string.IsNullOrEmpty(txtKartBaslik.Text))
            {
                MessageBox.Show("Lütfen tüm alanları doldurun!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            else
            {
                SqlCommand komut = new SqlCommand("insert into Tbl_UyeKart (UyeId,KartAdSoyad,KartNo,KartSktAy,KartSktYil,KartCvv,KartBaslik) values (@p1,@p2,@p3,@p4,@p5,@p6,@p7)", bgl.baglanti());
                komut.Parameters.AddWithValue("@p1", lblid.Text);
                komut.Parameters.AddWithValue("@p2", txtAdSoyad.Text);
                komut.Parameters.AddWithValue("@p3", mskKartNo.Text);
                komut.Parameters.AddWithValue("@p4", cmbSktAy.Text);
                komut.Parameters.AddWithValue("@p5", cmbSktYil.Text);
                komut.Parameters.AddWithValue("@p6", mskCvv.Text);
                komut.Parameters.AddWithValue("@p7", txtKartBaslik.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Yeni Kart Ekleme İşleminiz Gerçekleşmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                txtAdSoyad.Text = "";
                mskKartNo.Text = "";
                cmbSktAy.SelectedIndex = -1;
                cmbSktYil.SelectedIndex = -1;
                mskCvv.Text = "";
                txtKartBaslik.Text = "";
            }
        }

        public void kartGetir()
        {
            DataTable dt = new DataTable();
            SqlDataAdapter da = new SqlDataAdapter("Select Id,KartBaslik,KartAdSoyad,KartNo,KartSktAy,KartSktYil,KartCvv from Tbl_UyeKart where UyeId = " + lblid.Text, bgl.baglanti());
            da.Fill(dt);
            dataGridView1.DataSource = dt;
            dataGridView1.Columns[0].Visible = false;
        }

        public void kartGuncelle()
        {
            if (string.IsNullOrEmpty(lblid.Text) || string.IsNullOrEmpty(txtAdSoyadGuncelle.Text) || string.IsNullOrEmpty(mskKartNoGuncelle.Text) || string.IsNullOrEmpty(cmbSktAyGuncelle.Text) || string.IsNullOrEmpty(cmbSktYilGuncelle.Text) || string.IsNullOrEmpty(mskCvvGuncelle.Text) || string.IsNullOrEmpty(txtKartBaslikGuncelle.Text))
            {
                MessageBox.Show("Lütfen tüm alanları doldurun!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            else
            {
                int secilen = dataGridView1.SelectedCells[0].RowIndex;
                SqlCommand komut = new SqlCommand("Update Tbl_UyeKart set KartAdSoyad = @p1,KartNo = @p2 ,KartSktAy = @p3,KartSktYil = @p4, KartCvv = @p5,KartBaslik = @p8 where UyeId = @p6 and Id = @p7", bgl.baglanti());
                komut.Parameters.AddWithValue("@p1", txtAdSoyadGuncelle.Text);
                komut.Parameters.AddWithValue("@p2", mskKartNoGuncelle.Text);
                komut.Parameters.AddWithValue("@p3", cmbSktAyGuncelle.Text);
                komut.Parameters.AddWithValue("@p4", cmbSktYilGuncelle.Text);
                komut.Parameters.AddWithValue("@p5", mskCvvGuncelle.Text);
                komut.Parameters.AddWithValue("@p6", lblid.Text);
                komut.Parameters.AddWithValue("@p7", lblKartId.Text);
                komut.Parameters.AddWithValue("@p8", txtKartBaslikGuncelle.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Kart Bilgileriniz Güncellenmiştir!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                txtAdSoyadGuncelle.Text = "";
                mskKartNoGuncelle.Text = "";
                cmbSktAyGuncelle.SelectedIndex = -1;
                cmbSktYilGuncelle.SelectedIndex = -1;
                mskCvvGuncelle.Text = "";
                txtKartBaslikGuncelle.Text = "";
            }

        }

        public void kartSil()
        {
            if (!string.IsNullOrEmpty(lblKartId.Text))
            {
                int secilen = dataGridView1.SelectedCells[0].RowIndex;
                SqlCommand komut = new SqlCommand("Delete from Tbl_UyeKart where Id = @p1", bgl.baglanti());
                komut.Parameters.AddWithValue("@p1", lblKartId.Text);
                komut.ExecuteNonQuery();
                bgl.baglanti().Close();
                MessageBox.Show("Kart Silindi!", "BİLGİ", MessageBoxButtons.OK, MessageBoxIcon.Information);
                txtAdSoyadGuncelle.Text = "";
                mskKartNoGuncelle.Text = "";
                cmbSktAyGuncelle.SelectedIndex = -1;
                cmbSktYilGuncelle.SelectedIndex = -1;
                mskCvvGuncelle.Text = "";
                txtKartBaslikGuncelle.Text = "";
            }
            else
            {
                MessageBox.Show("Lütfen satır seçin!", "HATA", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }
        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int secilen = dataGridView1.SelectedCells[0].RowIndex;
            txtAdSoyadGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartAdSoyad"].Value.ToString();
            mskKartNoGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartNo"].Value.ToString();
            cmbSktAyGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartSktAy"].Value.ToString();
            cmbSktYilGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartSktYil"].Value.ToString();
            mskCvvGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartCvv"].Value.ToString();
            lblKartId.Text = dataGridView1.Rows[secilen].Cells["Id"].Value.ToString();
            txtKartBaslikGuncelle.Text = dataGridView1.Rows[secilen].Cells["KartBaslik"].Value.ToString();
        }

        private void btnEkle_Click(object sender, EventArgs e)
        {
            kartEkle();
            kartGetir();
        }

        private void btnGuncelle_Click(object sender, EventArgs e)
        {
            kartGuncelle();
            kartGetir();
        }

        private void btnSil_Click(object sender, EventArgs e)
        {
            kartSil();
            kartGetir();
        }

        
    }
}
