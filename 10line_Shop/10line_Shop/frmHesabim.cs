using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace _10line_Shop
{
    public partial class frmHesabim : Form
    {
        private string uyeIdParametre;
        public frmHesabim(string uyeId)
        {
            InitializeComponent();
            uyeIdParametre = uyeId;
        }
        sqlbaglantisi bgl = new sqlbaglantisi();
        public void AdSoyad(string adSoyad)
        {
            lblAdSoyad.Text = adSoyad;
           
        }

        private void btnAdresler_Click(object sender, EventArgs e)
        {
            frmAdreslerim fr = new frmAdreslerim(uyeIdParametre);
            fr.Show();
        }

        private void btnKartlar_Click(object sender, EventArgs e)
        {
            frmKartlarim fr = new frmKartlarim(uyeIdParametre);
            fr.Show();
        }

        private void btnHesapAyarlari_Click(object sender, EventArgs e)
        {
            frmHesapAyarlarim fr = new frmHesapAyarlarim(uyeIdParametre);
            fr.Show();
        }

        private void btnCikisYap_Click(object sender, EventArgs e)
        {
            frmAcilis fr = new frmAcilis();
            fr.Show();
            this.Hide();
            Form frmAnaEkran = Application.OpenForms["frmAnaEkran"]; // Application.OpenForms koleksiyonu kullanarak "frmAnaEkran" formunu aradık.
            if(frmAnaEkran != null)
            {
                frmAnaEkran.Close(); //form bulunduktan sonra kapattık.
            }
        }
    }
}
