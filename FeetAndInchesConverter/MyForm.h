#pragma once

namespace FeetAndInchesConverter {

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
	private: System::Windows::Forms::Label^  lblFeet;
	private: System::Windows::Forms::Label^  lblInches;
	private: System::Windows::Forms::Label^  lblConvertedInches;
	private: System::Windows::Forms::TextBox^  txtFeet;
	private: System::Windows::Forms::TextBox^  txtInches;
	private: System::Windows::Forms::TextBox^  txtConvertedInches;
	protected:






	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  convertToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	private: System::Windows::Forms::Button^  btnConvert;


	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbFromInches;
	private: System::Windows::Forms::RadioButton^  rbFromFeet;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		//My Variables
	private:
		int iInches;
		int iFeet;
		int iConvertedInches;
		bool bConvertingToInches;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblFeet = (gcnew System::Windows::Forms::Label());
			this->lblInches = (gcnew System::Windows::Forms::Label());
			this->lblConvertedInches = (gcnew System::Windows::Forms::Label());
			this->txtFeet = (gcnew System::Windows::Forms::TextBox());
			this->txtInches = (gcnew System::Windows::Forms::TextBox());
			this->txtConvertedInches = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->convertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbFromInches = (gcnew System::Windows::Forms::RadioButton());
			this->rbFromFeet = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblFeet
			// 
			this->lblFeet->AutoSize = true;
			this->lblFeet->Location = System::Drawing::Point(36, 57);
			this->lblFeet->Name = L"lblFeet";
			this->lblFeet->Size = System::Drawing::Size(28, 13);
			this->lblFeet->TabIndex = 0;
			this->lblFeet->Text = L"Feet";
			this->lblFeet->Click += gcnew System::EventHandler(this, &MyForm::lblFeet_Click);
			// 
			// lblInches
			// 
			this->lblInches->AutoSize = true;
			this->lblInches->Location = System::Drawing::Point(36, 101);
			this->lblInches->Name = L"lblInches";
			this->lblInches->Size = System::Drawing::Size(39, 13);
			this->lblInches->TabIndex = 1;
			this->lblInches->Text = L"Inches";
			// 
			// lblConvertedInches
			// 
			this->lblConvertedInches->AutoSize = true;
			this->lblConvertedInches->Location = System::Drawing::Point(36, 139);
			this->lblConvertedInches->Name = L"lblConvertedInches";
			this->lblConvertedInches->Size = System::Drawing::Size(39, 13);
			this->lblConvertedInches->TabIndex = 2;
			this->lblConvertedInches->Text = L"Inches";
			// 
			// txtFeet
			// 
			this->txtFeet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtFeet->Location = System::Drawing::Point(126, 54);
			this->txtFeet->Name = L"txtFeet";
			this->txtFeet->Size = System::Drawing::Size(100, 20);
			this->txtFeet->TabIndex = 3;
			this->txtFeet->TextChanged += gcnew System::EventHandler(this, &MyForm::txtFeet_TextChanged);
			// 
			// txtInches
			// 
			this->txtInches->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtInches->Location = System::Drawing::Point(126, 98);
			this->txtInches->Name = L"txtInches";
			this->txtInches->Size = System::Drawing::Size(100, 20);
			this->txtInches->TabIndex = 4;
			this->txtInches->TextChanged += gcnew System::EventHandler(this, &MyForm::txtInches_TextChanged);
			// 
			// txtConvertedInches
			// 
			this->txtConvertedInches->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtConvertedInches->Location = System::Drawing::Point(126, 136);
			this->txtConvertedInches->Name = L"txtConvertedInches";
			this->txtConvertedInches->Size = System::Drawing::Size(100, 20);
			this->txtConvertedInches->TabIndex = 5;
			this->txtConvertedInches->TextChanged += gcnew System::EventHandler(this, &MyForm::txtConvertedInches_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->convertToolStripMenuItem, this->resetToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// convertToolStripMenuItem
			// 
			this->convertToolStripMenuItem->Name = L"convertToolStripMenuItem";
			this->convertToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->convertToolStripMenuItem->Text = L"&Convert";
			this->convertToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::convertToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->resetToolStripMenuItem->Text = L"&Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::resetToolStripMenuItem_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->Location = System::Drawing::Point(39, 261);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(75, 23);
			this->btnConvert->TabIndex = 7;
			this->btnConvert->Text = L"&Convert";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnExit->Location = System::Drawing::Point(164, 261);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"E&xit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbFromInches);
			this->groupBox1->Controls->Add(this->rbFromFeet);
			this->groupBox1->Location = System::Drawing::Point(42, 176);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(184, 70);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// rbFromInches
			// 
			this->rbFromInches->AutoSize = true;
			this->rbFromInches->Location = System::Drawing::Point(29, 38);
			this->rbFromInches->Name = L"rbFromInches";
			this->rbFromInches->Size = System::Drawing::Size(83, 17);
			this->rbFromInches->TabIndex = 1;
			this->rbFromInches->Text = L"From Inches";
			this->rbFromInches->UseVisualStyleBackColor = true;
			this->rbFromInches->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbFromInches_CheckedChanged);
			// 
			// rbFromFeet
			// 
			this->rbFromFeet->AutoSize = true;
			this->rbFromFeet->Checked = true;
			this->rbFromFeet->Location = System::Drawing::Point(29, 20);
			this->rbFromFeet->Name = L"rbFromFeet";
			this->rbFromFeet->Size = System::Drawing::Size(72, 17);
			this->rbFromFeet->TabIndex = 0;
			this->rbFromFeet->TabStop = true;
			this->rbFromFeet->Text = L"From Feet";
			this->rbFromFeet->UseVisualStyleBackColor = true;
			this->rbFromFeet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbFromFeet_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(284, 346);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->txtConvertedInches);
			this->Controls->Add(this->txtInches);
			this->Controls->Add(this->txtFeet);
			this->Controls->Add(this->lblConvertedInches);
			this->Controls->Add(this->lblInches);
			this->Controls->Add(this->lblFeet);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(500, 585);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Feet-Inches-Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();		
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void lblFeet_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void txtFeet_TextChanged(System::Object^  sender, System::EventArgs^  e) {	
	int iRetVal;
	//Validate key press
	iRetVal = ValidateKeyPress(txtFeet->Text);
	if (iRetVal > -9999) //indicated valid input
		iFeet = iRetVal;
	else
	{//key press is invalid
		txtFeet->Text = Convert::ToString(iFeet); //Replace text in txtFeet with original value
		txtFeet->SelectAll();

	}
}

private: int ValidateKeyPress(System::String^ sControlText){
	int iTest;
	if (Int32::TryParse(sControlText, iTest)){
		return iTest;
	}
	else{
		MessageBox::Show("Looks like you typed an invalid value!!!", "Oooops!!!");
		return -9999;
	}
}

private: System::Void txtInches_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int iRetVal;
	//Validate key press
	iRetVal = ValidateKeyPress(txtInches->Text);
	if (iRetVal > -9999) //indicated valid input
		iInches = iRetVal;
	else
	{//key press is invalid
		txtInches->Text = Convert::ToString(iInches); //Replace text in txtFeet with original value
		txtInches->SelectAll();

	}
}
private: System::Void rbFromFeet_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	bConvertingToInches = true;
	//set the enabled control properties
	ToggleControls();
}

private: System::Void txtConvertedInches_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int iRetVal;
	//Validate keypress
	iRetVal = ValidateKeyPress(txtConvertedInches->Text);
	if (iRetVal > -9999)
		iConvertedInches = iRetVal;
	else{
		txtConvertedInches->Text = Convert::ToString(iConvertedInches);
		txtConvertedInches->SelectAll();
	}
}

private: Void ToggleControls(Void){
	//Enable or disable controls depending on conversion type
	txtFeet->Enabled = bConvertingToInches;
	txtInches->Enabled = bConvertingToInches;
	txtConvertedInches->Enabled = !bConvertingToInches;

	txtConvertedInches->Text = "0";
	txtInches->Text = "0";
	txtFeet->Text = "0";

	if (bConvertingToInches){
		txtFeet->SelectAll();
		txtInches->SelectAll();
	}
	else
		txtConvertedInches->SelectAll();
}

private: Void ConvertValues(Boolean bToInches){
	if (bToInches){
		System::String^ sConvertedVal;
		iConvertedInches = CalculateInches(iFeet, iInches);
		sConvertedVal = Convert::ToString(iConvertedInches);
		txtConvertedInches->Text = sConvertedVal;
	}
	else{
		int iSaveVal;
		int iWorkingVal;

		iSaveVal = Convert::ToInt16(txtConvertedInches->Text);

		if (iSaveVal == 12){
			txtFeet->Text = "1";
			txtInches->Text = "0";
		}
		else if (iSaveVal > 12){
			iWorkingVal = iSaveVal / 12;
			txtFeet->Text = Convert::ToString(iWorkingVal);
		}
		else{
			txtFeet->Text = "0";

		}
		iWorkingVal = iSaveVal % 12;
		txtInches->Text = Convert::ToString(iWorkingVal);
	}
}

private: int CalculateInches(int iFeet, int iInches){
	return ((iFeet * 12) + iInches);
}
private: System::Void rbFromInches_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	bConvertingToInches = false;
	ToggleControls();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//We are converting to inches by default
	bConvertingToInches = true;
	//Update the state of the text boxes
	ToggleControls();
}
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
	ConvertValues(bConvertingToInches);
}
private: System::Void convertToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	ConvertValues(bConvertingToInches);
}
private: System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//We are converting to inches by default
	bConvertingToInches = true;
	//Update the state of the text boxes
	ToggleControls();
	
}

private: System::Void txtFeet_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	txtFeet->SelectAll();
}
};
}
