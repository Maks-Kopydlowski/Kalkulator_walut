#pragma once
#include "MyForm3.h";

namespace Kalkulator {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;

    /// <summary>
    /// Podsumowanie informacji o MyForm2
    /// </summary>
    public ref class MyForm2 : public System::Windows::Forms::Form
    {
    public:
        MyForm2(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm2()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ textBoxLogin;
    private: System::Windows::Forms::TextBox^ textBoxPassword;
    private: System::Windows::Forms::Button^ buttonLogin;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;

    protected:
    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
            this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
            this->buttonLogin = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // textBoxLogin
            // 
            this->textBoxLogin->Location = System::Drawing::Point(118, 40);
            this->textBoxLogin->Name = L"textBoxLogin";
            this->textBoxLogin->Size = System::Drawing::Size(100, 20);
            this->textBoxLogin->TabIndex = 0;
            // 
            // textBoxPassword
            // 
            this->textBoxPassword->Location = System::Drawing::Point(118, 80);
            this->textBoxPassword->Name = L"textBoxPassword";
            this->textBoxPassword->PasswordChar = '*';
            this->textBoxPassword->Size = System::Drawing::Size(100, 20);
            this->textBoxPassword->TabIndex = 1;
            // 
            // buttonLogin
            // 
            this->buttonLogin->Location = System::Drawing::Point(118, 120);
            this->buttonLogin->Name = L"buttonLogin";
            this->buttonLogin->Size = System::Drawing::Size(75, 23);
            this->buttonLogin->TabIndex = 2;
            this->buttonLogin->Text = L"Zaloguj";
            this->buttonLogin->UseVisualStyleBackColor = true;
            this->buttonLogin->Click += gcnew System::EventHandler(this, &MyForm2::buttonLogin_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(57, 43);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(33, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Login";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(57, 83);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(36, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Has³o";
            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(284, 261);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->buttonLogin);
            this->Controls->Add(this->textBoxPassword);
            this->Controls->Add(this->textBoxLogin);
            this->Name = L"MyForm2";
            this->Text = L"Logowanie";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
        // Tutaj mo¿na dodaæ kod do weryfikacji loginu i has³a
        // Przyk³ad prostego sprawdzenia:
        if (textBoxLogin->Text == "admin" && textBoxPassword->Text == "admin") {
            // Logowanie udane, przejdŸ do MyForm3
            MyForm3^ form3 = gcnew MyForm3();
            form3->ShowDialog();
            this->Close();
        }
        else {
            // Logowanie nieudane, mo¿na wyœwietliæ komunikat lub podj¹æ inne dzia³ania
            MessageBox::Show("B³êdny login lub has³o!", "B³¹d logowania", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    };
}
