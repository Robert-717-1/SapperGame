#pragma once

namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormVictory
	/// </summary>
	public ref class FormVictory : public System::Windows::Forms::Form
	{
	public:
		FormVictory(void)
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
		~FormVictory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	protected:
	private: System::Windows::Forms::Button^ buttonNewGame;
	private: System::Windows::Forms::ImageList^ imageList_imagesVictory;
	private: System::Windows::Forms::Timer^ timerFirework;
	private: System::Windows::Forms::Timer^ timerOpacity;


	public: System::Windows::Forms::Label^ labelLevel_image;
	public: System::Windows::Forms::Label^ labelLevel_text;
	public: System::Windows::Forms::Label^ labelTime_image;
	public: System::Windows::Forms::Label^ labelTime_text;
	public: System::Windows::Forms::Label^ labelVictory;

	public:


	private: System::Windows::Forms::Label^ labelFlag1;


	public:

	public:


















	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormVictory::typeid));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->imageList_imagesVictory = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timerFirework = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelLevel_image = (gcnew System::Windows::Forms::Label());
			this->labelLevel_text = (gcnew System::Windows::Forms::Label());
			this->labelTime_image = (gcnew System::Windows::Forms::Label());
			this->labelTime_text = (gcnew System::Windows::Forms::Label());
			this->labelVictory = (gcnew System::Windows::Forms::Label());
			this->timerOpacity = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelFlag1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			resources->ApplyResources(this->buttonExit, L"buttonExit");
			this->buttonExit->BackColor = System::Drawing::Color::Transparent;
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->buttonExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &FormVictory::ButtonExit_Click);
			this->buttonExit->Enter += gcnew System::EventHandler(this, &FormVictory::ButtonExit_Enter);
			this->buttonExit->Leave += gcnew System::EventHandler(this, &FormVictory::ButtonExit_Leave);
			this->buttonExit->MouseEnter += gcnew System::EventHandler(this, &FormVictory::ButtonExit_MouseEnter);
			this->buttonExit->MouseLeave += gcnew System::EventHandler(this, &FormVictory::ButtonExit_MouseLeave);
			// 
			// buttonNewGame
			// 
			resources->ApplyResources(this->buttonNewGame, L"buttonNewGame");
			this->buttonNewGame->BackColor = System::Drawing::Color::Transparent;
			this->buttonNewGame->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonNewGame->FlatAppearance->BorderSize = 0;
			this->buttonNewGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->buttonNewGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonNewGame->ForeColor = System::Drawing::Color::OrangeRed;
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->UseVisualStyleBackColor = false;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Click);
			this->buttonNewGame->Enter += gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Enter);
			this->buttonNewGame->Leave += gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Leave);
			this->buttonNewGame->MouseEnter += gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_MouseEnter);
			this->buttonNewGame->MouseLeave += gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_MouseLeave);
			// 
			// imageList_imagesVictory
			// 
			this->imageList_imagesVictory->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesVictory.ImageStream")));
			this->imageList_imagesVictory->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesVictory->Images->SetKeyName(0, L"victory1.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(1, L"victory2.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(2, L"victory3.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(3, L"victory4.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(4, L"victory5.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(5, L"victory6.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(6, L"victory7.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(7, L"victory8.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(8, L"victory9.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(9, L"victory10.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(10, L"victory11.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(11, L"victory12.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(12, L"victory13.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(13, L"victory14.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(14, L"victory15.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(15, L"victory16.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(16, L"victory17.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(17, L"victory18.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(18, L"victory19.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(19, L"victory20.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(20, L"victory21.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(21, L"victory22.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(22, L"victory23.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(23, L"victory24.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(24, L"victory25.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(25, L"victory26.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(26, L"victory27.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(27, L"victory28.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(28, L"victory29.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(29, L"victory30.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(30, L"victory31.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(31, L"victory32.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(32, L"victory33.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(33, L"victory34.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(34, L"victory35.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(35, L"victory36.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(36, L"victory37.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(37, L"victory38.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(38, L"victory39.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(39, L"victory40.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(40, L"victory41.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(41, L"victory42.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(42, L"victory43.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(43, L"victory44.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(44, L"victory45.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(45, L"victory46.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(46, L"victory47.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(47, L"victory48.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(48, L"victory49.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(49, L"victory50.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(50, L"victory51.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(51, L"victory52.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(52, L"victory53.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(53, L"victory54.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(54, L"victory55.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(55, L"victory56.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(56, L"victory57.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(57, L"victory58.jpg");
			this->imageList_imagesVictory->Images->SetKeyName(58, L"victory59.jpg");
			// 
			// timerFirework
			// 
			this->timerFirework->Enabled = true;
			this->timerFirework->Interval = 200;
			this->timerFirework->Tick += gcnew System::EventHandler(this, &FormVictory::TimerFirework_Tick);
			// 
			// labelLevel_image
			// 
			resources->ApplyResources(this->labelLevel_image, L"labelLevel_image");
			this->labelLevel_image->BackColor = System::Drawing::Color::Transparent;
			this->labelLevel_image->Name = L"labelLevel_image";
			// 
			// labelLevel_text
			// 
			resources->ApplyResources(this->labelLevel_text, L"labelLevel_text");
			this->labelLevel_text->BackColor = System::Drawing::Color::Transparent;
			this->labelLevel_text->Name = L"labelLevel_text";
			// 
			// labelTime_image
			// 
			resources->ApplyResources(this->labelTime_image, L"labelTime_image");
			this->labelTime_image->BackColor = System::Drawing::Color::Transparent;
			this->labelTime_image->Name = L"labelTime_image";
			// 
			// labelTime_text
			// 
			resources->ApplyResources(this->labelTime_text, L"labelTime_text");
			this->labelTime_text->BackColor = System::Drawing::Color::Transparent;
			this->labelTime_text->Name = L"labelTime_text";
			// 
			// labelVictory
			// 
			resources->ApplyResources(this->labelVictory, L"labelVictory");
			this->labelVictory->BackColor = System::Drawing::Color::Transparent;
			this->labelVictory->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelVictory->Name = L"labelVictory";
			// 
			// timerOpacity
			// 
			this->timerOpacity->Enabled = true;
			this->timerOpacity->Interval = 1;
			this->timerOpacity->Tick += gcnew System::EventHandler(this, &FormVictory::TimerOpacity_Tick);
			// 
			// labelFlag1
			// 
			this->labelFlag1->BackColor = System::Drawing::Color::Transparent;
			this->labelFlag1->ForeColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->labelFlag1, L"labelFlag1");
			this->labelFlag1->Name = L"labelFlag1";
			// 
			// FormVictory
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Controls->Add(this->labelVictory);
			this->Controls->Add(this->labelFlag1);
			this->Controls->Add(this->labelTime_text);
			this->Controls->Add(this->labelLevel_text);
			this->Controls->Add(this->labelTime_image);
			this->Controls->Add(this->labelLevel_image);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonNewGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormVictory";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormVictory::FormVictory_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormVictory::FormVictory_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
			int countFirework = 0, countOpacity = 1;
			double tempSubtraction = 0;
			bool DoNotAskAboutClosingTheForm = false;
			Byte r = 215, // Red
				 g = 229, // Green
				 b = 242, // Blue
				 r_labelLevel_text = 215,
				 g_labelLevel_text = 229,
				 b_labelLevel_text = 242;
		public:
			Point LocationFieldForm;
			int NumberOfMines;

	private: System::Void TimerFirework_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TimerOpacity_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FormVictory_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void FormVictory_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
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
