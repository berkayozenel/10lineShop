using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace _10line_Shop
{
    public partial class frmMeyveSebze : Form
    {
        private string uyeIdParametre;
        private string adSoyadParametre;

        sqlbaglantisi bgl = new sqlbaglantisi();

        public int sepetTutari;
        int[] sayac = new int[19];
        int fiyat;
        public frmMeyveSebze(string uyeId, string adSoyad)
        {
            InitializeComponent();
            uyeIdParametre = uyeId;
            adSoyadParametre = adSoyad;
        }

        public void fiyatEkle()
        {
            SqlCommand komut = new SqlCommand("insert into Tbl_Sepet (toplam, UyeId, id) values (@p1, @p2, @p3)", bgl.baglanti());
            komut.Parameters.AddWithValue("@p1", sepetTutari);
            komut.Parameters.AddWithValue("@p2", lblUyeid.Text);
            komut.Parameters.AddWithValue("@p3", lblSqlid.Text);
            komut.ExecuteNonQuery();

            bgl.baglanti().Close();
        }
        public void fiyatGuncelle()
        {
            SqlCommand komut2 = new SqlCommand("UPDATE Tbl_Sepet SET toplam = @p1 WHERE UyeId = @p2 and id = @p3", bgl.baglanti());
            komut2.Parameters.AddWithValue("@p1", sepetTutari);
            komut2.Parameters.AddWithValue("@p2", lblUyeid.Text);
            komut2.Parameters.AddWithValue("@p3", lblSqlid.Text);
            komut2.ExecuteNonQuery();
            bgl.baglanti().Close();
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
        public void fiyatSil()
        {
            //Yaptığımız işlem sql tablosunda olan en küçük id haricinde diğerlerini siler
            SqlCommand komut = new SqlCommand("DELETE FROM Tbl_Sepet WHERE id NOT IN(SELECT MIN(id) FROM Tbl_Sepet)", bgl.baglanti());
            komut.ExecuteNonQuery();
            bgl.baglanti().Close();
        }
        private void frmMeyveSebze_Load(object sender, EventArgs e)
        {
            lblUyeid.Text = uyeIdParametre;
            lblTutar.Text = sepetTutari.ToString() + "TL";
            fiyatGetir();
            if (sepetTutari == 0)
            {
                btnE1.Enabled = false;
                btnE2.Enabled = false;
                btnE3.Enabled = false;
                btnE4.Enabled = false;
                btnE5.Enabled = false;
                btnE6.Enabled = false;
                btnE7.Enabled = false;
                btnE8.Enabled = false;
                btnE9.Enabled = false;
                btnE10.Enabled = false;
                btnE11.Enabled = false;
                btnE12.Enabled = false;
                btnE13.Enabled = false;
                btnE14.Enabled = false;
                btnE15.Enabled = false;
                btnE16.Enabled = false;
                btnE17.Enabled = false;
                btnE18.Enabled = false;
            }
        }
        private void btnGeri_Click(object sender, EventArgs e)
        {
            frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
            fr.Show();
            this.Hide();
        }

        private void btnSepet_Click(object sender, EventArgs e)
        {
            frmSepet fr = new frmSepet(uyeIdParametre, adSoyadParametre);
            fr.Show();
            this.Hide();
        }
        public void fiyatArttir()
        {
            sepetTutari += fiyat;
            lblTutar.Text = sepetTutari.ToString() + "TL";
            fiyatEkle();
            fiyatGuncelle();
            fiyatSil();

        }
        public void fiyatEksilt()
        {
            sepetTutari -= fiyat;
            lblTutar.Text = sepetTutari.ToString() + "TL";
            fiyatEkle();
            fiyatGuncelle();
            fiyatSil();
        }

        private void btnA1_Click(object sender, EventArgs e)
        {
            fiyat = 10;
            fiyatArttir();
            sayac[1]++;
            if (sepetTutari != 0)
            {
                btnE1.Enabled = true;
            }
            else
            {
                btnE1.Enabled = false;
            }
        }
        private void btnE1_Click(object sender, EventArgs e)
        {
            fiyat = 10;
            if (sayac[1] > 0)
            {
                fiyatEksilt();
                sayac[1]--;
            }
            if (sepetTutari <= 0 || sayac[1] == 0)
            {
                btnE1.Enabled = false;
            }
            else
            {
                btnE1.Enabled = true;
            }
        }

        private void btnA2_Click(object sender, EventArgs e)
        {
            fiyat = 12;
            fiyatArttir();
            sayac[2]++;
            if (sepetTutari != 0)
            {
                btnE2.Enabled = true;
            }
            else
            {
                btnE2.Enabled = false;
            }
        }

        private void btnE2_Click(object sender, EventArgs e)
        {
            fiyat = 12;
            if (sayac[2] > 0)
            {
                fiyatEksilt();
                sayac[2]--;
            }
            if (sepetTutari <= 0 || sayac[2] == 0)
            {
                btnE2.Enabled = false;
            }
            else
            {
                btnE2.Enabled = true;
            }
        }

        private void btnA3_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            fiyatArttir();
            sayac[3]++;
            if (sepetTutari != 0)
            {
                btnE3.Enabled = true;
            }
            else
            {
                btnE3.Enabled = false;
            }
        }

        private void btnE3_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            if (sayac[3] > 0)
            {
                fiyatEksilt();
                sayac[3]--;
            }
            if (sepetTutari <= 0 || sayac[3] == 0)
            {
                btnE3.Enabled = false;
            }
            else
            {
                btnE3.Enabled = true;
            }
        }

        private void btnA4_Click(object sender, EventArgs e)
        {
            fiyat = 9;
            fiyatArttir();
            sayac[4]++;
            if (sepetTutari != 0)
            {
                btnE4.Enabled = true;
            }
            else
            {
                btnE4.Enabled = false;
            }
        }

        private void btnE4_Click(object sender, EventArgs e)
        {
            fiyat = 9;
            if (sayac[4] > 0)
            {
                fiyatEksilt();
                sayac[4]--;
            }
            if (sepetTutari <= 0 || sayac[4] == 0)
            {
                btnE4.Enabled = false;
            }
            else
            {
                btnE4.Enabled = true;
            }
        }

        private void btnA5_Click(object sender, EventArgs e)
        {
            fiyat = 18;
            fiyatArttir();
            sayac[5]++;
            if (sepetTutari != 0)
            {
                btnE5.Enabled = true;
            }
            else
            {
                btnE5.Enabled = false;
            }
        }

        private void btnE5_Click(object sender, EventArgs e)
        {
            fiyat = 18;
            if (sayac[5] > 0)
            {
                fiyatEksilt();
                sayac[5]--;
            }
            if (sepetTutari <= 0 || sayac[5] == 0)
            {
                btnE5.Enabled = false;
            }
            else
            {
                btnE5.Enabled = true;
            }
        }

        private void btnA6_Click(object sender, EventArgs e)
        {
            fiyat = 20;
            fiyatArttir();
            sayac[6]++;
            if (sepetTutari != 0)
            {
                btnE6.Enabled = true;
            }
            else
            {
                btnE6.Enabled = false;
            }
        }

        private void btnE6_Click(object sender, EventArgs e)
        {
            fiyat = 20;
            if (sayac[6] > 0)
            {
                fiyatEksilt();
                sayac[6]--;
            }
            if (sepetTutari <= 0 || sayac[6] == 0)
            {
                btnE6.Enabled = false;
            }
            else
            {
                btnE6.Enabled = true;
            }
        }

        private void btnA7_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            fiyatArttir();
            sayac[7]++;
            if (sepetTutari != 0)
            {
                btnE7.Enabled = true;
            }
            else
            {
                btnE7.Enabled = false;
            }
        }

        private void btnE7_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            if (sayac[7] > 0)
            {
                fiyatEksilt();
                sayac[7]--;
            }
            if (sepetTutari <= 0 || sayac[7] == 0)
            {
                btnE7.Enabled = false;
            }
            else
            {
                btnE7.Enabled = true;
            }
        }

        private void btnA8_Click(object sender, EventArgs e)
        {
            fiyat = 23;
            fiyatArttir();
            sayac[8]++;
            if (sepetTutari != 0)
            {
                btnE8.Enabled = true;
            }
            else
            {
                btnE8.Enabled = false;
            }
        }

        private void btnE8_Click(object sender, EventArgs e)
        {
            fiyat = 23;
            if (sayac[8] > 0)
            {
                fiyatEksilt();
                sayac[8]--;
            }
            if (sepetTutari <= 0 || sayac[8] == 0)
            {
                btnE8.Enabled = false;
            }
            else
            {
                btnE8.Enabled = true;
            }
        }

        private void btnA9_Click(object sender, EventArgs e)
        {
            fiyat = 12;
            fiyatArttir();
            sayac[9]++;
            if (sepetTutari != 0)
            {
                btnE9.Enabled = true;
            }
            else
            {
                btnE9.Enabled = false;
            }
        }

        private void btnE9_Click(object sender, EventArgs e)
        {
            fiyat = 12;
            if (sayac[9] > 0)
            {
                fiyatEksilt();
                sayac[9]--;
            }
            if (sepetTutari <= 0 || sayac[9] == 0)
            {
                btnE9.Enabled = false;
            }
            else
            {
                btnE9.Enabled = true;
            }
        }

        private void btnA10_Click(object sender, EventArgs e)
        {
            fiyat = 10;
            fiyatArttir();
            sayac[10]++;
            if (sepetTutari != 0)
            {
                btnE10.Enabled = true;
            }
            else
            {
                btnE10.Enabled = false;
            }
        }

        private void btnE10_Click(object sender, EventArgs e)
        {
            fiyat = 10;
            if (sayac[10] > 0)
            {
                fiyatEksilt();
                sayac[10]--;
            }
            if (sepetTutari <= 0 || sayac[10] == 0)
            {
                btnE10.Enabled = false;
            }
            else
            {
                btnE10.Enabled = true;
            }
        }

        private void btnA11_Click(object sender, EventArgs e)
        {
            fiyat = 15;
            fiyatArttir();
            sayac[11]++;
            if (sepetTutari != 0)
            {
                btnE11.Enabled = true;
            }
            else
            {
                btnE11.Enabled = false;
            }
        }

        private void btnE11_Click(object sender, EventArgs e)
        {
            fiyat = 15;
            if (sayac[11] > 0)
            {
                fiyatEksilt();
                sayac[11]--;
            }
            if (sepetTutari <= 0 || sayac[11] == 0)
            {
                btnE11.Enabled = false;
            }
            else
            {
                btnE11.Enabled = true;
            }
        }

        private void btnA12_Click(object sender, EventArgs e)
        {
            fiyat = 7;
            fiyatArttir();
            sayac[12]++;
            if (sepetTutari != 0)
            {
                btnE12.Enabled = true;
            }
            else
            {
                btnE12.Enabled = false;
            }
        }

        private void btnE12_Click(object sender, EventArgs e)
        {
            fiyat = 7;
            if (sayac[12] > 0)
            {
                fiyatEksilt();
                sayac[12]--;
            }
            if (sepetTutari <= 0 || sayac[12] == 0)
            {
                btnE12.Enabled = false;
            }
            else
            {
                btnE12.Enabled = true;
            }
        }

        private void btnA13_Click(object sender, EventArgs e)
        {
            fiyat = 8;
            fiyatArttir();
            sayac[13]++;
            if (sepetTutari != 0)
            {
                btnE13.Enabled = true;
            }
            else
            {
                btnE13.Enabled = false;
            }
        }

        private void btnE13_Click(object sender, EventArgs e)
        {
            fiyat = 8;
            if (sayac[13] > 0)
            {
                fiyatEksilt();
                sayac[13]--;
            }
            if (sepetTutari <= 0 || sayac[13] == 0)
            {
                btnE13.Enabled = false;
            }
            else
            {
                btnE13.Enabled = true;
            }
        }

        private void btnA14_Click(object sender, EventArgs e)
        {
            fiyat = 17;
            fiyatArttir();
            sayac[14]++;
            if (sepetTutari != 0)
            {
                btnE14.Enabled = true;
            }
            else
            {
                btnE14.Enabled = false;
            }
        }

        private void btnE14_Click(object sender, EventArgs e)
        {
            fiyat = 17;
            if (sayac[14] > 0)
            {
                fiyatEksilt();
                sayac[14]--;
            }
            if (sepetTutari <= 0 || sayac[14] == 0)
            {
                btnE14.Enabled = false;
            }
            else
            {
                btnE14.Enabled = true;
            }
        }

        private void btnA15_Click(object sender, EventArgs e)
        {
            fiyat = 13;
            fiyatArttir();
            sayac[15]++;
            if (sepetTutari != 0)
            {
                btnE15.Enabled = true;
            }
            else
            {
                btnE15.Enabled = false;
            }
        }

        private void btnE15_Click(object sender, EventArgs e)
        {
            fiyat = 13;
            if (sayac[15] > 0)
            {
                fiyatEksilt();
                sayac[15]--;
            }
            if (sepetTutari <= 0 || sayac[15] == 0)
            {
                btnE15.Enabled = false;
            }
            else
            {
                btnE15.Enabled = true;
            }
        }

        private void btnA16_Click(object sender, EventArgs e)
        {
            fiyat = 21;
            fiyatArttir();
            sayac[16]++;
            if (sepetTutari != 0)
            {
                btnE16.Enabled = true;
            }
            else
            {
                btnE16.Enabled = false;
            }
        }

        private void btnE16_Click(object sender, EventArgs e)
        {
            fiyat = 21;
            if (sayac[16] > 0)
            {
                fiyatEksilt();
                sayac[16]--;
            }
            if (sepetTutari <= 0 || sayac[16] == 0)
            {
                btnE16.Enabled = false;
            }
            else
            {
                btnE16.Enabled = true;
            }
        }

        private void btnA17_Click(object sender, EventArgs e)
        {
            fiyat = 16;
            fiyatArttir();
            sayac[17]++;
            if (sepetTutari != 0)
            {
                btnE17.Enabled = true;
            }
            else
            {
                btnE17.Enabled = false;
            }
        }

        private void btnE17_Click(object sender, EventArgs e)
        {
            fiyat = 16;
            if (sayac[17] > 0)
            {
                fiyatEksilt();
                sayac[17]--;
            }
            if (sepetTutari <= 0 || sayac[17] == 0)
            {
                btnE17.Enabled = false;
            }
            else
            {
                btnE17.Enabled = true;
            }
        }

        private void btnA18_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            fiyatArttir();
            sayac[18]++;
            if (sepetTutari != 0)
            {
                btnE18.Enabled = true;
            }
            else
            {
                btnE18.Enabled = false;
            }
        }

        private void btnE18_Click(object sender, EventArgs e)
        {
            fiyat = 14;
            if (sayac[18] > 0)
            {
                fiyatEksilt();
                sayac[18]--;
            }
            if (sepetTutari <= 0 || sayac[18] == 0)
            {
                btnE18.Enabled = false;
            }
            else
            {
                btnE18.Enabled = true;
            }
        }
    }
}
