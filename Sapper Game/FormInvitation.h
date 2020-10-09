#pragma once

namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormInvitation
	/// </summary>
	public ref class FormInvitation : public System::Windows::Forms::Form
	{
	public:
		FormInvitation(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FormInvitation()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBoxNickname;
	public: System::Windows::Forms::Button^ buttonInviteEnter;
	public: System::Windows::Forms::Button^ buttonInviteCancel;
	public: System::Windows::Forms::Label^ labelInvitation;




	protected:



	public:

	public:

	public:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxNickname = (gcnew System::Windows::Forms::TextBox());
			this->buttonInviteEnter = (gcnew System::Windows::Forms::Button());
			this->buttonInviteCancel = (gcnew System::Windows::Forms::Button());
			this->labelInvitation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxNickname
			// 
			this->textBoxNickname->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxNickname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNickname->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxNickname->Location = System::Drawing::Point(30, 12);
			this->textBoxNickname->MaxLength = 16;
			this->textBoxNickname->Multiline = true;
			this->textBoxNickname->Name = L"textBoxNickname";
			this->textBoxNickname->Size = System::Drawing::Size(248, 23);
			this->textBoxNickname->TabIndex = 20;
			this->textBoxNickname->Visible = false;
			this->textBoxNickname->TextChanged += gcnew System::EventHandler(this, &FormInvitation::TextBoxNickname_TextChanged);
			this->textBoxNickname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormInvitation::TextBoxNickname_KeyPress);
			// 
			// buttonInviteEnter
			// 
			this->buttonInviteEnter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonInviteEnter->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonInviteEnter->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonInviteEnter->FlatAppearance->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->buttonInviteEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonInviteEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonInviteEnter->Location = System::Drawing::Point(30, 47);
			this->buttonInviteEnter->Name = L"buttonInviteEnter";
			this->buttonInviteEnter->Size = System::Drawing::Size(75, 23);
			this->buttonInviteEnter->TabIndex = 21;
			this->buttonInviteEnter->Text = L"To invite";
			this->buttonInviteEnter->UseVisualStyleBackColor = false;
			this->buttonInviteEnter->Visible = false;
			// 
			// buttonInviteCancel
			// 
			this->buttonInviteCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonInviteCancel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonInviteCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonInviteCancel->FlatAppearance->BorderColor = System::Drawing::SystemColors::HotTrack;
			this->buttonInviteCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonInviteCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold));
			this->buttonInviteCancel->Location = System::Drawing::Point(203, 47);
			this->buttonInviteCancel->Name = L"buttonInviteCancel";
			this->buttonInviteCancel->Size = System::Drawing::Size(75, 23);
			this->buttonInviteCancel->TabIndex = 21;
			this->buttonInviteCancel->TabStop = false;
			this->buttonInviteCancel->Text = L"Cancel";
			this->buttonInviteCancel->UseVisualStyleBackColor = false;
			this->buttonInviteCancel->Visible = false;
			// 
			// labelInvitation
			// 
			this->labelInvitation->AutoSize = true;
			this->labelInvitation->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelInvitation->Location = System::Drawing::Point(137, 48);
			this->labelInvitation->Name = L"labelInvitation";
			this->labelInvitation->Size = System::Drawing::Size(36, 21);
			this->labelInvitation->TabIndex = 22;
			this->labelInvitation->Text = L"Text";
			this->labelInvitation->Visible = false;
			// 
			// FormInvitation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(308, 78);
			this->Controls->Add(this->labelInvitation);
			this->Controls->Add(this->buttonInviteCancel);
			this->Controls->Add(this->buttonInviteEnter);
			this->Controls->Add(this->textBoxNickname);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"FormInvitation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Invitation to the pair game";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void TextBoxNickname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void TextBoxNickname_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
