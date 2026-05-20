#pragma once

namespace pz5 {

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
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ helpToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator8;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator9;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÔÂÂ„Îˇ‰ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ≥ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡ÌÂÎ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÚ‚ÓËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚≥‰ÍËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËﬂÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ÛÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Ô‡‚Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÍÓÔ≥˛‚‡ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë≥Á‡ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚ÒÚË‚ËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÙÓÏ‡ÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ¯ÍËÙÚToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰ËÁ‡ÈÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÙÓÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‰Ó‚≥‰Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚Ë≥Á‡ÚËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚ÒÚ‡‚ËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ¯ËÙÚToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
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
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÚ‚ÓËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚≥‰ÍËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ÛÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡ÌÂÎ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ô‡‚Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚Ë≥Á‡ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÒÚË‚ËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÙÓÏ‡ÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->¯ÍËÙÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰ËÁ‡ÈÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÙÓÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‰Ó‚≥‰Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->‚Ë≥Á‡ÚËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->¯ËÙÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(26) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->helpToolStripButton, this->toolStripSeparator2,
					this->toolStripButton1, this->toolStripSeparator3, this->toolStripButton2, this->toolStripSeparator4, this->toolStripButton3,
					this->toolStripSeparator5, this->toolStripButton4, this->toolStripSeparator6, this->toolStripButton5, this->toolStripSeparator7,
					this->toolStripButton6, this->toolStripSeparator8, this->toolStripButton7, this->toolStripSeparator9, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(776, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(23, 22);
			this->newToolStripButton->Text = L"&New";
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(23, 22);
			this->openToolStripButton->Text = L"&Open";
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(23, 22);
			this->saveToolStripButton->Text = L"&Save";
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(23, 22);
			this->printToolStripButton->Text = L"&Print";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(23, 22);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->ToolTipText = L"¬Ë≥Á‡ÚË";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(23, 22);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->ToolTipText = L" ÓÔ≥˛‚‡ÚË";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(23, 22);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->ToolTipText = L"¬ÒÚ‡‚ËÚË";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(23, 22);
			this->helpToolStripButton->Text = L"He&lp";
			this->helpToolStripButton->ToolTipText = L"≤ÌÙÓÏ‡ˆ≥ˇ";
			this->helpToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"« Î≥‚‡";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"œÓ ˆÂÌÚÛ";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"« Ô‡‚‡";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->ToolTipText = L"∆ËÌËÈ";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->ToolTipText = L" ÛÒË";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->ToolTipText = L"œ≥‰ÍÂÒÎÂÌÌˇ";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->ToolTipText = L"Õ‡Á‡‰";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(23, 22);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->ToolTipText = L"¬ÔÂÂ‰";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 49);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(776, 305);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 332);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(776, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(118, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Ù‡ÈÎToolStripMenuItem,
					this->ÔÂÂ„Îˇ‰ToolStripMenuItem, this->Ô‡‚Í‡ToolStripMenuItem, this->ÙÓÏ‡ÚToolStripMenuItem, this->‰ËÁ‡ÈÌToolStripMenuItem,
					this->‰Ó‚≥‰Í‡ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(776, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ÒÚ‚ÓËÚËToolStripMenuItem,
					this->‚≥‰ÍËÚËToolStripMenuItem, this->Á·ÂÂ„ÚËToolStripMenuItem, this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem, this->‰ÛÍToolStripMenuItem
			});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ÒÚ‚ÓËÚËToolStripMenuItem
			// 
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Name = L"ÒÚ‚ÓËÚËToolStripMenuItem";
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->ÒÚ‚ÓËÚËToolStripMenuItem->Text = L"—Ú‚ÓËÚË";
			// 
			// ‚≥‰ÍËÚËToolStripMenuItem
			// 
			this->‚≥‰ÍËÚËToolStripMenuItem->Name = L"‚≥‰ÍËÚËToolStripMenuItem";
			this->‚≥‰ÍËÚËToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->‚≥‰ÍËÚËToolStripMenuItem->Text = L"¬≥‰ÍËÚË";
			this->‚≥‰ÍËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‚≥‰ÍËÚËToolStripMenuItem_Click);
			// 
			// Á·ÂÂ„ÚËToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËToolStripMenuItem->Name = L"Á·ÂÂ„ÚËToolStripMenuItem";
			this->Á·ÂÂ„ÚËToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->Á·ÂÂ„ÚËToolStripMenuItem->Text = L"«·ÂÂ„ÚË";
			// 
			// Á·ÂÂ„ÚËﬂÍToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Name = L"Á·ÂÂ„ÚËﬂÍToolStripMenuItem";
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Text = L"«·ÂÂ„ÚË ˇÍ";
			// 
			// ‰ÛÍToolStripMenuItem
			// 
			this->‰ÛÍToolStripMenuItem->Name = L"‰ÛÍToolStripMenuItem";
			this->‰ÛÍToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->‰ÛÍToolStripMenuItem->Text = L"ƒÛÍ";
			this->‰ÛÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::‰ÛÍToolStripMenuItem_Click);
			// 
			// ÔÂÂ„Îˇ‰ToolStripMenuItem
			// 
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ô‡ÌÂÎ≥ToolStripMenuItem });
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Name = L"ÔÂÂ„Îˇ‰ToolStripMenuItem";
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->ÔÂÂ„Îˇ‰ToolStripMenuItem->Text = L"œÂÂ„Îˇ‰";
			// 
			// Ô‡ÌÂÎ≥ToolStripMenuItem
			// 
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem,
					this->Ô‡ÌÂÎ¸ToolStripMenuItem
			});
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Name = L"Ô‡ÌÂÎ≥ToolStripMenuItem";
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->Ô‡ÌÂÎ≥ToolStripMenuItem->Text = L"œ‡ÌÂÎ≥";
			// 
			// ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem
			// 
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->CheckOnClick = true;
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Name = L"ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Text = L"–ˇ‰ÓÍ ÒÚ‡ÌÛ";
			this->ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click);
			// 
			// Ô‡ÌÂÎ¸ToolStripMenuItem
			// 
			this->Ô‡ÌÂÎ¸ToolStripMenuItem->CheckOnClick = true;
			this->Ô‡ÌÂÎ¸ToolStripMenuItem->Name = L"Ô‡ÌÂÎ¸ToolStripMenuItem";
			this->Ô‡ÌÂÎ¸ToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->Ô‡ÌÂÎ¸ToolStripMenuItem->Text = L"œ‡ÌÂÎ¸ ≥ÌÚÛÏÂÌÚ≥‚";
			this->Ô‡ÌÂÎ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ô‡ÌÂÎ¸ToolStripMenuItem_Click);
			// 
			// Ô‡‚Í‡ToolStripMenuItem
			// 
			this->Ô‡‚Í‡ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem,
					this->‚Ë≥Á‡ÚËToolStripMenuItem, this->‚ÒÚË‚ËÚËToolStripMenuItem
			});
			this->Ô‡‚Í‡ToolStripMenuItem->Name = L"Ô‡‚Í‡ToolStripMenuItem";
			this->Ô‡‚Í‡ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->Ô‡‚Í‡ToolStripMenuItem->Text = L"œ‡‚Í‡";
			// 
			// ÍÓÔ≥˛‚‡ÚËToolStripMenuItem
			// 
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Name = L"ÍÓÔ≥˛‚‡ÚËToolStripMenuItem";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Text = L" ÓÔ≥˛‚‡ÚË";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// ‚Ë≥Á‡ÚËToolStripMenuItem
			// 
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Name = L"‚Ë≥Á‡ÚËToolStripMenuItem";
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Text = L"¬Ë≥Á‡ÚË";
			this->‚Ë≥Á‡ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// ‚ÒÚË‚ËÚËToolStripMenuItem
			// 
			this->‚ÒÚË‚ËÚËToolStripMenuItem->Name = L"‚ÒÚË‚ËÚËToolStripMenuItem";
			this->‚ÒÚË‚ËÚËToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->‚ÒÚË‚ËÚËToolStripMenuItem->Text = L"¬ÒÚË‚ËÚË";
			this->‚ÒÚË‚ËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// ÙÓÏ‡ÚToolStripMenuItem
			// 
			this->ÙÓÏ‡ÚToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->¯ÍËÙÚToolStripMenuItem });
			this->ÙÓÏ‡ÚToolStripMenuItem->Name = L"ÙÓÏ‡ÚToolStripMenuItem";
			this->ÙÓÏ‡ÚToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->ÙÓÏ‡ÚToolStripMenuItem->Text = L"‘ÓÏ‡Ú";
			// 
			// ¯ÍËÙÚToolStripMenuItem
			// 
			this->¯ÍËÙÚToolStripMenuItem->Name = L"¯ÍËÙÚToolStripMenuItem";
			this->¯ÍËÙÚToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->¯ÍËÙÚToolStripMenuItem->Text = L"ÿËÙÚ";
			this->¯ÍËÙÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::¯ÍËÙÚToolStripMenuItem_Click);
			// 
			// ‰ËÁ‡ÈÌToolStripMenuItem
			// 
			this->‰ËÁ‡ÈÌToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÙÓÌToolStripMenuItem });
			this->‰ËÁ‡ÈÌToolStripMenuItem->Name = L"‰ËÁ‡ÈÌToolStripMenuItem";
			this->‰ËÁ‡ÈÌToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->‰ËÁ‡ÈÌToolStripMenuItem->Text = L"ƒËÁ‡ÈÌ";
			// 
			// ÙÓÌToolStripMenuItem
			// 
			this->ÙÓÌToolStripMenuItem->Name = L"ÙÓÌToolStripMenuItem";
			this->ÙÓÌToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->ÙÓÌToolStripMenuItem->Text = L"‘ÓÌ";
			this->ÙÓÌToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÙÓÌToolStripMenuItem_Click);
			// 
			// ‰Ó‚≥‰Í‡ToolStripMenuItem
			// 
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Name = L"‰Ó‚≥‰Í‡ToolStripMenuItem";
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Text = L"ƒÓ‚≥‰Í‡";
			this->‰Ó‚≥‰Í‡ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->‚Ë≥Á‡ÚËToolStripMenuItem1,
					this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1, this->‚ÒÚ‡‚ËÚËToolStripMenuItem, this->¯ËÙÚToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(133, 92);
			// 
			// ‚Ë≥Á‡ÚËToolStripMenuItem1
			// 
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Name = L"‚Ë≥Á‡ÚËToolStripMenuItem1";
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Text = L"¬Ë≥Á‡ÚË";
			this->‚Ë≥Á‡ÚËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1
			// 
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1->Name = L"ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1->Size = System::Drawing::Size(132, 22);
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1->Text = L" ÓÔ≥˛‚‡ÚË";
			this->ÍÓÔ≥˛‚‡ÚËToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// ‚ÒÚ‡‚ËÚËToolStripMenuItem
			// 
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Name = L"‚ÒÚ‡‚ËÚËToolStripMenuItem";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Text = L"¬ÒÚ‡‚ËÚË";
			this->‚ÒÚ‡‚ËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// ¯ËÙÚToolStripMenuItem
			// 
			this->¯ËÙÚToolStripMenuItem->Name = L"¯ËÙÚToolStripMenuItem";
			this->¯ËÙÚToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->¯ËÙÚToolStripMenuItem->Text = L"ÿËÙÚ";
			this->¯ËÙÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::¯ÍËÙÚToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 354);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
		toolStripStatusLabel1->Text = "¬Ë≥Á‡ÌÌˇ ÚÂÍÒÚÛ";
	}
private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
	toolStripStatusLabel1->Text = " ÓÔ≥˛‚‡ÌÌˇ ÚÂÍÒÚÛ";
}
private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
	toolStripStatusLabel1->Text = "¬ÒÚ‡‚ÎÂÌÌˇ ÚÂÍÒÚÛ";
}
private: System::Void helpToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"Simple Text Editor\n\n–ÓÁÓ·ÌËÍ: ’Ó‚‡ÌÂˆ¸ Ã‡'ˇÌ‡\n√ÛÔ‡: 3-—ŒÃÃ\n¬ÂÒ≥ˇ: 1.0\n\n÷Â ·‡ÁÓ‚ËÈ ÚÂÍÒÚÓ‚ËÈ Â‰‡ÍÚÓ, ÒÚ‚ÓÂÌËÈ Û ÏÂÊ‡ı ÔÂ‰‡„Ó„≥˜ÌÓø Ô‡ÍÚËÍË.",
		L"œÓ ÔÓ„‡ÏÛ",
		MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = System::Windows::Forms::HorizontalAlignment::Left;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Î≥‚ÓÏÛ Í‡˛";
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = System::Windows::Forms::HorizontalAlignment::Center;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ ˆÂÌÚÛ";
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionAlignment = System::Windows::Forms::HorizontalAlignment::Right;
	toolStripStatusLabel1->Text = "¬Ë≥‚Ì˛‚‡ÌÌˇ ÔÓ Ô‡‚ÓÏÛ Í‡˛";
	   }
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (richTextBox1->SelectionFont->Bold)
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);
	else
		richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
	toolStripStatusLabel1->Text = "∆ËÌËÈ ¯ËÙÚ";
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (richTextBox1->SelectionFont != nullptr)
	{
		if (richTextBox1->SelectionFont->Italic)
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Italic);
		else
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
		toolStripStatusLabel1->Text = " ÛÒË‚ÌËÈ ¯ËÙÚ";
	}
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (richTextBox1->SelectionFont != nullptr)
	{
		if (richTextBox1->SelectionFont->Underline)
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Underline);
		else
			richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
		toolStripStatusLabel1->Text = "œ≥‰ÍÂÒÎÂÌËÈ ¯ËÙÚ";
	}
}
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Redo();
	toolStripStatusLabel1->Text = "œÓ‚ÚÓËÚË ‰≥˛";
}
private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
	toolStripStatusLabel1->Text = "—Í‡ÒÛ‚‡ÚË ‰≥˛";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Items[1]->Text = System::DateTime::Now.ToString();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = false;
	toolStrip1->Visible = false;
}
private: System::Void ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = ˇ‰ÓÍ—Ú‡ÌÛToolStripMenuItem->Checked;
}
private: System::Void Ô‡ÌÂÎ¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStrip1->Visible = Ô‡ÌÂÎ¸ToolStripMenuItem->Checked;	
}
private: System::Void ¯ÍËÙÚToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	richTextBox1->SelectionFont = fontDialog1->Font;
}
private: System::Void ‰ÛÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	printDialog1->ShowDialog();
}
private: System::Void ÙÓÌToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog1->Color = richTextBox1->BackColor;
	if (colorDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		richTextBox1->BackColor = colorDialog1->Color;
}
private: System::Void ‚≥‰ÍËÚËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|rtf files (*.rtf)|*.rtf|All files(*.*) | *.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::Text::Encoding^ kod = System::Text::Encoding::GetEncoding(1251);
			auto read = gcnew IO::StreamReader(openFileDialog1->FileName, kod);
			richTextBox1->Text = read->ReadToEnd();
		} this->Text += (openFileDialog1->FileName);
}
};
}
