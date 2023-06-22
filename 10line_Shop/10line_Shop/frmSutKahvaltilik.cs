using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _10line_Shop
{
    public partial class frmSutKahvaltilik : Form
    {
        private string uyeIdParametre;
        private string adSoyadParametre;

        public frmSutKahvaltilik(string uyeId, string adSoyad)
        {
            InitializeComponent();
            uyeIdParametre = uyeId;
            adSoyadParametre = adSoyad;
        }

        private void btnGeri_Click(object sender, EventArgs e)
        {
            frmAnaEkran fr = new frmAnaEkran(adSoyadParametre, uyeIdParametre);
            fr.Show();
            this.Hide();
        }

        private void btnSepet_Click(object sender, EventArgs e)
        {
            frmSepet fr = new frmSepet(uyeIdParametre,adSoyadParametre);
            fr.Show();
            this.Hide();
        }
    }
}
