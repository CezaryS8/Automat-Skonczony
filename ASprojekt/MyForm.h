#pragma once


namespace ASprojekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		int i = 0;
		char q = '3';
	private: System::Windows::Forms::Label^ errShow;
	private: System::Windows::Forms::Label^ aLabel;
	private: System::Windows::Forms::Label^ startLabel;




	private: System::Windows::Forms::PictureBox^ koncowy3;








	private: System::Windows::Forms::PictureBox^ koncowy2;



	private: System::Windows::Forms::PictureBox^ koncowy0;



	private: System::Windows::Forms::PictureBox^ koncowy1;
	private: System::Windows::Forms::PictureBox^ round1;
	private: System::Windows::Forms::PictureBox^ round2;
	private: System::Windows::Forms::PictureBox^ round3;
	private: System::Windows::Forms::Label^ q3;
	private: System::Windows::Forms::Label^ q2;
	private: System::Windows::Forms::Label^ q1;
	private: System::Windows::Forms::PictureBox^ round0;
	private: System::Windows::Forms::Label^ q0;




	public:
		char F = '2';
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ startButton;
	protected:

	protected:












	private: System::Windows::Forms::TextBox^ inputTextBox;
	private: System::Windows::Forms::PictureBox^ arrowUpq0q1;

	private: System::Windows::Forms::PictureBox^ arrowBottomq3q2;
	private: System::Windows::Forms::PictureBox^ arrowRightq1q3;
	private: System::Windows::Forms::PictureBox^ arrowRightq0q2;






	private: System::Windows::Forms::PictureBox^ arrowLeftq2q0;
	private: System::Windows::Forms::PictureBox^ arrowLeftq3q1;


	private: System::Windows::Forms::PictureBox^ arrowBottomq1q0;
	private: System::Windows::Forms::PictureBox^ arrowUpq2q3;



	private: System::Windows::Forms::Label^ q1q3;
	private: System::Windows::Forms::Label^ q3q1;
	private: System::Windows::Forms::Label^ q0q2;


	private: System::Windows::Forms::Label^ q2q0;

	private: System::Windows::Forms::Label^ q3q2;
	private: System::Windows::Forms::Label^ q1q0;


	private: System::Windows::Forms::Label^ q2q3;
	private: System::Windows::Forms::Label^ q0q1;



	private: System::Windows::Forms::Label^ komunikatPole;



	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arrowUpq0q1 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowBottomq3q2 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowRightq1q3 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowRightq0q2 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowLeftq2q0 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowLeftq3q1 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowBottomq1q0 = (gcnew System::Windows::Forms::PictureBox());
			this->arrowUpq2q3 = (gcnew System::Windows::Forms::PictureBox());
			this->q1q3 = (gcnew System::Windows::Forms::Label());
			this->q3q1 = (gcnew System::Windows::Forms::Label());
			this->q0q2 = (gcnew System::Windows::Forms::Label());
			this->q2q0 = (gcnew System::Windows::Forms::Label());
			this->q3q2 = (gcnew System::Windows::Forms::Label());
			this->q1q0 = (gcnew System::Windows::Forms::Label());
			this->q2q3 = (gcnew System::Windows::Forms::Label());
			this->q0q1 = (gcnew System::Windows::Forms::Label());
			this->komunikatPole = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->errShow = (gcnew System::Windows::Forms::Label());
			this->aLabel = (gcnew System::Windows::Forms::Label());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			this->koncowy3 = (gcnew System::Windows::Forms::PictureBox());
			this->koncowy2 = (gcnew System::Windows::Forms::PictureBox());
			this->koncowy0 = (gcnew System::Windows::Forms::PictureBox());
			this->koncowy1 = (gcnew System::Windows::Forms::PictureBox());
			this->round1 = (gcnew System::Windows::Forms::PictureBox());
			this->round2 = (gcnew System::Windows::Forms::PictureBox());
			this->round3 = (gcnew System::Windows::Forms::PictureBox());
			this->q3 = (gcnew System::Windows::Forms::Label());
			this->q2 = (gcnew System::Windows::Forms::Label());
			this->q1 = (gcnew System::Windows::Forms::Label());
			this->round0 = (gcnew System::Windows::Forms::PictureBox());
			this->q0 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowUpq0q1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowBottomq3q2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowRightq1q3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowRightq0q2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowLeftq2q0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowLeftq3q1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowBottomq1q0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowUpq2q3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round0))->BeginInit();
			this->SuspendLayout();
			// 
			// startButton
			// 
			this->startButton->Location = System::Drawing::Point(564, 487);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(226, 48);
			this->startButton->TabIndex = 5;
			this->startButton->Text = L"Uruchom";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->inputTextBox->Location = System::Drawing::Point(60, 376);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(730, 38);
			this->inputTextBox->TabIndex = 10;
			// 
			// arrowUpq0q1
			// 
			this->arrowUpq0q1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowUpq0q1.Image")));
			this->arrowUpq0q1->Location = System::Drawing::Point(338, 7);
			this->arrowUpq0q1->Name = L"arrowUpq0q1";
			this->arrowUpq0q1->Size = System::Drawing::Size(133, 83);
			this->arrowUpq0q1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowUpq0q1->TabIndex = 11;
			this->arrowUpq0q1->TabStop = false;
			// 
			// arrowBottomq3q2
			// 
			this->arrowBottomq3q2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowBottomq3q2.Image")));
			this->arrowBottomq3q2->Location = System::Drawing::Point(338, 262);
			this->arrowBottomq3q2->Name = L"arrowBottomq3q2";
			this->arrowBottomq3q2->Size = System::Drawing::Size(133, 83);
			this->arrowBottomq3q2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowBottomq3q2->TabIndex = 14;
			this->arrowBottomq3q2->TabStop = false;
			// 
			// arrowRightq1q3
			// 
			this->arrowRightq1q3->AccessibleRole = System::Windows::Forms::AccessibleRole::Clock;
			this->arrowRightq1q3->BackColor = System::Drawing::Color::Transparent;
			this->arrowRightq1q3->Cursor = System::Windows::Forms::Cursors::Default;
			this->arrowRightq1q3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowRightq1q3.Image")));
			this->arrowRightq1q3->Location = System::Drawing::Point(498, 124);
			this->arrowRightq1q3->Name = L"arrowRightq1q3";
			this->arrowRightq1q3->Size = System::Drawing::Size(99, 117);
			this->arrowRightq1q3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowRightq1q3->TabIndex = 15;
			this->arrowRightq1q3->TabStop = false;
			this->arrowRightq1q3->WaitOnLoad = true;
			// 
			// arrowRightq0q2
			// 
			this->arrowRightq0q2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowRightq0q2.Image")));
			this->arrowRightq0q2->Location = System::Drawing::Point(277, 124);
			this->arrowRightq0q2->Name = L"arrowRightq0q2";
			this->arrowRightq0q2->Size = System::Drawing::Size(99, 117);
			this->arrowRightq0q2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowRightq0q2->TabIndex = 16;
			this->arrowRightq0q2->TabStop = false;
			// 
			// arrowLeftq2q0
			// 
			this->arrowLeftq2q0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowLeftq2q0.Image")));
			this->arrowLeftq2q0->Location = System::Drawing::Point(213, 124);
			this->arrowLeftq2q0->Name = L"arrowLeftq2q0";
			this->arrowLeftq2q0->Size = System::Drawing::Size(99, 117);
			this->arrowLeftq2q0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowLeftq2q0->TabIndex = 17;
			this->arrowLeftq2q0->TabStop = false;
			// 
			// arrowLeftq3q1
			// 
			this->arrowLeftq3q1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowLeftq3q1.Image")));
			this->arrowLeftq3q1->Location = System::Drawing::Point(434, 124);
			this->arrowLeftq3q1->Name = L"arrowLeftq3q1";
			this->arrowLeftq3q1->Size = System::Drawing::Size(99, 117);
			this->arrowLeftq3q1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowLeftq3q1->TabIndex = 18;
			this->arrowLeftq3q1->TabStop = false;
			// 
			// arrowBottomq1q0
			// 
			this->arrowBottomq1q0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowBottomq1q0.Image")));
			this->arrowBottomq1q0->Location = System::Drawing::Point(338, 65);
			this->arrowBottomq1q0->Name = L"arrowBottomq1q0";
			this->arrowBottomq1q0->Size = System::Drawing::Size(133, 83);
			this->arrowBottomq1q0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowBottomq1q0->TabIndex = 19;
			this->arrowBottomq1q0->TabStop = false;
			// 
			// arrowUpq2q3
			// 
			this->arrowUpq2q3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arrowUpq2q3.Image")));
			this->arrowUpq2q3->Location = System::Drawing::Point(338, 201);
			this->arrowUpq2q3->Name = L"arrowUpq2q3";
			this->arrowUpq2q3->Size = System::Drawing::Size(133, 83);
			this->arrowUpq2q3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->arrowUpq2q3->TabIndex = 20;
			this->arrowUpq2q3->TabStop = false;
			// 
			// q1q3
			// 
			this->q1q3->AutoSize = true;
			this->q1q3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q1q3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q1q3->Location = System::Drawing::Point(525, 137);
			this->q1q3->Name = L"q1q3";
			this->q1q3->Size = System::Drawing::Size(18, 20);
			this->q1q3->TabIndex = 21;
			this->q1q3->Text = L"0";
			// 
			// q3q1
			// 
			this->q3q1->AutoSize = true;
			this->q3q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q3q1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q3q1->Location = System::Drawing::Point(453, 197);
			this->q3q1->Name = L"q3q1";
			this->q3q1->Size = System::Drawing::Size(18, 20);
			this->q3q1->TabIndex = 22;
			this->q3q1->Text = L"0";
			// 
			// q0q2
			// 
			this->q0q2->AutoSize = true;
			this->q0q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q0q2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q0q2->Location = System::Drawing::Point(304, 137);
			this->q0q2->Name = L"q0q2";
			this->q0q2->Size = System::Drawing::Size(18, 20);
			this->q0q2->TabIndex = 23;
			this->q0q2->Text = L"0";
			// 
			// q2q0
			// 
			this->q2q0->AutoSize = true;
			this->q2q0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q2q0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q2q0->Location = System::Drawing::Point(230, 197);
			this->q2q0->Name = L"q2q0";
			this->q2q0->Size = System::Drawing::Size(18, 20);
			this->q2q0->TabIndex = 24;
			this->q2q0->Text = L"0";
			// 
			// q3q2
			// 
			this->q3q2->AutoSize = true;
			this->q3q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q3q2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q3q2->Location = System::Drawing::Point(439, 276);
			this->q3q2->Name = L"q3q2";
			this->q3q2->Size = System::Drawing::Size(18, 20);
			this->q3q2->TabIndex = 25;
			this->q3q2->Text = L"1";
			// 
			// q1q0
			// 
			this->q1q0->AutoSize = true;
			this->q1q0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q1q0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q1q0->Location = System::Drawing::Point(439, 76);
			this->q1q0->Name = L"q1q0";
			this->q1q0->Size = System::Drawing::Size(18, 20);
			this->q1q0->TabIndex = 26;
			this->q1q0->Text = L"1";
			// 
			// q2q3
			// 
			this->q2q3->AutoSize = true;
			this->q2q3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q2q3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q2q3->Location = System::Drawing::Point(358, 207);
			this->q2q3->Name = L"q2q3";
			this->q2q3->Size = System::Drawing::Size(18, 20);
			this->q2q3->TabIndex = 27;
			this->q2q3->Text = L"1";
			// 
			// q0q1
			// 
			this->q0q1->AutoSize = true;
			this->q0q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->q0q1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q0q1->Location = System::Drawing::Point(358, 17);
			this->q0q1->Name = L"q0q1";
			this->q0q1->Size = System::Drawing::Size(18, 20);
			this->q0q1->TabIndex = 28;
			this->q0q1->Text = L"1";
			// 
			// komunikatPole
			// 
			this->komunikatPole->AutoSize = true;
			this->komunikatPole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->komunikatPole->Location = System::Drawing::Point(71, 504);
			this->komunikatPole->Name = L"komunikatPole";
			this->komunikatPole->Size = System::Drawing::Size(0, 31);
			this->komunikatPole->TabIndex = 29;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// errShow
			// 
			this->errShow->AutoSize = true;
			this->errShow->Location = System::Drawing::Point(87, 343);
			this->errShow->Name = L"errShow";
			this->errShow->Size = System::Drawing::Size(0, 13);
			this->errShow->TabIndex = 30;
			// 
			// aLabel
			// 
			this->aLabel->AutoSize = true;
			this->aLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->aLabel->Location = System::Drawing::Point(12, 379);
			this->aLabel->Name = L"aLabel";
			this->aLabel->Size = System::Drawing::Size(40, 31);
			this->aLabel->TabIndex = 31;
			this->aLabel->Text = L"A:";
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->startLabel->Location = System::Drawing::Point(569, 265);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(102, 31);
			this->startLabel->TabIndex = 32;
			this->startLabel->Text = L"← start";
			// 
			// koncowy3
			// 
			this->koncowy3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"koncowy3.Image")));
			this->koncowy3->Location = System::Drawing::Point(477, 238);
			this->koncowy3->Name = L"koncowy3";
			this->koncowy3->Size = System::Drawing::Size(86, 86);
			this->koncowy3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->koncowy3->TabIndex = 38;
			this->koncowy3->TabStop = false;
			// 
			// koncowy2
			// 
			this->koncowy2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"koncowy2.Image")));
			this->koncowy2->Location = System::Drawing::Point(250, 238);
			this->koncowy2->Name = L"koncowy2";
			this->koncowy2->Size = System::Drawing::Size(86, 86);
			this->koncowy2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->koncowy2->TabIndex = 44;
			this->koncowy2->TabStop = false;
			// 
			// koncowy0
			// 
			this->koncowy0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"koncowy0.Image")));
			this->koncowy0->Location = System::Drawing::Point(250, 35);
			this->koncowy0->Name = L"koncowy0";
			this->koncowy0->Size = System::Drawing::Size(86, 86);
			this->koncowy0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->koncowy0->TabIndex = 46;
			this->koncowy0->TabStop = false;
			// 
			// koncowy1
			// 
			this->koncowy1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"koncowy1.Image")));
			this->koncowy1->Location = System::Drawing::Point(477, 35);
			this->koncowy1->Name = L"koncowy1";
			this->koncowy1->Size = System::Drawing::Size(86, 86);
			this->koncowy1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->koncowy1->TabIndex = 48;
			this->koncowy1->TabStop = false;
			// 
			// round1
			// 
			this->round1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"round1.Image")));
			this->round1->Location = System::Drawing::Point(477, 35);
			this->round1->Name = L"round1";
			this->round1->Size = System::Drawing::Size(86, 86);
			this->round1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->round1->TabIndex = 50;
			this->round1->TabStop = false;
			// 
			// round2
			// 
			this->round2->BackColor = System::Drawing::Color::Transparent;
			this->round2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"round2.Image")));
			this->round2->Location = System::Drawing::Point(250, 238);
			this->round2->Name = L"round2";
			this->round2->Size = System::Drawing::Size(86, 86);
			this->round2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->round2->TabIndex = 51;
			this->round2->TabStop = false;
			// 
			// round3
			// 
			this->round3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"round3.Image")));
			this->round3->Location = System::Drawing::Point(477, 238);
			this->round3->Name = L"round3";
			this->round3->Size = System::Drawing::Size(86, 86);
			this->round3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->round3->TabIndex = 52;
			this->round3->TabStop = false;
			this->round3->Visible = false;
			// 
			// q3
			// 
			this->q3->AutoSize = true;
			this->q3->BackColor = System::Drawing::Color::White;
			this->q3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->q3->ForeColor = System::Drawing::Color::Red;
			this->q3->Location = System::Drawing::Point(499, 262);
			this->q3->Name = L"q3";
			this->q3->Size = System::Drawing::Size(44, 31);
			this->q3->TabIndex = 53;
			this->q3->Text = L"q3";
			// 
			// q2
			// 
			this->q2->AutoSize = true;
			this->q2->BackColor = System::Drawing::Color::Transparent;
			this->q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->q2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q2->Location = System::Drawing::Point(271, 262);
			this->q2->Name = L"q2";
			this->q2->Size = System::Drawing::Size(44, 31);
			this->q2->TabIndex = 54;
			this->q2->Text = L"q2";
			// 
			// q1
			// 
			this->q1->AutoSize = true;
			this->q1->BackColor = System::Drawing::Color::Transparent;
			this->q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->q1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q1->Location = System::Drawing::Point(499, 59);
			this->q1->Name = L"q1";
			this->q1->Size = System::Drawing::Size(44, 31);
			this->q1->TabIndex = 56;
			this->q1->Text = L"q1";
			// 
			// round0
			// 
			this->round0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"round0.Image")));
			this->round0->Location = System::Drawing::Point(250, 35);
			this->round0->Name = L"round0";
			this->round0->Size = System::Drawing::Size(86, 86);
			this->round0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->round0->TabIndex = 57;
			this->round0->TabStop = false;
			// 
			// q0
			// 
			this->q0->AutoSize = true;
			this->q0->BackColor = System::Drawing::Color::Transparent;
			this->q0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->q0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->q0->Location = System::Drawing::Point(271, 59);
			this->q0->Name = L"q0";
			this->q0->Size = System::Drawing::Size(44, 31);
			this->q0->TabIndex = 58;
			this->q0->Text = L"q0";
			this->q0->Click += gcnew System::EventHandler(this, &MyForm::q0_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(819, 568);
			this->Controls->Add(this->q3);
			this->Controls->Add(this->q0);
			this->Controls->Add(this->round0);
			this->Controls->Add(this->q1);
			this->Controls->Add(this->q2);
			this->Controls->Add(this->round3);
			this->Controls->Add(this->round2);
			this->Controls->Add(this->round1);
			this->Controls->Add(this->koncowy1);
			this->Controls->Add(this->koncowy0);
			this->Controls->Add(this->koncowy2);
			this->Controls->Add(this->koncowy3);
			this->Controls->Add(this->startLabel);
			this->Controls->Add(this->aLabel);
			this->Controls->Add(this->errShow);
			this->Controls->Add(this->komunikatPole);
			this->Controls->Add(this->q0q1);
			this->Controls->Add(this->q2q3);
			this->Controls->Add(this->q1q0);
			this->Controls->Add(this->q3q2);
			this->Controls->Add(this->q2q0);
			this->Controls->Add(this->q0q2);
			this->Controls->Add(this->q3q1);
			this->Controls->Add(this->q1q3);
			this->Controls->Add(this->arrowUpq2q3);
			this->Controls->Add(this->arrowBottomq1q0);
			this->Controls->Add(this->arrowLeftq3q1);
			this->Controls->Add(this->arrowLeftq2q0);
			this->Controls->Add(this->arrowRightq0q2);
			this->Controls->Add(this->arrowRightq1q3);
			this->Controls->Add(this->arrowBottomq3q2);
			this->Controls->Add(this->arrowUpq0q1);
			this->Controls->Add(this->inputTextBox);
			this->Controls->Add(this->startButton);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Automat Skonczony";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowUpq0q1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowBottomq3q2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowRightq1q3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowRightq0q2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowLeftq2q0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowLeftq3q1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowBottomq1q0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrowUpq2q3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->koncowy1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->round0))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ wTemp = inputTextBox->Text;
		std::string w = msclr::interop::marshal_as<std::string>(wTemp);
		std::int16_t dl = w.size();
		int isCorrect = true;

		for (int i = 0; i < dl; i++) {
			if (!(w[i] == '0' || w[i] == '1' || w[i] == ' ')) {
				isCorrect = false;
			}
		}

		errShow->Text = "";
		komunikatPole->Text = "";
		startLabel->Visible = true;
		q = '3';	
	
		round0->Visible = true;
		round1->Visible = true;
		round2->Visible = true;
		round3->Visible = false;
		q3->ForeColor = Color::Red;
		q0->ForeColor = Color::Black;
		q1->ForeColor = Color::Black;
		q2->ForeColor = Color::Black;



		if (isCorrect) {
			timer1->Enabled = true;
		
		}
		else {
			errShow->Text = "Podano niepoprawny ciąg symboli. Automat przyjmuje wartości 0-1. Znaki białe (odstępy) są ignorowane.";
			errShow->ForeColor = Color::Red;
			timer1->Enabled = false;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		System::String^ wTemp = inputTextBox->Text;
		std::string w = msclr::interop::marshal_as<std::string>(wTemp);
		std::int16_t dl = w.size();

		round0->Visible = true;
		round1->Visible = true;
		round2->Visible = true;
		round3->Visible = true;
		q0->ForeColor = Color::Black;
		q1->ForeColor = Color::Black;
		q2->ForeColor = Color::Black;
		q3->ForeColor = Color::Black;
	
			if (i < dl)
			{
		

				while (w[i] == ' ') i++;
				if (w[i] == '1') {
					switch (q)
					{
					case '0':
						q = '1';
						q0q1->Visible = true;
						round1->Visible = false;
						q1->ForeColor = Color::Red;
						break;
					case '1':
						q = '0';
						q1q0->Visible = true;
						round0->Visible = false;
						q0->ForeColor = Color::Red;
						break;
					case '2':
						q = '3';
						q2q3->Visible = true;
						round3->Visible = false;
						q3->ForeColor = Color::Red;
						break;
					case '3':
						q = '2';
						q3q2->Visible = true;
						round2->Visible = false;
						q2->ForeColor = Color::Red;
						break;
					}
				}
				else if (w[i] == '0') {
					switch (q)
					{
					case '0':
						q = '2';
						q0q2->Visible = true;
						round2->Visible = false;
						q2->ForeColor = Color::Red;
						break;
					case '1':
						q = '3';
						q1q3->Visible = true;
						round3->Visible = false;
						q3->ForeColor = Color::Red;
						break;
					case '2':
						q = '0';
						q2q0->Visible = true;
						round0->Visible = false;
						q0->ForeColor = Color::Red;
						break;
					case '3':
						q = '1';
						q3q1->Visible = true;
						round1->Visible = false;
						q1->ForeColor = Color::Red;
						break;
					}
				}
				
				i++;

			}
			else {
				if (q == F) {
					round2->Visible = false;
					komunikatPole->Text = "Ciąg został zaakceptowany.";
					komunikatPole->ForeColor = Color::Green;
					q2->ForeColor = Color::Green;
				}
				else {
					if (q == '0') {
						round0->Visible = false;
						q0->ForeColor = Color::Red;
					}
					else if (q == '1') {
						round1->Visible = false;
						q1->ForeColor = Color::Red;
					}
					else if (q == '3') {
						round3->Visible = false;
						q3->ForeColor = Color::Red;
					}
					komunikatPole->Text = "Ciąg nie został zaakceptowany";
					komunikatPole->ForeColor = Color::Red;
				}
				i = 0;
				timer1->Enabled = false;
			}
	}
private: System::Void q1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void q0_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
