#pragma once

namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ DifficultyLevelSelection
	/// </summary>
	public ref class DifficultyLevelSelection : public System::Windows::Forms::Form
	{
	public:
		DifficultyLevelSelection(void)
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
		~DifficultyLevelSelection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton_Easy;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton_Normal;
	private: System::Windows::Forms::RadioButton^ radioButton_Hard;
	private: System::Windows::Forms::GroupBox^ groupBox_GameDifficulty;
	private: System::Windows::Forms::Label^ label_ChooseGameDifficulty;
	private: System::Windows::Forms::Button^ button_Start;
	private: System::Windows::Forms::Button^ button_Exit_Cancel;
	private: System::Windows::Forms::RadioButton^ radioButtonSinglePlayerGame;
	private: System::Windows::Forms::RadioButton^ radioButtonMultiplayerGame;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DifficultyLevelSelection::typeid));
			this->radioButton_Easy = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Normal = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Hard = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox_GameDifficulty = (gcnew System::Windows::Forms::GroupBox());
			this->button_Exit_Cancel = (gcnew System::Windows::Forms::Button());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->label_ChooseGameDifficulty = (gcnew System::Windows::Forms::Label());
			this->radioButtonSinglePlayerGame = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMultiplayerGame = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox_GameDifficulty->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton_Easy
			// 
			this->radioButton_Easy->AutoSize = true;
			this->radioButton_Easy->Checked = true;
			this->radioButton_Easy->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_Easy->ForeColor = System::Drawing::Color::Green;
			this->radioButton_Easy->Location = System::Drawing::Point(6, 13);
			this->radioButton_Easy->Name = L"radioButton_Easy";
			this->radioButton_Easy->Size = System::Drawing::Size(55, 25);
			this->radioButton_Easy->TabIndex = 0;
			this->radioButton_Easy->TabStop = true;
			this->radioButton_Easy->Text = L"Easy";
			this->radioButton_Easy->UseVisualStyleBackColor = true;
			// 
			// radioButton_Normal
			// 
			this->radioButton_Normal->AutoSize = true;
			this->radioButton_Normal->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_Normal->ForeColor = System::Drawing::Color::Yellow;
			this->radioButton_Normal->Location = System::Drawing::Point(6, 36);
			this->radioButton_Normal->Name = L"radioButton_Normal";
			this->radioButton_Normal->Size = System::Drawing::Size(73, 25);
			this->radioButton_Normal->TabIndex = 0;
			this->radioButton_Normal->Text = L"Normal";
			this->radioButton_Normal->UseVisualStyleBackColor = true;
			// 
			// radioButton_Hard
			// 
			this->radioButton_Hard->AutoSize = true;
			this->radioButton_Hard->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_Hard->ForeColor = System::Drawing::Color::Red;
			this->radioButton_Hard->Location = System::Drawing::Point(6, 59);
			this->radioButton_Hard->Name = L"radioButton_Hard";
			this->radioButton_Hard->Size = System::Drawing::Size(59, 25);
			this->radioButton_Hard->TabIndex = 0;
			this->radioButton_Hard->Text = L"Hard";
			this->radioButton_Hard->UseVisualStyleBackColor = true;
			// 
			// groupBox_GameDifficulty
			// 
			this->groupBox_GameDifficulty->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_GameDifficulty->BackColor = System::Drawing::Color::Transparent;
			this->groupBox_GameDifficulty->Controls->Add(this->button_Exit_Cancel);
			this->groupBox_GameDifficulty->Controls->Add(this->radioButton_Easy);
			this->groupBox_GameDifficulty->Controls->Add(this->button_Start);
			this->groupBox_GameDifficulty->Controls->Add(this->radioButton_Hard);
			this->groupBox_GameDifficulty->Controls->Add(this->radioButton_Normal);
			this->groupBox_GameDifficulty->Location = System::Drawing::Point(154, 20);
			this->groupBox_GameDifficulty->Name = L"groupBox_GameDifficulty";
			this->groupBox_GameDifficulty->Size = System::Drawing::Size(178, 92);
			this->groupBox_GameDifficulty->TabIndex = 1;
			this->groupBox_GameDifficulty->TabStop = false;
			// 
			// button_Exit_Cancel
			// 
			this->button_Exit_Cancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Exit_Cancel->BackColor = System::Drawing::Color::Transparent;
			this->button_Exit_Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_Exit_Cancel->FlatAppearance->BorderSize = 0;
			this->button_Exit_Cancel->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_Exit_Cancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Exit_Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Exit_Cancel->Font = (gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Exit_Cancel->Location = System::Drawing::Point(98, 56);
			this->button_Exit_Cancel->Name = L"button_Exit_Cancel";
			this->button_Exit_Cancel->Size = System::Drawing::Size(45, 30);
			this->button_Exit_Cancel->TabIndex = 4;
			this->button_Exit_Cancel->Text = L"Exit";
			this->button_Exit_Cancel->UseVisualStyleBackColor = false;
			this->button_Exit_Cancel->Click += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Exit_Cancel_Click);
			this->button_Exit_Cancel->Enter += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Exit_Cancel_Enter);
			this->button_Exit_Cancel->Leave += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Exit_Cancel_Leave);
			this->button_Exit_Cancel->MouseEnter += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Exit_Cancel_MouseEnter);
			this->button_Exit_Cancel->MouseLeave += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Exit_Cancel_MouseLeave);
			// 
			// button_Start
			// 
			this->button_Start->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Start->BackColor = System::Drawing::Color::Transparent;
			this->button_Start->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_Start->FlatAppearance->BorderSize = 0;
			this->button_Start->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_Start->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Start->Font = (gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Start->ForeColor = System::Drawing::Color::OrangeRed;
			this->button_Start->Location = System::Drawing::Point(81, 9);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(85, 41);
			this->button_Start->TabIndex = 3;
			this->button_Start->Text = L"Start";
			this->button_Start->UseVisualStyleBackColor = false;
			this->button_Start->Click += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Start_Click);
			this->button_Start->Enter += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Start_Enter);
			this->button_Start->Leave += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Start_Leave);
			this->button_Start->MouseEnter += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Start_MouseEnter);
			this->button_Start->MouseLeave += gcnew System::EventHandler(this, &DifficultyLevelSelection::Button_Start_MouseLeave);
			// 
			// label_ChooseGameDifficulty
			// 
			this->label_ChooseGameDifficulty->AutoSize = true;
			this->label_ChooseGameDifficulty->BackColor = System::Drawing::Color::Transparent;
			this->label_ChooseGameDifficulty->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_ChooseGameDifficulty->ForeColor = System::Drawing::Color::Navy;
			this->label_ChooseGameDifficulty->Location = System::Drawing::Point(2, 0);
			this->label_ChooseGameDifficulty->Name = L"label_ChooseGameDifficulty";
			this->label_ChooseGameDifficulty->Size = System::Drawing::Size(331, 26);
			this->label_ChooseGameDifficulty->TabIndex = 2;
			this->label_ChooseGameDifficulty->Text = L"Choice of mode and difficulty of the game";
			// 
			// radioButtonSinglePlayerGame
			// 
			this->radioButtonSinglePlayerGame->AutoSize = true;
			this->radioButtonSinglePlayerGame->Checked = true;
			this->radioButtonSinglePlayerGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonSinglePlayerGame->Location = System::Drawing::Point(5, 35);
			this->radioButtonSinglePlayerGame->Name = L"radioButtonSinglePlayerGame";
			this->radioButtonSinglePlayerGame->Size = System::Drawing::Size(142, 25);
			this->radioButtonSinglePlayerGame->TabIndex = 3;
			this->radioButtonSinglePlayerGame->TabStop = true;
			this->radioButtonSinglePlayerGame->Text = L"Single player game";
			this->radioButtonSinglePlayerGame->UseVisualStyleBackColor = true;
			// 
			// radioButtonMultiplayerGame
			// 
			this->radioButtonMultiplayerGame->AutoSize = true;
			this->radioButtonMultiplayerGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonMultiplayerGame->Location = System::Drawing::Point(5, 66);
			this->radioButtonMultiplayerGame->Name = L"radioButtonMultiplayerGame";
			this->radioButtonMultiplayerGame->Size = System::Drawing::Size(132, 25);
			this->radioButtonMultiplayerGame->TabIndex = 3;
			this->radioButtonMultiplayerGame->Text = L"Multiplayer game";
			this->radioButtonMultiplayerGame->UseVisualStyleBackColor = true;
			// 
			// DifficultyLevelSelection
			// 
			this->AcceptButton = this->button_Start;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(334, 113);
			this->Controls->Add(this->radioButtonMultiplayerGame);
			this->Controls->Add(this->radioButtonSinglePlayerGame);
			this->Controls->Add(this->label_ChooseGameDifficulty);
			this->Controls->Add(this->groupBox_GameDifficulty);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(334, 113);
			this->MinimizeBox = false;
			this->Name = L"DifficultyLevelSelection";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Difficulty";
			this->groupBox_GameDifficulty->ResumeLayout(false);
			this->groupBox_GameDifficulty->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button_Start_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Button_Exit_Cancel_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Start_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Start_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Exit_Cancel_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Exit_Cancel_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Start_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Start_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Exit_Cancel_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Button_Exit_Cancel_Leave(System::Object^ sender, System::EventArgs^ e);
};
}
