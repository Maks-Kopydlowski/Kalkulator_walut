#pragma once
#include <iostream>
#include <string>
#include "MyForm3.h"


namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	/// 
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		double usdNaPln, usdNaEur, kursPln, kursEur;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	public:
	private: System::Windows::Forms::Label^ label9;
		double getUsdNaPln() { return usdNaEur; }
		void setUsdNaPln(double value) { usdNaPln = value; }
		double getUseNaEur() { return usdNaEur; }
		void setUsdNaEur(double value) { usdNaEur = value; }
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;



	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
		void UpdateSettings(double usdNaPln, double usdNaEur)
		{
			double aktualnyKursPLN = Double::Parse(textBox1->Text);
			double aktualnyKursEUR = Double::Parse(textBox2->Text);

			if (usdNaPln > aktualnyKursPLN)
			{
				label1->ForeColor = System::Drawing::Color::Red;
				label1->Refresh();
				label2->Refresh();
			}
			else if (usdNaPln < aktualnyKursPLN)
			{
				label1->ForeColor = System::Drawing::Color::Green;
				label1->Refresh();
				label2->Refresh();
			}

			if (usdNaEur > aktualnyKursEUR)
			{
				label2->ForeColor = System::Drawing::Color::Red;
				label1->Refresh();
				label2->Refresh();
			}
			else if (usdNaEur < aktualnyKursEUR)
			{
				label2->ForeColor = System::Drawing::Color::Green;
				label1->Refresh();
				label2->Refresh();
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(569, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"3,99";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(675, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0,90";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(566, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Kurs PLN";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(672, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Kurs EUR";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(569, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ustaw kurs";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"USD", L"PLN", L"EUR" });
			this->comboBox1->Location = System::Drawing::Point(137, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Text = L"USD";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"USD", L"PLN", L"EUR" });
			this->comboBox2->Location = System::Drawing::Point(289, 55);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"PLN";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(31, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(397, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Oblicz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(435, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Kwota";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(416, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Kwota";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(264, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"na";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(31, 191);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(441, 119);
			this->textBox4->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 30);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Wczytaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(201, 333);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 30);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Wyczyœæ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(372, 333);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Zapisz";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Stan zapisu/odczytu";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(672, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(672, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"label9";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(569, 129);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 199);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(797, 388);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"Kalkulator walut";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();

		usdNaPln = Double::Parse(textBox1->Text);
		usdNaEur = Double::Parse(textBox2->Text);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ form3 = gcnew MyForm3();

		form3->ShowDialog();

		textBox1->Text = form3->GetTextBox1Value();
		textBox2->Text = form3->GetTextBox2Value();
		usdNaPln = Double::Parse(textBox1->Text);
		usdNaEur = Double::Parse(textBox2->Text);
		UpdateSettings(usdNaPln, usdNaEur);
		
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double kwota;
		if (Double::TryParse(textBox3->Text, kwota)) {
			String^ zWaluty = safe_cast<String^>(comboBox1->SelectedItem);
			String^ naWalute = safe_cast<String^>(comboBox2->SelectedItem);

			double result = przewalutowanie(kwota, zWaluty, naWalute);
			label3->Text = result.ToString("N2") + " " + naWalute;

			String^ przeliczenie = kwota.ToString("N2") + " " + zWaluty + " -> " + result.ToString("N2") + " " + naWalute;
			textBox4->AppendText(przeliczenie + Environment::NewLine);
		}
		else {
			label3->Text = "Nieprawid³owa kwota!";
		}
	}
		   double przewalutowanie(double kwota, String^ zWaluty, String^ naWalute) {

			   if (zWaluty == "PLN") {
				   if (naWalute == "USD") {
					   return kwota / usdNaPln;
				   }
				   else if (naWalute == "EUR") {
					   return (kwota / usdNaPln) * usdNaEur;
				   }
				   else {
					   return kwota;
				   }
			   }
			   else if (zWaluty == "USD") {
				   if (naWalute == "PLN") {
					   return kwota * usdNaPln;
				   }
				   else if (naWalute == "EUR") {
					   return kwota * usdNaEur;
				   }
				   else {
					   return kwota;
				   }
			   }
			   else if (zWaluty == "EUR") {
				   if (naWalute == "PLN") {
					   return kwota / usdNaEur * usdNaPln;
				   }
				   else if (naWalute == "USD") {
					   return kwota / usdNaEur;
				   }
				   else {
					   return kwota;
				   }
			   }
			   else {
				   return 0.0;
			   }
		   }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
				textBox4->Text = sr->ReadToEnd();
				sr->Close();
				label7->Text = "Wczytano dane z pliku: " + openFileDialog1->FileName;
			}
			catch (Exception^ ex) {
				label7->Text = "B³¹d wczytywania danych z pliku: " + ex->Message;
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "obliczenia_" + DateTime::Now.ToString("yyyyMMdd_HHmmss") + ".txt";

		try {
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->Write(textBox4->Text);
			sw->Close();
			label7->Text = "Zapisano do pliku: " + fileName;
			textBox4->Clear();
		}
		catch (Exception^ ex) {
			label7->Text = "B³¹d zapisu do pliku: " + ex->Message;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Clear();
		textBox3->Clear();
		label7->Text = "Stan zapisu/odczytu";
		label3->Text = "Kwota";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime czas = DateTime::Now;
		label8->Text = czas.Hour.ToString("D2") + ":" + czas.Minute.ToString("D2") +
			":" + czas.Second.ToString("D2");

		label9->Text = czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") +
			"-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString();
	}
};
}
