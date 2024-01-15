#include <iostream>
#include <string>

namespace Project1 {

    using namespace System;
    using namespace System::Windows::Forms;

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

    private:
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
        /// jej zawartoœci w edytorze kodu.
        /// </summary>
        void InitializeComponent(void) {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(368, 84);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(80, 26);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Oblicz";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(247, 45);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(19, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"na";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(392, 46);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(37, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Kwota";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(375, 46);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(13, 13);
            this->label3->TabIndex = 3;
            this->label3->Text = L"=";
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PLN", L"USD", L"EUR" });
            this->comboBox1->Location = System::Drawing::Point(151, 42);
            this->comboBox1->Margin = System::Windows::Forms::Padding(2);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(82, 21);
            this->comboBox1->TabIndex = 4;
            // 
            // comboBox2
            // 
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"PLN", L"USD", L"EUR" });
            this->comboBox2->Location = System::Drawing::Point(279, 42);
            this->comboBox2->Margin = System::Windows::Forms::Padding(2);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(82, 21);
            this->comboBox2->TabIndex = 5;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(34, 43);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(100, 20);
            this->textBox1->TabIndex = 6;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(31, 27);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(37, 13);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Kwota";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(484, 151);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->comboBox2);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Margin = System::Windows::Forms::Padding(2);
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
};
}
