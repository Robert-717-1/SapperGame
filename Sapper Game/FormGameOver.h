#pragma once

namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormGameOver
	/// </summary>
	public ref class FormGameOver : public System::Windows::Forms::Form
	{
	public:
		FormGameOver(void)
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
		~FormGameOver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	protected:

	private: System::Windows::Forms::Button^ buttonNewGame;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::ImageList^ imageList_imagesGameOver;



	private: System::ComponentModel::IContainer^ components;
	protected:





	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormGameOver::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList_imagesGameOver = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->AutoSize = true;
			this->buttonExit->BackColor = System::Drawing::Color::Transparent;
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->buttonExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->ForeColor = System::Drawing::Color::Indigo;
			this->buttonExit->Location = System::Drawing::Point(243, 197);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 36);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Click);
			this->buttonExit->Enter += gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Enter);
			this->buttonExit->Leave += gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Leave);
			this->buttonExit->MouseEnter += gcnew System::EventHandler(this, &FormGameOver::ButtonExit_MouseEnter);
			this->buttonExit->MouseLeave += gcnew System::EventHandler(this, &FormGameOver::ButtonExit_MouseLeave);
			// 
			// buttonNewGame
			// 
			this->buttonNewGame->AutoSize = true;
			this->buttonNewGame->BackColor = System::Drawing::Color::Transparent;
			this->buttonNewGame->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonNewGame->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonNewGame->FlatAppearance->BorderSize = 0;
			this->buttonNewGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->buttonNewGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
			this->buttonNewGame->ForeColor = System::Drawing::Color::OrangeRed;
			this->buttonNewGame->Location = System::Drawing::Point(46, 197);
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->Size = System::Drawing::Size(99, 36);
			this->buttonNewGame->TabIndex = 0;
			this->buttonNewGame->Text = L"NewGame";
			this->buttonNewGame->UseVisualStyleBackColor = false;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Click);
			this->buttonNewGame->Enter += gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Enter);
			this->buttonNewGame->Leave += gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Leave);
			this->buttonNewGame->MouseEnter += gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_MouseEnter);
			this->buttonNewGame->MouseLeave += gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_MouseLeave);
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 750;
			this->timer->Tick += gcnew System::EventHandler(this, &FormGameOver::Timer_Tick);
			// 
			// imageList_imagesGameOver
			// 
			this->imageList_imagesGameOver->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesGameOver.ImageStream")));
			this->imageList_imagesGameOver->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesGameOver->Images->SetKeyName(0, L"GameOver1.jpg");
			this->imageList_imagesGameOver->Images->SetKeyName(1, L"GameOver2.jpg");
			this->imageList_imagesGameOver->Images->SetKeyName(2, L"GameOver3.jpg");
			this->imageList_imagesGameOver->Images->SetKeyName(3, L"GameOver4.jpg");
			// 
			// FormGameOver
			// 
			this->AcceptButton = this->buttonNewGame;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CancelButton = this->buttonExit;
			this->ClientSize = System::Drawing::Size(372, 240);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonNewGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormGameOver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormGameOver::FormGameOver_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormGameOver::FormGameOver_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
			bool found = false, DoNotAskAboutClosingTheForm = false;
			int count = 1;

		public: 
			Point LocationFieldForm;

	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FormGameOver_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void FormGameOver_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_Leave(System::Object^ sender, System::EventArgs^ e);
};
}
