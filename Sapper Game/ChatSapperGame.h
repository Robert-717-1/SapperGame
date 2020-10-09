#pragma once



namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ChatSapperGame
	/// </summary>
	public ref class ChatSapperGame : public System::Windows::Forms::Form
	{
	public:
		ChatSapperGame(void)
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
		~ChatSapperGame()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private:

	public:


	private: System::Windows::Forms::Timer^ timerMsgServer;
	private: System::ComponentModel::IContainer^ components;

	protected:



	private:


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
			this->timerMsgServer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timerMsgServer
			// 
			this->timerMsgServer->Enabled = true;
			// 
			// ChatSapperGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(400, 173);
			this->Name = L"ChatSapperGame";
			this->Text = L"ChatSapperGame";
			this->Load += gcnew System::EventHandler(this, &ChatSapperGame::ChatSapperGame_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void RichTextBoxGetMessage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
private: System::Void RichTextBoxGetMessage_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void ButtonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ChatSapperGame_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void ButtonAddEditNickname_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

	
}