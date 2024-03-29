USE [master]
GO
/****** Object:  Database [10lineShop]    Script Date: 15.11.2023 02:22:36 ******/
CREATE DATABASE [10lineShop]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'10lineShop', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\10lineShop.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'10lineShop_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\10lineShop_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT, LEDGER = OFF
GO
ALTER DATABASE [10lineShop] SET COMPATIBILITY_LEVEL = 160
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [10lineShop].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [10lineShop] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [10lineShop] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [10lineShop] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [10lineShop] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [10lineShop] SET ARITHABORT OFF 
GO
ALTER DATABASE [10lineShop] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [10lineShop] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [10lineShop] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [10lineShop] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [10lineShop] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [10lineShop] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [10lineShop] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [10lineShop] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [10lineShop] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [10lineShop] SET  DISABLE_BROKER 
GO
ALTER DATABASE [10lineShop] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [10lineShop] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [10lineShop] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [10lineShop] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [10lineShop] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [10lineShop] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [10lineShop] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [10lineShop] SET RECOVERY FULL 
GO
ALTER DATABASE [10lineShop] SET  MULTI_USER 
GO
ALTER DATABASE [10lineShop] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [10lineShop] SET DB_CHAINING OFF 
GO
ALTER DATABASE [10lineShop] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [10lineShop] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [10lineShop] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [10lineShop] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
EXEC sys.sp_db_vardecimal_storage_format N'10lineShop', N'ON'
GO
ALTER DATABASE [10lineShop] SET QUERY_STORE = ON
GO
ALTER DATABASE [10lineShop] SET QUERY_STORE (OPERATION_MODE = READ_WRITE, CLEANUP_POLICY = (STALE_QUERY_THRESHOLD_DAYS = 30), DATA_FLUSH_INTERVAL_SECONDS = 900, INTERVAL_LENGTH_MINUTES = 60, MAX_STORAGE_SIZE_MB = 1000, QUERY_CAPTURE_MODE = AUTO, SIZE_BASED_CLEANUP_MODE = AUTO, MAX_PLANS_PER_QUERY = 200, WAIT_STATS_CAPTURE_MODE = ON)
GO
USE [10lineShop]
GO
/****** Object:  Table [dbo].[Tbl_Sepet]    Script Date: 15.11.2023 02:22:37 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Tbl_Sepet](
	[id] [int] NOT NULL,
	[UyeId] [int] NULL,
	[toplam] [nvarchar](10) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Tbl_UyeAdres]    Script Date: 15.11.2023 02:22:37 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Tbl_UyeAdres](
	[Id] [int] IDENTITY(1,1) NOT NULL,
	[UyeId] [int] NOT NULL,
	[Adres] [nvarchar](100) NULL,
	[AdresBaslik] [nvarchar](20) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Tbl_UyeKart]    Script Date: 15.11.2023 02:22:37 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Tbl_UyeKart](
	[Id] [int] IDENTITY(1,1) NOT NULL,
	[UyeId] [int] NULL,
	[KartAdSoyad] [nvarchar](20) NULL,
	[KartNo] [nvarchar](20) NULL,
	[KartSktAy] [nvarchar](5) NULL,
	[KartSktYil] [nvarchar](5) NULL,
	[KartCvv] [nvarchar](3) NULL,
	[KartBaslik] [nvarchar](20) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Tbl_Uyeler]    Script Date: 15.11.2023 02:22:37 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Tbl_Uyeler](
	[Uyeid] [int] IDENTITY(1,1) NOT NULL,
	[UyeAdSoyad] [varchar](20) NULL,
	[UyeTelNo] [varchar](20) NULL,
	[UyeSifre] [varchar](20) NULL,
 CONSTRAINT [PK_Tbl_Uyeler_1] PRIMARY KEY CLUSTERED 
(
	[Uyeid] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
INSERT [dbo].[Tbl_Sepet] ([id], [UyeId], [toplam]) VALUES (1, 14, N'0')
GO
SET IDENTITY_INSERT [dbo].[Tbl_UyeAdres] ON 

INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (1, 1, N'Zeytinköy Mah. 5021.Sok. Başkaya Apt. No:3 Kat:3 Daire:12 Zeytinköy/Pamukkale/Denizli', N'Ev Adresi')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (18, 7, N'1.Sakarya Mah. Karesi/Balıkesir', N'Ev')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (8, 1, N'asmalıevler mah', N'Arkadaş')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (9, 3, N'asmalıevler mah', NULL)
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (11, 2, N'Osmanköy/İvrindi', N'Köy Evi')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (21, 6, N'zeytinköy', N'ev')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (29, 11, N'İvrindi', N'Ev')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (31, 12, N'İstanbul', N'ev')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (33, 14, N'Asmalıevler Mah', N'Ev')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (34, 14, N'Zeytinköy Mah', N'Bahçe')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (10, 2, N'İvrindi/Balıkesir', N'Evim')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (17, 1, N'ivrindi', N'Memleket')
INSERT [dbo].[Tbl_UyeAdres] ([Id], [UyeId], [Adres], [AdresBaslik]) VALUES (19, 8, N'Bandırma/Balıkesir', N'Ev')
SET IDENTITY_INSERT [dbo].[Tbl_UyeAdres] OFF
GO
SET IDENTITY_INSERT [dbo].[Tbl_UyeKart] ON 

INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (1, 1, N'Berkay Özenel', N'1234-4567-7891-2345', N'03', N'29', N'153', N'Kredi Kartı')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (2, 1, N'Mustafa Özenel', N'9876-6543-3219-8765', N'08', N'32', N'759', N'Babamın Kartı')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (6, 3, N'Cihan Atik', N'1472-5836-9147-2583', NULL, NULL, N'203', NULL)
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (4, 1, N'Fatma Özenel', N'4758-5869-6914-1456', N'10', N'23', N'789', N'Annemin Kartı')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (12, 6, N'anıl akhan', N'5454-5444-5545-5454', NULL, NULL, N'325', N'kredi')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (5, 2, N'Mustafa Özenel', N'1234-5678-9123-4567', N'06', N'29', N'258', N'Banka Kartı')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (9, 7, N'Ömer Özer', N'4562-1532-8496-4321', NULL, NULL, N'625', N'Ziraat')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (10, 8, N'Neslihan Sertesen', N'4568-9855-3269-8532', NULL, NULL, N'654', N'Kredi')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (13, 1, N'Bilal Özenel', N'7896-6442-5563-1564', N'06', N'30', N'333', N'abim')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (18, 11, N'Fatma Özenel', N'1212-5454-4885-1454', N'05', N'29', N'555', N'Kredi Kartı')
INSERT [dbo].[Tbl_UyeKart] ([Id], [UyeId], [KartAdSoyad], [KartNo], [KartSktAy], [KartSktYil], [KartCvv], [KartBaslik]) VALUES (19, 14, N'Berkay Özenel', N'1234-5678-7945-1365', N'07', N'29', N'654', N'Banka Kartım')
SET IDENTITY_INSERT [dbo].[Tbl_UyeKart] OFF
GO
SET IDENTITY_INSERT [dbo].[Tbl_Uyeler] ON 

INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (1, N'Berkay Özenel', N'(542) 181-1530', N'21220002')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (2, N'Mustafa Özenel', N'(543) 717-6789', N'mustafa123')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (3, N'Cihan Atik', N'(542) 359-7566', N'cio1010')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (5, N'Batuhan Gölcük', N'(554) 139-1304', N'batu123')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (6, N'Anıl Akhan', N'(530) 650-3118', N'2132079')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (7, N'Ömer Özer', N'(545) 822-1531', N'1907')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (8, N'Neslihan Sertesen', N'(542) 545-9874', N'21220007')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (9, N'Anıl Akhan', N'(530) 650-3118', N'2023')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (10, N'Anıl Akhan', N'(530) 650-3118', N'2024')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (11, N'Fatma Özenel', N'(541) 589-7329', N'fatma123')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (12, N'Muhammet Akdemir', N'(531) 944-9625', N'mami123')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (13, N'Berkay Özenel', N'(512) 456-789', N'deneme123')
INSERT [dbo].[Tbl_Uyeler] ([Uyeid], [UyeAdSoyad], [UyeTelNo], [UyeSifre]) VALUES (14, N'Berkay Özenel', N'(512) 345-6789', N'deneme1234')
SET IDENTITY_INSERT [dbo].[Tbl_Uyeler] OFF
GO
ALTER TABLE [dbo].[Tbl_Sepet]  WITH CHECK ADD  CONSTRAINT [FK_Tbl_Sepet_Tbl_Uyeler] FOREIGN KEY([UyeId])
REFERENCES [dbo].[Tbl_Uyeler] ([Uyeid])
GO
ALTER TABLE [dbo].[Tbl_Sepet] CHECK CONSTRAINT [FK_Tbl_Sepet_Tbl_Uyeler]
GO
ALTER TABLE [dbo].[Tbl_UyeAdres]  WITH CHECK ADD  CONSTRAINT [FK_Tbl_UyeAdres_Tbl_Uyeler] FOREIGN KEY([UyeId])
REFERENCES [dbo].[Tbl_Uyeler] ([Uyeid])
GO
ALTER TABLE [dbo].[Tbl_UyeAdres] CHECK CONSTRAINT [FK_Tbl_UyeAdres_Tbl_Uyeler]
GO
ALTER TABLE [dbo].[Tbl_UyeKart]  WITH CHECK ADD  CONSTRAINT [FK_Tbl_UyeKart_Tbl_Uyeler] FOREIGN KEY([UyeId])
REFERENCES [dbo].[Tbl_Uyeler] ([Uyeid])
GO
ALTER TABLE [dbo].[Tbl_UyeKart] CHECK CONSTRAINT [FK_Tbl_UyeKart_Tbl_Uyeler]
GO
USE [master]
GO
ALTER DATABASE [10lineShop] SET  READ_WRITE 
GO
