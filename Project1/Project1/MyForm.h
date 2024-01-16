#include <iostream>
#include <string>


namespace Project1 {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::IO;


    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm(void) {
            InitializeComponent();
            //
            //TODO: W tym miejscu dodaj kod konstruktora
            //
        }

    protected:
        /// <summary>
        /// Wyczyœæ wszystkie u¿ywane zasoby.
        /// </summary>
        ~MyForm() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
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
        void InitializeComponent(void) {
            this->components = (gcnew System::ComponentModel::Container());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(552, 129);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(120, 40);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Oblicz";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(370, 69);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(27, 20);
            this->label1->TabIndex = 1;
            this->label1->Text = L"na";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(588, 71);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(53, 20);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Kwota";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(562, 71);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(18, 20);
            this->label3->TabIndex = 3;
            this->label3->Text = L"=";
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PLN", L"USD", L"EUR" });
            this->comboBox1->Location = System::Drawing::Point(226, 65);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 28);
            this->comboBox1->TabIndex = 4;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PLN", L"USD", L"EUR" });
            this->comboBox2->Location = System::Drawing::Point(418, 65);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(121, 28);
            this->comboBox2->TabIndex = 5;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(51, 66);
            this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(148, 26);
            this->textBox1->TabIndex = 6;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(46, 42);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(53, 20);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Kwota";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(51, 217);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(621, 276);
            this->textBox2->TabIndex = 8;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(479, 499);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(193, 52);
            this->button2->TabIndex = 9;
            this->button2->Text = L"Zapisz";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(51, 499);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(193, 52);
            this->button3->TabIndex = 10;
            this->button3->Text = L"Wczytaj";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1426, 579);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->Text = L"Kalkulator walut";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        double kwota;
        if (Double::TryParse(textBox1->Text, kwota)) {
            String^ zWaluty = safe_cast<String^>(comboBox1->SelectedItem);
            String^ naWalute = safe_cast<String^>(comboBox2->SelectedItem);

            double result = ConvertCurrency(kwota, zWaluty, naWalute);
            label2->Text = result.ToString("N2") + " " + naWalute;

            String^ przeliczenie = kwota.ToString("N2") + " " + zWaluty + " -> " + result.ToString("N2") + " " + naWalute;
            textBox2->AppendText(przeliczenie + Environment::NewLine);
        }
        else {
            label2->Text = "Nieprawid³owa kwota!";
        }
    }

           // Funkcja przeliczaj¹ca kursy walut
           double ConvertCurrency(double kwota, String^ zWaluty, String^ naWalute) {
               // Kursy walut
               double usdNaPln = 3.99;
               double usdNaEur = 0.90;

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
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
        openFileDialog1->Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
        openFileDialog1->FilterIndex = 1;
        openFileDialog1->RestoreDirectory = true;

        if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            try {
                // Wczytaj dane z pliku
                StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
                textBox2->Text = sr->ReadToEnd();
                sr->Close();
                label2->Text = "Wczytano dane z pliku: " + openFileDialog1->FileName;
            }
            catch (Exception^ ex) {
                label2->Text = "B³¹d wczytywania danych z pliku: " + ex->Message;
            }
        }
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ fileName = "obliczenia_" + DateTime::Now.ToString("yyyyMMdd_HHmmss") + ".txt";

        try {
            StreamWriter^ sw = gcnew StreamWriter(fileName);
            sw->Write(textBox2->Text);
            sw->Close();
            label2->Text = "Zapisano do pliku: " + fileName;

            // Wyczyœæ zawartoœæ textBox2
            textBox2->Clear();
        }
        catch (Exception^ ex) {
            label2->Text = "B³¹d zapisu do pliku: " + ex->Message;
        }
    }
};
}
