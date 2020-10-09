#include <winsock2.h>
#include <iostream>
#include <string>
#include <Windows.h>

#pragma comment(lib, "ws2_32.lib")
#pragma warning(disable: 4996)
#pragma once

namespace SapperGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Field
	/// </summary>
	public ref class Field : public System::Windows::Forms::Form
	{
	public:
		Field(void)
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
		~Field()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: System::Windows::Forms::GroupBox^ groupBoxTiles;
	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:
	protected: System::Windows::Forms::Button^ button5;
	protected: System::Windows::Forms::Button^ button6;
	protected: System::Windows::Forms::Button^ button7;
	protected: System::Windows::Forms::Button^ button8;
	protected: System::Windows::Forms::Button^ button3;
	protected: System::Windows::Forms::Button^ button4;
	protected: System::Windows::Forms::Button^ button2;
	protected: System::Windows::Forms::Button^ button1;
	protected: System::Windows::Forms::Button^ button10;
	protected: System::Windows::Forms::Button^ button9;
	protected: System::Windows::Forms::Button^ button11;
	protected: System::Windows::Forms::Button^ button12;
	protected: System::Windows::Forms::Button^ button13;
	protected: System::Windows::Forms::Button^ button14;
	protected: System::Windows::Forms::Button^ button15;
	protected: System::Windows::Forms::Button^ button16;
	protected: System::Windows::Forms::Button^ button17;
	protected: System::Windows::Forms::Button^ button18;
	protected: System::Windows::Forms::Button^ button19;
	protected: System::Windows::Forms::Button^ button20;
	protected: System::Windows::Forms::Button^ button21;
	protected: System::Windows::Forms::Button^ button22;
	protected: System::Windows::Forms::Button^ button23;
	protected: System::Windows::Forms::Button^ button24;
	protected: System::Windows::Forms::Button^ button25;
	protected: System::Windows::Forms::Button^ button26;
	protected: System::Windows::Forms::Button^ button27;
	protected: System::Windows::Forms::Button^ button28;
	protected: System::Windows::Forms::Button^ button29;
	protected: System::Windows::Forms::Button^ button30;
	protected: System::Windows::Forms::Button^ button31;
	protected: System::Windows::Forms::Button^ button32;
	protected: System::Windows::Forms::Button^ button33;
	protected: System::Windows::Forms::Button^ button34;
	protected: System::Windows::Forms::Button^ button35;
	protected: System::Windows::Forms::Button^ button36;
	protected: System::Windows::Forms::Button^ button37;
	protected: System::Windows::Forms::Button^ button38;
	protected: System::Windows::Forms::Button^ button39;
	protected: System::Windows::Forms::Button^ button40;
	protected: System::Windows::Forms::Button^ button41;
	protected: System::Windows::Forms::Button^ button42;
	protected: System::Windows::Forms::Button^ button43;
	protected: System::Windows::Forms::Button^ button44;
	protected: System::Windows::Forms::Button^ button45;
	protected: System::Windows::Forms::Button^ button46;
	protected: System::Windows::Forms::Button^ button47;
	protected: System::Windows::Forms::Button^ button48;
	protected: System::Windows::Forms::Button^ button49;
	protected: System::Windows::Forms::Button^ button50;
	protected: System::Windows::Forms::Button^ button51;
	protected: System::Windows::Forms::Button^ button52;
	protected: System::Windows::Forms::Button^ button53;
	protected: System::Windows::Forms::Button^ button54;
	protected: System::Windows::Forms::Button^ button55;
	protected: System::Windows::Forms::Button^ button56;
	protected: System::Windows::Forms::Button^ button57;
	protected: System::Windows::Forms::Button^ button58;
	protected: System::Windows::Forms::Button^ button59;
	protected: System::Windows::Forms::Button^ button60;
	protected: System::Windows::Forms::Button^ button61;
	protected: System::Windows::Forms::Button^ button62;
	protected: System::Windows::Forms::Button^ button63;
	protected: System::Windows::Forms::Button^ button64;
	protected: System::Windows::Forms::Button^ button65;
	protected: System::Windows::Forms::Button^ button66;
	protected: System::Windows::Forms::Button^ button67;
	protected: System::Windows::Forms::Button^ button68;
	protected: System::Windows::Forms::Button^ button69;
	protected: System::Windows::Forms::Button^ button70;
	protected: System::Windows::Forms::Button^ button71;
	protected: System::Windows::Forms::Button^ button72;
	protected: System::Windows::Forms::Button^ button73;
	protected: System::Windows::Forms::Button^ button74;
	protected: System::Windows::Forms::Button^ button75;
	protected: System::Windows::Forms::Button^ button76;
	protected: System::Windows::Forms::Button^ button77;
	protected: System::Windows::Forms::Button^ button78;
	protected: System::Windows::Forms::Button^ button79;
	protected: System::Windows::Forms::Button^ button80;
	protected: System::Windows::Forms::Button^ button81;
	protected: System::Windows::Forms::Button^ button82;
	protected: System::Windows::Forms::Button^ button83;
	protected: System::Windows::Forms::Button^ button84;
	protected: System::Windows::Forms::Button^ button85;
	protected: System::Windows::Forms::Button^ button86;
	protected: System::Windows::Forms::Button^ button87;
	protected: System::Windows::Forms::Button^ button88;
	protected: System::Windows::Forms::Button^ button89;
	protected: System::Windows::Forms::Button^ button90;
	protected: System::Windows::Forms::Button^ button91;
	protected: System::Windows::Forms::Button^ button92;
	protected: System::Windows::Forms::Button^ button93;
	protected: System::Windows::Forms::Button^ button94;
	protected: System::Windows::Forms::Button^ button95;
	protected: System::Windows::Forms::Button^ button96;
	protected: System::Windows::Forms::Button^ button97;
	protected: System::Windows::Forms::Button^ button98;
	protected: System::Windows::Forms::Button^ button99;
	protected: System::Windows::Forms::Button^ button100;
	private: System::Windows::Forms::Button^ buttonNewGame;

	protected: System::Windows::Forms::ImageList^ imageList_imagesOnTiles;
	protected: System::Windows::Forms::Label^ labelCountMinesValue1;

	protected: System::Windows::Forms::ImageList^ imageList_imagesForTimeAndCountMines;
	protected: System::Windows::Forms::Label^ labelCountMinesValue2;
	protected: System::Windows::Forms::Label^ labelCountMinesValue3;
	protected: System::Windows::Forms::GroupBox^ groupBoxTimeAndRemainingMinesLable;













	protected: System::Windows::Forms::Button^ buttonDifficultyLevelSelection;
	private: System::Windows::Forms::ToolTip^ toolTipForButtonDifficultyLevelSelection;
	private: System::Windows::Forms::Timer^ timer;
	protected: System::Windows::Forms::Label^ labelTimeValue3;

	protected: System::Windows::Forms::Label^ labelTimeValue1;
	protected: System::Windows::Forms::Label^ labelDelimiterBetweenMinutesAndSeconds;

	protected: System::Windows::Forms::Label^ labelTimeValue2;
	protected: System::Windows::Forms::Label^ labelTimeValue4;
	private: System::Windows::Forms::Label^ labelBomb;
	protected: System::Windows::Forms::ImageList^ imageList_smiles;
	protected: System::Windows::Forms::Label^ labelNicknameChat;

	protected: System::Windows::Forms::Button^ buttonSaveAndChangeNickname;

	public: System::Windows::Forms::Button^ buttonEnter;
	private:
	private: System::Windows::Forms::TextBox^ textBoxNickname;
	public:
	protected: System::Windows::Forms::RichTextBox^ richTextBoxMessageEnter;
	protected: System::Windows::Forms::RichTextBox^ richTextBoxGetMessage;
	private: System::Windows::Forms::Timer^ timerMsgServer;
	private: System::Windows::Forms::Button^ buttonConnect;
	private: System::Windows::Forms::RichTextBox^ richTextBoxRating;






	private: System::Windows::Forms::Label^ labelNicknameRating;
	private: System::Windows::Forms::ImageList^ imageList_imagesForSendButton;
	private: System::Windows::Forms::ImageList^ imageListSaveAndChange;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	protected: System::Windows::Forms::Button^ buttonInvitation;
	protected: System::Windows::Forms::Button^ buttonStartPairGame;
	protected: System::Windows::Forms::Panel^ panelLoading;

	private: System::Windows::Forms::Label^ labelLoadingText;



	private: System::Windows::Forms::ImageList^ imageList_imagesLoadingCircle;
	private: System::Windows::Forms::ImageList^ imageList_imagesConnectedAndDisconnected;
	private: System::Windows::Forms::Label^ labelMessageLength;
	private: System::Windows::Forms::PictureBox^ pictureBoxLoading;
















	private:











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Field::typeid));
			this->groupBoxTiles = (gcnew System::Windows::Forms::GroupBox());
			this->panelLoading = (gcnew System::Windows::Forms::Panel());
			this->pictureBoxLoading = (gcnew System::Windows::Forms::PictureBox());
			this->labelLoadingText = (gcnew System::Windows::Forms::Label());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->groupBoxTimeAndRemainingMinesLable = (gcnew System::Windows::Forms::GroupBox());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->labelBomb = (gcnew System::Windows::Forms::Label());
			this->labelTimeValue4 = (gcnew System::Windows::Forms::Label());
			this->labelTimeValue3 = (gcnew System::Windows::Forms::Label());
			this->labelTimeValue1 = (gcnew System::Windows::Forms::Label());
			this->labelDelimiterBetweenMinutesAndSeconds = (gcnew System::Windows::Forms::Label());
			this->labelTimeValue2 = (gcnew System::Windows::Forms::Label());
			this->buttonDifficultyLevelSelection = (gcnew System::Windows::Forms::Button());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->labelCountMinesValue1 = (gcnew System::Windows::Forms::Label());
			this->labelCountMinesValue3 = (gcnew System::Windows::Forms::Label());
			this->labelCountMinesValue2 = (gcnew System::Windows::Forms::Label());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList_imagesOnTiles = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList_imagesForTimeAndCountMines = (gcnew System::Windows::Forms::ImageList(this->components));
			this->toolTipForButtonDifficultyLevelSelection = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList_smiles = (gcnew System::Windows::Forms::ImageList(this->components));
			this->labelNicknameChat = (gcnew System::Windows::Forms::Label());
			this->buttonSaveAndChangeNickname = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->textBoxNickname = (gcnew System::Windows::Forms::TextBox());
			this->richTextBoxMessageEnter = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxGetMessage = (gcnew System::Windows::Forms::RichTextBox());
			this->timerMsgServer = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBoxRating = (gcnew System::Windows::Forms::RichTextBox());
			this->labelNicknameRating = (gcnew System::Windows::Forms::Label());
			this->imageList_imagesForSendButton = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageListSaveAndChange = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonInvitation = (gcnew System::Windows::Forms::Button());
			this->buttonStartPairGame = (gcnew System::Windows::Forms::Button());
			this->imageList_imagesLoadingCircle = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList_imagesConnectedAndDisconnected = (gcnew System::Windows::Forms::ImageList(this->components));
			this->labelMessageLength = (gcnew System::Windows::Forms::Label());
			this->groupBoxTiles->SuspendLayout();
			this->panelLoading->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLoading))->BeginInit();
			this->groupBoxTimeAndRemainingMinesLable->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxTiles
			// 
			resources->ApplyResources(this->groupBoxTiles, L"groupBoxTiles");
			this->groupBoxTiles->BackColor = System::Drawing::Color::Silver;
			this->groupBoxTiles->Controls->Add(this->panelLoading);
			this->groupBoxTiles->Controls->Add(this->button81);
			this->groupBoxTiles->Controls->Add(this->groupBoxTimeAndRemainingMinesLable);
			this->groupBoxTiles->Controls->Add(this->button82);
			this->groupBoxTiles->Controls->Add(this->button83);
			this->groupBoxTiles->Controls->Add(this->button84);
			this->groupBoxTiles->Controls->Add(this->button85);
			this->groupBoxTiles->Controls->Add(this->button86);
			this->groupBoxTiles->Controls->Add(this->button87);
			this->groupBoxTiles->Controls->Add(this->button88);
			this->groupBoxTiles->Controls->Add(this->button89);
			this->groupBoxTiles->Controls->Add(this->button90);
			this->groupBoxTiles->Controls->Add(this->button91);
			this->groupBoxTiles->Controls->Add(this->button92);
			this->groupBoxTiles->Controls->Add(this->button93);
			this->groupBoxTiles->Controls->Add(this->button94);
			this->groupBoxTiles->Controls->Add(this->button95);
			this->groupBoxTiles->Controls->Add(this->button96);
			this->groupBoxTiles->Controls->Add(this->button97);
			this->groupBoxTiles->Controls->Add(this->button98);
			this->groupBoxTiles->Controls->Add(this->button99);
			this->groupBoxTiles->Controls->Add(this->button100);
			this->groupBoxTiles->Controls->Add(this->button71);
			this->groupBoxTiles->Controls->Add(this->button72);
			this->groupBoxTiles->Controls->Add(this->button73);
			this->groupBoxTiles->Controls->Add(this->button74);
			this->groupBoxTiles->Controls->Add(this->button75);
			this->groupBoxTiles->Controls->Add(this->button76);
			this->groupBoxTiles->Controls->Add(this->button77);
			this->groupBoxTiles->Controls->Add(this->button78);
			this->groupBoxTiles->Controls->Add(this->button79);
			this->groupBoxTiles->Controls->Add(this->button80);
			this->groupBoxTiles->Controls->Add(this->button61);
			this->groupBoxTiles->Controls->Add(this->button62);
			this->groupBoxTiles->Controls->Add(this->button63);
			this->groupBoxTiles->Controls->Add(this->button64);
			this->groupBoxTiles->Controls->Add(this->button65);
			this->groupBoxTiles->Controls->Add(this->button66);
			this->groupBoxTiles->Controls->Add(this->button67);
			this->groupBoxTiles->Controls->Add(this->button68);
			this->groupBoxTiles->Controls->Add(this->button69);
			this->groupBoxTiles->Controls->Add(this->button70);
			this->groupBoxTiles->Controls->Add(this->button51);
			this->groupBoxTiles->Controls->Add(this->button52);
			this->groupBoxTiles->Controls->Add(this->button53);
			this->groupBoxTiles->Controls->Add(this->button54);
			this->groupBoxTiles->Controls->Add(this->button55);
			this->groupBoxTiles->Controls->Add(this->button56);
			this->groupBoxTiles->Controls->Add(this->button57);
			this->groupBoxTiles->Controls->Add(this->button58);
			this->groupBoxTiles->Controls->Add(this->button59);
			this->groupBoxTiles->Controls->Add(this->button60);
			this->groupBoxTiles->Controls->Add(this->button41);
			this->groupBoxTiles->Controls->Add(this->button42);
			this->groupBoxTiles->Controls->Add(this->button43);
			this->groupBoxTiles->Controls->Add(this->button44);
			this->groupBoxTiles->Controls->Add(this->button45);
			this->groupBoxTiles->Controls->Add(this->button46);
			this->groupBoxTiles->Controls->Add(this->button47);
			this->groupBoxTiles->Controls->Add(this->button48);
			this->groupBoxTiles->Controls->Add(this->button49);
			this->groupBoxTiles->Controls->Add(this->button50);
			this->groupBoxTiles->Controls->Add(this->button31);
			this->groupBoxTiles->Controls->Add(this->button32);
			this->groupBoxTiles->Controls->Add(this->button33);
			this->groupBoxTiles->Controls->Add(this->button34);
			this->groupBoxTiles->Controls->Add(this->button35);
			this->groupBoxTiles->Controls->Add(this->button36);
			this->groupBoxTiles->Controls->Add(this->button37);
			this->groupBoxTiles->Controls->Add(this->button38);
			this->groupBoxTiles->Controls->Add(this->button39);
			this->groupBoxTiles->Controls->Add(this->button40);
			this->groupBoxTiles->Controls->Add(this->button21);
			this->groupBoxTiles->Controls->Add(this->button22);
			this->groupBoxTiles->Controls->Add(this->button23);
			this->groupBoxTiles->Controls->Add(this->button24);
			this->groupBoxTiles->Controls->Add(this->button25);
			this->groupBoxTiles->Controls->Add(this->button26);
			this->groupBoxTiles->Controls->Add(this->button27);
			this->groupBoxTiles->Controls->Add(this->button28);
			this->groupBoxTiles->Controls->Add(this->button29);
			this->groupBoxTiles->Controls->Add(this->button30);
			this->groupBoxTiles->Controls->Add(this->button11);
			this->groupBoxTiles->Controls->Add(this->button12);
			this->groupBoxTiles->Controls->Add(this->button13);
			this->groupBoxTiles->Controls->Add(this->button14);
			this->groupBoxTiles->Controls->Add(this->button15);
			this->groupBoxTiles->Controls->Add(this->button16);
			this->groupBoxTiles->Controls->Add(this->button17);
			this->groupBoxTiles->Controls->Add(this->button18);
			this->groupBoxTiles->Controls->Add(this->button19);
			this->groupBoxTiles->Controls->Add(this->button20);
			this->groupBoxTiles->Controls->Add(this->button10);
			this->groupBoxTiles->Controls->Add(this->button9);
			this->groupBoxTiles->Controls->Add(this->button5);
			this->groupBoxTiles->Controls->Add(this->button6);
			this->groupBoxTiles->Controls->Add(this->button7);
			this->groupBoxTiles->Controls->Add(this->button8);
			this->groupBoxTiles->Controls->Add(this->button3);
			this->groupBoxTiles->Controls->Add(this->button4);
			this->groupBoxTiles->Controls->Add(this->button2);
			this->groupBoxTiles->Controls->Add(this->button1);
			this->groupBoxTiles->Name = L"groupBoxTiles";
			this->groupBoxTiles->TabStop = false;
			this->groupBoxTiles->Enter += gcnew System::EventHandler(this, &Field::GroupBoxTiles_Enter);
			// 
			// panelLoading
			// 
			resources->ApplyResources(this->panelLoading, L"panelLoading");
			this->panelLoading->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelLoading->Controls->Add(this->pictureBoxLoading);
			this->panelLoading->Controls->Add(this->labelLoadingText);
			this->panelLoading->Name = L"panelLoading";
			// 
			// pictureBoxLoading
			// 
			resources->ApplyResources(this->pictureBoxLoading, L"pictureBoxLoading");
			this->pictureBoxLoading->Name = L"pictureBoxLoading";
			this->pictureBoxLoading->TabStop = false;
			// 
			// labelLoadingText
			// 
			resources->ApplyResources(this->labelLoadingText, L"labelLoadingText");
			this->labelLoadingText->Name = L"labelLoadingText";
			// 
			// button81
			// 
			this->button81->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button81, L"button81");
			this->button81->Name = L"button81";
			this->button81->UseVisualStyleBackColor = true;
			this->button81->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button81_MouseDown);
			// 
			// groupBoxTimeAndRemainingMinesLable
			// 
			resources->ApplyResources(this->groupBoxTimeAndRemainingMinesLable, L"groupBoxTimeAndRemainingMinesLable");
			this->groupBoxTimeAndRemainingMinesLable->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->buttonConnect);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelBomb);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelTimeValue4);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelTimeValue3);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelTimeValue1);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelDelimiterBetweenMinutesAndSeconds);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelTimeValue2);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->buttonDifficultyLevelSelection);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->buttonNewGame);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelCountMinesValue1);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelCountMinesValue3);
			this->groupBoxTimeAndRemainingMinesLable->Controls->Add(this->labelCountMinesValue2);
			this->groupBoxTimeAndRemainingMinesLable->Name = L"groupBoxTimeAndRemainingMinesLable";
			this->groupBoxTimeAndRemainingMinesLable->TabStop = false;
			// 
			// buttonConnect
			// 
			this->buttonConnect->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			resources->ApplyResources(this->buttonConnect, L"buttonConnect");
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->UseVisualStyleBackColor = false;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &Field::ButtonConnect_Click);
			this->buttonConnect->Enter += gcnew System::EventHandler(this, &Field::ButtonConnect_Enter);
			// 
			// labelBomb
			// 
			this->labelBomb->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelBomb, L"labelBomb");
			this->labelBomb->Name = L"labelBomb";
			// 
			// labelTimeValue4
			// 
			this->labelTimeValue4->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelTimeValue4, L"labelTimeValue4");
			this->labelTimeValue4->Name = L"labelTimeValue4";
			// 
			// labelTimeValue3
			// 
			this->labelTimeValue3->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelTimeValue3, L"labelTimeValue3");
			this->labelTimeValue3->Name = L"labelTimeValue3";
			// 
			// labelTimeValue1
			// 
			this->labelTimeValue1->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelTimeValue1, L"labelTimeValue1");
			this->labelTimeValue1->Name = L"labelTimeValue1";
			// 
			// labelDelimiterBetweenMinutesAndSeconds
			// 
			this->labelDelimiterBetweenMinutesAndSeconds->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelDelimiterBetweenMinutesAndSeconds, L"labelDelimiterBetweenMinutesAndSeconds");
			this->labelDelimiterBetweenMinutesAndSeconds->Name = L"labelDelimiterBetweenMinutesAndSeconds";
			// 
			// labelTimeValue2
			// 
			this->labelTimeValue2->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelTimeValue2, L"labelTimeValue2");
			this->labelTimeValue2->Name = L"labelTimeValue2";
			// 
			// buttonDifficultyLevelSelection
			// 
			resources->ApplyResources(this->buttonDifficultyLevelSelection, L"buttonDifficultyLevelSelection");
			this->buttonDifficultyLevelSelection->Name = L"buttonDifficultyLevelSelection";
			this->toolTipForButtonDifficultyLevelSelection->SetToolTip(this->buttonDifficultyLevelSelection, resources->GetString(L"buttonDifficultyLevelSelection.ToolTip"));
			this->buttonDifficultyLevelSelection->UseVisualStyleBackColor = true;
			this->buttonDifficultyLevelSelection->Click += gcnew System::EventHandler(this, &Field::ButtonDifficultyLevelSelection_Click);
			this->buttonDifficultyLevelSelection->Enter += gcnew System::EventHandler(this, &Field::ButtonDifficultyLevelSelection_Enter);
			// 
			// buttonNewGame
			// 
			resources->ApplyResources(this->buttonNewGame, L"buttonNewGame");
			this->buttonNewGame->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonNewGame->FlatAppearance->BorderSize = 0;
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->UseVisualStyleBackColor = true;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &Field::ButtonNewGame_Click);
			this->buttonNewGame->Enter += gcnew System::EventHandler(this, &Field::ButtonNewGame_Enter);
			// 
			// labelCountMinesValue1
			// 
			this->labelCountMinesValue1->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelCountMinesValue1, L"labelCountMinesValue1");
			this->labelCountMinesValue1->Name = L"labelCountMinesValue1";
			// 
			// labelCountMinesValue3
			// 
			this->labelCountMinesValue3->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelCountMinesValue3, L"labelCountMinesValue3");
			this->labelCountMinesValue3->Name = L"labelCountMinesValue3";
			// 
			// labelCountMinesValue2
			// 
			this->labelCountMinesValue2->BackColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->labelCountMinesValue2, L"labelCountMinesValue2");
			this->labelCountMinesValue2->Name = L"labelCountMinesValue2";
			// 
			// button82
			// 
			this->button82->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button82, L"button82");
			this->button82->Name = L"button82";
			this->button82->UseVisualStyleBackColor = true;
			this->button82->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button82_MouseDown);
			// 
			// button83
			// 
			this->button83->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button83, L"button83");
			this->button83->Name = L"button83";
			this->button83->UseVisualStyleBackColor = true;
			this->button83->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button83_MouseDown);
			// 
			// button84
			// 
			this->button84->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button84, L"button84");
			this->button84->Name = L"button84";
			this->button84->UseVisualStyleBackColor = true;
			this->button84->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button84_MouseDown);
			// 
			// button85
			// 
			this->button85->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button85, L"button85");
			this->button85->Name = L"button85";
			this->button85->UseVisualStyleBackColor = true;
			this->button85->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button85_MouseDown);
			// 
			// button86
			// 
			this->button86->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button86, L"button86");
			this->button86->Name = L"button86";
			this->button86->UseVisualStyleBackColor = true;
			this->button86->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button86_MouseDown);
			// 
			// button87
			// 
			this->button87->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button87, L"button87");
			this->button87->Name = L"button87";
			this->button87->UseVisualStyleBackColor = true;
			this->button87->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button87_MouseDown);
			// 
			// button88
			// 
			this->button88->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button88, L"button88");
			this->button88->Name = L"button88";
			this->button88->UseVisualStyleBackColor = true;
			this->button88->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button88_MouseDown);
			// 
			// button89
			// 
			this->button89->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button89, L"button89");
			this->button89->Name = L"button89";
			this->button89->UseVisualStyleBackColor = true;
			this->button89->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button89_MouseDown);
			// 
			// button90
			// 
			this->button90->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button90, L"button90");
			this->button90->Name = L"button90";
			this->button90->UseVisualStyleBackColor = true;
			this->button90->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button90_MouseDown);
			// 
			// button91
			// 
			this->button91->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button91, L"button91");
			this->button91->Name = L"button91";
			this->button91->UseVisualStyleBackColor = true;
			this->button91->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button91_MouseDown);
			// 
			// button92
			// 
			this->button92->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button92, L"button92");
			this->button92->Name = L"button92";
			this->button92->UseVisualStyleBackColor = true;
			this->button92->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button92_MouseDown);
			// 
			// button93
			// 
			this->button93->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button93, L"button93");
			this->button93->Name = L"button93";
			this->button93->UseVisualStyleBackColor = true;
			this->button93->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button93_MouseDown);
			// 
			// button94
			// 
			this->button94->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button94, L"button94");
			this->button94->Name = L"button94";
			this->button94->UseVisualStyleBackColor = true;
			this->button94->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button94_MouseDown);
			// 
			// button95
			// 
			this->button95->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button95, L"button95");
			this->button95->Name = L"button95";
			this->button95->UseVisualStyleBackColor = true;
			this->button95->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button95_MouseDown);
			// 
			// button96
			// 
			this->button96->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button96, L"button96");
			this->button96->Name = L"button96";
			this->button96->UseVisualStyleBackColor = true;
			this->button96->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button96_MouseDown);
			// 
			// button97
			// 
			this->button97->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button97, L"button97");
			this->button97->Name = L"button97";
			this->button97->UseVisualStyleBackColor = true;
			this->button97->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button97_MouseDown);
			// 
			// button98
			// 
			this->button98->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button98, L"button98");
			this->button98->Name = L"button98";
			this->button98->UseVisualStyleBackColor = true;
			this->button98->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button98_MouseDown);
			// 
			// button99
			// 
			this->button99->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button99, L"button99");
			this->button99->Name = L"button99";
			this->button99->UseVisualStyleBackColor = true;
			this->button99->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button99_MouseDown);
			// 
			// button100
			// 
			this->button100->AutoEllipsis = true;
			this->button100->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button100, L"button100");
			this->button100->Name = L"button100";
			this->button100->UseVisualStyleBackColor = true;
			this->button100->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button100_MouseDown);
			// 
			// button71
			// 
			this->button71->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button71, L"button71");
			this->button71->Name = L"button71";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button71_MouseDown);
			// 
			// button72
			// 
			this->button72->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button72, L"button72");
			this->button72->Name = L"button72";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button72_MouseDown);
			// 
			// button73
			// 
			this->button73->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button73, L"button73");
			this->button73->Name = L"button73";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button73_MouseDown);
			// 
			// button74
			// 
			this->button74->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button74, L"button74");
			this->button74->Name = L"button74";
			this->button74->UseVisualStyleBackColor = true;
			this->button74->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button74_MouseDown);
			// 
			// button75
			// 
			this->button75->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button75, L"button75");
			this->button75->Name = L"button75";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button75_MouseDown);
			// 
			// button76
			// 
			this->button76->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button76, L"button76");
			this->button76->Name = L"button76";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button76_MouseDown);
			// 
			// button77
			// 
			this->button77->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button77, L"button77");
			this->button77->Name = L"button77";
			this->button77->UseVisualStyleBackColor = true;
			this->button77->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button77_MouseDown);
			// 
			// button78
			// 
			this->button78->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button78, L"button78");
			this->button78->Name = L"button78";
			this->button78->UseVisualStyleBackColor = true;
			this->button78->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button78_MouseDown);
			// 
			// button79
			// 
			this->button79->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button79, L"button79");
			this->button79->Name = L"button79";
			this->button79->UseVisualStyleBackColor = true;
			this->button79->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button79_MouseDown);
			// 
			// button80
			// 
			this->button80->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button80, L"button80");
			this->button80->Name = L"button80";
			this->button80->UseVisualStyleBackColor = true;
			this->button80->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button80_MouseDown);
			// 
			// button61
			// 
			this->button61->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button61, L"button61");
			this->button61->Name = L"button61";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button61_MouseDown);
			// 
			// button62
			// 
			this->button62->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button62, L"button62");
			this->button62->Name = L"button62";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button62_MouseDown);
			// 
			// button63
			// 
			this->button63->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button63, L"button63");
			this->button63->Name = L"button63";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button63_MouseDown);
			// 
			// button64
			// 
			this->button64->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button64, L"button64");
			this->button64->Name = L"button64";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button64_MouseDown);
			// 
			// button65
			// 
			this->button65->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button65, L"button65");
			this->button65->Name = L"button65";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button65_MouseDown);
			// 
			// button66
			// 
			this->button66->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button66, L"button66");
			this->button66->Name = L"button66";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button66_MouseDown);
			// 
			// button67
			// 
			this->button67->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button67, L"button67");
			this->button67->Name = L"button67";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button67_MouseDown);
			// 
			// button68
			// 
			this->button68->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button68, L"button68");
			this->button68->Name = L"button68";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button68_MouseDown);
			// 
			// button69
			// 
			this->button69->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button69, L"button69");
			this->button69->Name = L"button69";
			this->button69->UseVisualStyleBackColor = true;
			this->button69->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button69_MouseDown);
			// 
			// button70
			// 
			this->button70->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button70, L"button70");
			this->button70->Name = L"button70";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button70_MouseDown);
			// 
			// button51
			// 
			this->button51->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button51, L"button51");
			this->button51->Name = L"button51";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button51_MouseDown);
			// 
			// button52
			// 
			this->button52->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button52, L"button52");
			this->button52->Name = L"button52";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button52_MouseDown);
			// 
			// button53
			// 
			this->button53->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button53, L"button53");
			this->button53->Name = L"button53";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button53_MouseDown);
			// 
			// button54
			// 
			this->button54->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button54, L"button54");
			this->button54->Name = L"button54";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button54_MouseDown);
			// 
			// button55
			// 
			this->button55->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button55, L"button55");
			this->button55->Name = L"button55";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button55_MouseDown);
			// 
			// button56
			// 
			this->button56->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button56, L"button56");
			this->button56->Name = L"button56";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button56_MouseDown);
			// 
			// button57
			// 
			this->button57->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button57, L"button57");
			this->button57->Name = L"button57";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button57_MouseDown);
			// 
			// button58
			// 
			this->button58->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button58, L"button58");
			this->button58->Name = L"button58";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button58_MouseDown);
			// 
			// button59
			// 
			this->button59->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button59, L"button59");
			this->button59->Name = L"button59";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button59_MouseDown);
			// 
			// button60
			// 
			this->button60->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button60, L"button60");
			this->button60->Name = L"button60";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button60_MouseDown);
			// 
			// button41
			// 
			this->button41->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button41, L"button41");
			this->button41->Name = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button41_MouseDown);
			// 
			// button42
			// 
			this->button42->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button42, L"button42");
			this->button42->Name = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button42_MouseDown);
			// 
			// button43
			// 
			this->button43->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button43, L"button43");
			this->button43->Name = L"button43";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button43_MouseDown);
			// 
			// button44
			// 
			this->button44->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button44, L"button44");
			this->button44->Name = L"button44";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button44_MouseDown);
			// 
			// button45
			// 
			this->button45->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button45, L"button45");
			this->button45->Name = L"button45";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button45_MouseDown);
			// 
			// button46
			// 
			this->button46->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button46, L"button46");
			this->button46->Name = L"button46";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button46_MouseDown);
			// 
			// button47
			// 
			this->button47->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button47, L"button47");
			this->button47->Name = L"button47";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button47_MouseDown);
			// 
			// button48
			// 
			this->button48->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button48, L"button48");
			this->button48->Name = L"button48";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button48_MouseDown);
			// 
			// button49
			// 
			this->button49->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button49, L"button49");
			this->button49->Name = L"button49";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button49_MouseDown);
			// 
			// button50
			// 
			this->button50->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button50, L"button50");
			this->button50->Name = L"button50";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button50_MouseDown);
			// 
			// button31
			// 
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button31, L"button31");
			this->button31->Name = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button31_MouseDown);
			// 
			// button32
			// 
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button32, L"button32");
			this->button32->Name = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button32_MouseDown);
			// 
			// button33
			// 
			this->button33->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button33, L"button33");
			this->button33->Name = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button33_MouseDown);
			// 
			// button34
			// 
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button34, L"button34");
			this->button34->Name = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button34_MouseDown);
			// 
			// button35
			// 
			this->button35->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button35, L"button35");
			this->button35->Name = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button35_MouseDown);
			// 
			// button36
			// 
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button36, L"button36");
			this->button36->Name = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button36_MouseDown);
			// 
			// button37
			// 
			this->button37->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button37, L"button37");
			this->button37->Name = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button37_MouseDown);
			// 
			// button38
			// 
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button38, L"button38");
			this->button38->Name = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button38_MouseDown);
			// 
			// button39
			// 
			this->button39->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button39, L"button39");
			this->button39->Name = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button39_MouseDown);
			// 
			// button40
			// 
			this->button40->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button40, L"button40");
			this->button40->Name = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button40_MouseDown);
			// 
			// button21
			// 
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button21, L"button21");
			this->button21->Name = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button21_MouseDown);
			// 
			// button22
			// 
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button22, L"button22");
			this->button22->Name = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button22_MouseDown);
			// 
			// button23
			// 
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button23, L"button23");
			this->button23->Name = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button23_MouseDown);
			// 
			// button24
			// 
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button24, L"button24");
			this->button24->Name = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button24_MouseDown);
			// 
			// button25
			// 
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button25, L"button25");
			this->button25->Name = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button25_MouseDown);
			// 
			// button26
			// 
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button26, L"button26");
			this->button26->Name = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button26_MouseDown);
			// 
			// button27
			// 
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button27, L"button27");
			this->button27->Name = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button27_MouseDown);
			// 
			// button28
			// 
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button28, L"button28");
			this->button28->Name = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button28_MouseDown);
			// 
			// button29
			// 
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button29, L"button29");
			this->button29->Name = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button29_MouseDown);
			// 
			// button30
			// 
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button30, L"button30");
			this->button30->Name = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button30_MouseDown);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button11_MouseDown);
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button12, L"button12");
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button12_MouseDown);
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button13, L"button13");
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button13_MouseDown);
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button14, L"button14");
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button14_MouseDown);
			// 
			// button15
			// 
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button15, L"button15");
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button15_MouseDown);
			// 
			// button16
			// 
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button16, L"button16");
			this->button16->Name = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button16_MouseDown);
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button17, L"button17");
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button17_MouseDown);
			// 
			// button18
			// 
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button18, L"button18");
			this->button18->Name = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button18_MouseDown);
			// 
			// button19
			// 
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button19, L"button19");
			this->button19->Name = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button19_MouseDown);
			// 
			// button20
			// 
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button20, L"button20");
			this->button20->Name = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button20_MouseDown);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button10_MouseDown);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button9_MouseDown);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button5_MouseDown);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button6_MouseDown);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button7_MouseDown);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button8_MouseDown);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button3_MouseDown);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button4_MouseDown);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button2_MouseDown);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::Button1_MouseDown);
			// 
			// imageList_imagesOnTiles
			// 
			this->imageList_imagesOnTiles->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesOnTiles.ImageStream")));
			this->imageList_imagesOnTiles->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesOnTiles->Images->SetKeyName(0, L"tile.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(1, L"value1.jpg");
			this->imageList_imagesOnTiles->Images->SetKeyName(2, L"value2.jpg");
			this->imageList_imagesOnTiles->Images->SetKeyName(3, L"value3.jpg");
			this->imageList_imagesOnTiles->Images->SetKeyName(4, L"value4.jpg");
			this->imageList_imagesOnTiles->Images->SetKeyName(5, L"value5.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(6, L"value6.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(7, L"value7.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(8, L"value8.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(9, L"emptyCell.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(10, L"mine.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(11, L"deadMine.JPG");
			this->imageList_imagesOnTiles->Images->SetKeyName(12, L"bombMark.jpg");
			this->imageList_imagesOnTiles->Images->SetKeyName(13, L"doNotBombMark.jpg");
			// 
			// imageList_imagesForTimeAndCountMines
			// 
			this->imageList_imagesForTimeAndCountMines->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesForTimeAndCountMines.ImageStream")));
			this->imageList_imagesForTimeAndCountMines->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(0, L"value0.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(1, L"value1.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(2, L"value2.JPG");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(3, L"value3.JPG");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(4, L"value4.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(5, L"value5.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(6, L"value6.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(7, L"value7.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(8, L"value8.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(9, L"value9.jpg");
			this->imageList_imagesForTimeAndCountMines->Images->SetKeyName(10, L"labelDelimiterBetweenMinutesAndSeconds.JPG");
			// 
			// toolTipForButtonDifficultyLevelSelection
			// 
			this->toolTipForButtonDifficultyLevelSelection->AutoPopDelay = 5000;
			this->toolTipForButtonDifficultyLevelSelection->BackColor = System::Drawing::SystemColors::HotTrack;
			this->toolTipForButtonDifficultyLevelSelection->InitialDelay = 0;
			this->toolTipForButtonDifficultyLevelSelection->ReshowDelay = 100;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &Field::Timer_Tick);
			// 
			// imageList_smiles
			// 
			this->imageList_smiles->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_smiles.ImageStream")));
			this->imageList_smiles->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_smiles->Images->SetKeyName(0, L"funnySmiley.JPG");
			this->imageList_smiles->Images->SetKeyName(1, L"sadSmiley.JPG");
			// 
			// labelNicknameChat
			// 
			resources->ApplyResources(this->labelNicknameChat, L"labelNicknameChat");
			this->labelNicknameChat->ForeColor = System::Drawing::Color::Red;
			this->labelNicknameChat->Name = L"labelNicknameChat";
			// 
			// buttonSaveAndChangeNickname
			// 
			resources->ApplyResources(this->buttonSaveAndChangeNickname, L"buttonSaveAndChangeNickname");
			this->buttonSaveAndChangeNickname->FlatAppearance->BorderColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonSaveAndChangeNickname->FlatAppearance->BorderSize = 0;
			this->buttonSaveAndChangeNickname->Name = L"buttonSaveAndChangeNickname";
			this->buttonSaveAndChangeNickname->UseVisualStyleBackColor = true;
			this->buttonSaveAndChangeNickname->Click += gcnew System::EventHandler(this, &Field::ButtonSaveAndChangeNickname_Click);
			this->buttonSaveAndChangeNickname->Enter += gcnew System::EventHandler(this, &Field::ButtonSaveAndChangeNickname_Enter);
			// 
			// buttonEnter
			// 
			resources->ApplyResources(this->buttonEnter, L"buttonEnter");
			this->buttonEnter->FlatAppearance->BorderSize = 0;
			this->buttonEnter->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonEnter->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &Field::ButtonEnter_Click);
			this->buttonEnter->MouseEnter += gcnew System::EventHandler(this, &Field::ButtonEnter_MouseEnter);
			this->buttonEnter->MouseLeave += gcnew System::EventHandler(this, &Field::ButtonEnter_MouseLeave);
			// 
			// textBoxNickname
			// 
			resources->ApplyResources(this->textBoxNickname, L"textBoxNickname");
			this->textBoxNickname->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxNickname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNickname->Name = L"textBoxNickname";
			this->textBoxNickname->TextChanged += gcnew System::EventHandler(this, &Field::TextBoxNickname_TextChanged);
			this->textBoxNickname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Field::TextBoxNickname_KeyPress);
			// 
			// richTextBoxMessageEnter
			// 
			resources->ApplyResources(this->richTextBoxMessageEnter, L"richTextBoxMessageEnter");
			this->richTextBoxMessageEnter->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->richTextBoxMessageEnter->ForeColor = System::Drawing::Color::Black;
			this->richTextBoxMessageEnter->Name = L"richTextBoxMessageEnter";
			this->richTextBoxMessageEnter->Click += gcnew System::EventHandler(this, &Field::RichTextBoxMessageEnter_Click);
			this->richTextBoxMessageEnter->TextChanged += gcnew System::EventHandler(this, &Field::RichTextBoxMessageEnter_TextChanged);
			this->richTextBoxMessageEnter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Field::RichTextBoxMessageEnter_KeyDown);
			this->richTextBoxMessageEnter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Field::RichTextBoxMessageEnter_KeyPress);
			// 
			// richTextBoxGetMessage
			// 
			resources->ApplyResources(this->richTextBoxGetMessage, L"richTextBoxGetMessage");
			this->richTextBoxGetMessage->AutoWordSelection = true;
			this->richTextBoxGetMessage->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->richTextBoxGetMessage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBoxGetMessage->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBoxGetMessage->EnableAutoDragDrop = true;
			this->richTextBoxGetMessage->ForeColor = System::Drawing::Color::Black;
			this->richTextBoxGetMessage->Name = L"richTextBoxGetMessage";
			this->richTextBoxGetMessage->ReadOnly = true;
			this->richTextBoxGetMessage->TabStop = false;
			this->richTextBoxGetMessage->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::RichTextBoxGetMessage_MouseDown);
			this->richTextBoxGetMessage->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Field::RichTextBoxGetMessage_MouseUp);
			// 
			// timerMsgServer
			// 
			this->timerMsgServer->Enabled = true;
			this->timerMsgServer->Interval = 1;
			this->timerMsgServer->Tick += gcnew System::EventHandler(this, &Field::TimerMsgServer_Tick);
			// 
			// richTextBoxRating
			// 
			this->richTextBoxRating->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->richTextBoxRating->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBoxRating->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->richTextBoxRating->DetectUrls = false;
			resources->ApplyResources(this->richTextBoxRating, L"richTextBoxRating");
			this->richTextBoxRating->ForeColor = System::Drawing::Color::White;
			this->richTextBoxRating->Name = L"richTextBoxRating";
			this->richTextBoxRating->TabStop = false;
			this->richTextBoxRating->Enter += gcnew System::EventHandler(this, &Field::RichTextBoxRating_Enter);
			// 
			// labelNicknameRating
			// 
			resources->ApplyResources(this->labelNicknameRating, L"labelNicknameRating");
			this->labelNicknameRating->ForeColor = System::Drawing::Color::Blue;
			this->labelNicknameRating->Name = L"labelNicknameRating";
			// 
			// imageList_imagesForSendButton
			// 
			this->imageList_imagesForSendButton->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesForSendButton.ImageStream")));
			this->imageList_imagesForSendButton->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesForSendButton->Images->SetKeyName(0, L"MessageSendButton1.png");
			this->imageList_imagesForSendButton->Images->SetKeyName(1, L"MessageSendButton2.png");
			// 
			// imageListSaveAndChange
			// 
			this->imageListSaveAndChange->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListSaveAndChange.ImageStream")));
			this->imageListSaveAndChange->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListSaveAndChange->Images->SetKeyName(0, L"Save.png");
			this->imageListSaveAndChange->Images->SetKeyName(1, L"Change.PNG");
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// buttonInvitation
			// 
			resources->ApplyResources(this->buttonInvitation, L"buttonInvitation");
			this->buttonInvitation->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonInvitation->CausesValidation = false;
			this->buttonInvitation->Name = L"buttonInvitation";
			this->buttonInvitation->UseMnemonic = false;
			this->buttonInvitation->UseVisualStyleBackColor = false;
			this->buttonInvitation->Click += gcnew System::EventHandler(this, &Field::ButtonInvitation_Click);
			// 
			// buttonStartPairGame
			// 
			resources->ApplyResources(this->buttonStartPairGame, L"buttonStartPairGame");
			this->buttonStartPairGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonStartPairGame->Name = L"buttonStartPairGame";
			this->buttonStartPairGame->UseVisualStyleBackColor = false;
			this->buttonStartPairGame->Click += gcnew System::EventHandler(this, &Field::ButtonStartPairGame_Click);
			// 
			// imageList_imagesLoadingCircle
			// 
			this->imageList_imagesLoadingCircle->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesLoadingCircle.ImageStream")));
			this->imageList_imagesLoadingCircle->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesLoadingCircle->Images->SetKeyName(0, L"LoadingCircle1.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(1, L"LoadingCircle2.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(2, L"LoadingCircle3.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(3, L"LoadingCircle4.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(4, L"LoadingCircle5.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(5, L"LoadingCircle6.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(6, L"LoadingCircle7.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(7, L"LoadingCircle8.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(8, L"LoadingCircle9.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(9, L"LoadingCircle10.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(10, L"LoadingCircle11.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(11, L"LoadingCircle12.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(12, L"LoadingCircle13.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(13, L"LoadingCircle14.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(14, L"LoadingCircle15.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(15, L"LoadingCircle16.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(16, L"LoadingCircle17.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(17, L"LoadingCircle18.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(18, L"LoadingCircle19.png");
			this->imageList_imagesLoadingCircle->Images->SetKeyName(19, L"LoadingCircle20.png");
			// 
			// imageList_imagesConnectedAndDisconnected
			// 
			this->imageList_imagesConnectedAndDisconnected->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList_imagesConnectedAndDisconnected.ImageStream")));
			this->imageList_imagesConnectedAndDisconnected->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList_imagesConnectedAndDisconnected->Images->SetKeyName(0, L"imageDisconnected.PNG");
			this->imageList_imagesConnectedAndDisconnected->Images->SetKeyName(1, L"imageConnected.PNG");
			// 
			// labelMessageLength
			// 
			resources->ApplyResources(this->labelMessageLength, L"labelMessageLength");
			this->labelMessageLength->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->labelMessageLength->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelMessageLength->Name = L"labelMessageLength";
			// 
			// Field
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Controls->Add(this->labelMessageLength);
			this->Controls->Add(this->buttonStartPairGame);
			this->Controls->Add(this->buttonInvitation);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBoxRating);
			this->Controls->Add(this->labelNicknameRating);
			this->Controls->Add(this->labelNicknameChat);
			this->Controls->Add(this->buttonSaveAndChangeNickname);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->textBoxNickname);
			this->Controls->Add(this->richTextBoxMessageEnter);
			this->Controls->Add(this->richTextBoxGetMessage);
			this->Controls->Add(this->groupBoxTiles);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Field";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Field::Field_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Field::Field_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Field::Field_KeyPress);
			this->groupBoxTiles->ResumeLayout(false);
			this->groupBoxTiles->PerformLayout();
			this->panelLoading->ResumeLayout(false);
			this->panelLoading->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLoading))->EndInit();
			this->groupBoxTimeAndRemainingMinesLable->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		#pragma endregion
	protected:
		SOCKET ConnectionMsgServer;

		bool Host = false;
		String^ OldNickname = "";
		String^ messageText = "";
		int Time_Between_Clicks = 0;

		bool foundConnect = false,
			 messageScrolling = true,
			 backspace = false,
			 CtrlV_CtrlZ_CtrlY = false,
			 StartTimerBetweenClicks = false,
			 NicknameAdd = true, NicknameChange = false;

		int CursorX, newCursorX,
			CursorY, newCursorY;

		int countImagesLoading = 0, countLine = 1;

	public:
		String^ NicknameOfTheSecondPlayer = "";
		bool MultiplayerGame = true, pendingPlayerInvitation = false, gameWithTwoPlayersStarted = false;

		bool difficultyLevelSelection = false;
		bool FormClose = false;
		bool FirstTapOnTheField = false;
		bool found = false, victory = false, gameOver = false;
		int DeadMineStr, DeadMineColumn;
		bool CheckEmptyCell = false;
		int TheNumberOfBombsRemainingOnTheField;
		int NumberOfMines;
		int Seconds = 0, Minutes = 0;
		int NumberOfOpenCellsWithoutMines = 0;
		array<bool>^ BombMark;
		array<bool>^ LeftClick;
		array<array<bool>^>^ ArrayCheckEmptyCell;
		array<array<String^>^>^ arrCells;
		

	private: System::Void ClientHandlerMsgServer() {
	while (true) {
		char messageRecvMsgServer[2048] = "";
		String^ msg = "";
		try
		{
			int bytesIn = recv(ConnectionMsgServer, messageRecvMsgServer, sizeof(messageRecvMsgServer), NULL);
			if (bytesIn == 0) {
				if (!difficultyLevelSelection) {
					foundConnect = false;
					Invoke(gcnew Action<String^>(this, &Field::DisplayingTheReceivedMessageFromTheServer), "Disconnected.\nServer is not available.");
				}
				return;
			}
			else if (bytesIn < 0) {
				foundConnect = false;
				if (!NicknameChange) {
					if (!difficultyLevelSelection) {
						Invoke(gcnew Action<String^>(this, &Field::DisplayingTheReceivedMessageFromTheServer), "Disconnected.\nServer is not available.");
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), "Server is not available");
					}
				}
				else {
					Invoke(gcnew Action<String^>(this, &Field::DisplayingTheReceivedMessageFromTheServer), "Disconnected.\nServer is not available.");
					if (!difficultyLevelSelection) {
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), "Server is not available");
					}
				}
				return;
			}

			int index;

			if (messageRecvMsgServer[0] == '<' && messageRecvMsgServer[1] == 'g' && messageRecvMsgServer[2] == 'a' &&
				messageRecvMsgServer[3] == 'm' && messageRecvMsgServer[4] == 'e' && messageRecvMsgServer[5] == '>')
			{
				index = 6;
			}
			else if (messageRecvMsgServer[0] == '<' && messageRecvMsgServer[1] == 'm' && messageRecvMsgServer[2] == 'e' &&
				messageRecvMsgServer[3] == 's' && messageRecvMsgServer[4] == 's' && messageRecvMsgServer[5] == 'a' &&
				messageRecvMsgServer[6] == 'g' && messageRecvMsgServer[7] == 'e' && messageRecvMsgServer[8] == '>')
			{
				index = 9;
			}
			else if (messageRecvMsgServer[0] == '<' && messageRecvMsgServer[1] == 'n' && messageRecvMsgServer[2] == 'i' &&
				messageRecvMsgServer[3] == 'c' && messageRecvMsgServer[4] == 'k' && messageRecvMsgServer[5] == 'n' &&
				messageRecvMsgServer[6] == 'a' && messageRecvMsgServer[7] == 'm' && messageRecvMsgServer[8] == 'e' &&
				messageRecvMsgServer[9] == '>')
			{
				index = 10;
			}
			else if (messageRecvMsgServer[0] == '<' && messageRecvMsgServer[1] == 'r' && messageRecvMsgServer[2] == 'a' && messageRecvMsgServer[3] == 't' &&
				messageRecvMsgServer[4] == 'i' && messageRecvMsgServer[5] == 'n' && messageRecvMsgServer[6] == 'g' && messageRecvMsgServer[7] == '>' &&
				messageRecvMsgServer[8] == '<' && messageRecvMsgServer[9] == 'u' && messageRecvMsgServer[10] == 'p' && messageRecvMsgServer[11] == 'd' &&
				messageRecvMsgServer[12] == 'a' && messageRecvMsgServer[13] == 't' && messageRecvMsgServer[14] == 'e' && messageRecvMsgServer[15] == '>')
			{
				index = 16;
			}
			else {
				continue;
			}

			msg = RussianEncoding(messageRecvMsgServer, 2048, index);


			if (index == 6) {
				Invoke(gcnew Action<String^>(this, &Field::GameWithAPartner), msg);
			}
			else if (index == 10) {
				if (msg[0] == '<' && msg[1] == 's' && msg[2] == 'a' && msg[3] == 'v' && msg[4] == 'e' && msg[5] == '>')
				{
					if (msg[6] == '<' && msg[7] == 't' && msg[8] == 'r' && msg[9] == 'u' && msg[10] == 'e' && msg[11] == '>') {
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), msg);
					}
					else if (msg[6] == '<' && msg[7] == 'f' && msg[8] == 'a' && msg[9] == 'l' && msg[10] == 's' && msg[11] == 'e' && msg[12] == '>') {
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), msg);
					}
				}
				else if (msg[0] == '<' && msg[1] == 'c' && msg[2] == 'h' && msg[3] == 'e' && msg[4] == 'c' && msg[5] == 'k' && msg[6] == '>')
				{
					if (msg[7] == '<' && msg[8] == 't' && msg[9] == 'r' && msg[10] == 'u' && msg[11] == 'e' && msg[12] == '>') {
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), msg);
					}
					else if (msg[7] == '<' && msg[8] == 'f' && msg[9] == 'a' && msg[10] == 'l' && msg[11] == 's' && msg[12] == 'e' && msg[13] == '>') {
						Invoke(gcnew Action<String^>(this, &Field::AddUserNickname), msg);
					}
				}
			}
			else if (index == 16) {
				Invoke(gcnew Action<String^>(this, &Field::UpdateOverallRating), msg);
			}
			else {
				if (msg[0] == '<' && msg[1] == 'n' && msg[2] == 'i' &&
					msg[3] == 'c' && msg[4] == 'k' && msg[5] == 'n' &&
					msg[6] == 'a' && msg[7] == 'm' && msg[8] == 'e' &&
					msg[9] == '>')
				{
					if (msg[10] == '<' && msg[11] == 'c' && msg[12] == 'o' && msg[13] == 'n' && msg[14] == 'n' &&
						msg[15] == 'e' && msg[16] == 'c' && msg[17] == 't' && msg[18] == '>') {
						String^ msgTemp = msg;
						msg = "";
						for (int i = 19; i < msgTemp->Length; i++) {
							msg += msgTemp[i];
						}
						msg = "Player <" + msg + "> joins chat!";
					}
					else if (msg[10] == '<' && msg[11] == 'c' && msg[12] == 'h' && msg[13] == 'a' &&
						msg[14] == 'n' && msg[15] == 'g' && msg[16] == 'e' && msg[17] == '>')
					{
						String^ OldNick = "";
						String^ NewNick = "";
						int index = 0;
						if (msg[18] == '<' && msg[19] == 'o' && msg[20] == 'l' && msg[21] == 'd' && msg[22] == '>') {
							for (int i = 23; i < msg->Length; i++) {
								if (msg[i] == '<' && msg[i + 1] == 'n' && msg[i + 2] == 'e' && msg[i + 3] == 'w' && msg[i + 4] == '>')
								{
									index = i + 5;
									break;
								}
								OldNick += msg[i];
							}
							for (int i = index; i < msg->Length; i++) {
								NewNick += msg[i];
							}
						}
						msg = "Player <" + OldNick + "> changes nickname to <" + NewNick + ">.";
					}
					else if (msg[10] == '<' && msg[11] == 'd' && msg[12] == 'i' && msg[13] == 's' && msg[14] == 'c' && msg[15] == 'o' &&
						msg[16] == 'n' && msg[17] == 'n' && msg[18] == 'e' && msg[19] == 'c' && msg[20] == 't' && msg[21] == '>' &&
						msg[22] == '<' && msg[23] == 't' && msg[24] == 'r' && msg[25] == 'u' && msg[26] == 'e' && msg[27] == '>')
					{
						String^ msgTemp = msg;
						msg = "";
						for (int i = 28; i < msgTemp->Length; i++) {
							msg += msgTemp[i];
						}
						msg = "Player <" + msg + "> disconnected from chat.";
					}
					Invoke(gcnew Action<String^>(this, &Field::DisplayingTheReceivedMessageFromTheServer), msg);
				}
				else {
					Invoke(gcnew Action<String^>(this, &Field::DisplayingTheReceivedMessageFromTheServer), msg);
				}
			}
		}
		catch (System::OverflowException^ e)
		{
			MessageBox::Show(e->Message, "Error");
		}
	}
}

	private: System::Void ClientHandlerLoadingCircle() {
		while (true) {
			if (!panelLoading->Visible) {
				return;
			}
			Invoke(gcnew Action(this, &Field::LoadingCircleAnimation));
			if (countImagesLoading == 1) {
				Sleep(180);
			}
			Sleep(120);
		}
	}


	private: System::Void RussianEncoding(char* messageSend, String^ msg);

	private: System::String^ RussianEncoding(char* messageRecvMsgServer, int messageRecvMsgServerLength, int startIndex);

	private: System::Void ButtonClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e, Button^ button, int buttonNum);

	private: System::Void DisconnectingAPlayerFromAPairGame(String^ Nickname);

	private: System::String^ MessageTextRenderer(String^ Nickname, String^ msg);

	private: System::Void Victory();

	private: System::Void GameOver();

	private: System::Void NewGame();

	private: System::Void FieldGeneration(int indexStr, int indexColumn);

	private: System::Void SearchForEmptyNeighboringCells(int str, int column);

	private: System::Void DisclosureOfEmptyCellsandNeighboringCells(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void DisplayTheRemainingNumberOfBombs();

	private: System::Void Open_All_Cells();

	private: System::Void SendDataAboutThePlayingFieldToTheSecondPlayer();


	private: System::Void ButtonConnect_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonConnect_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonInvitation_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonStartPairGame_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e);

	private: System::Void GroupBoxTiles_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonNewGame_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Field_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Field_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);

	private: System::Void Field_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	private: System::Void ButtonDifficultyLevelSelection_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonDifficultyLevelSelection_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void LoadingCircleAnimation();

	private: System::Void GameWithAPartner(String^ gameArray);

	private: System::Void AddUserNickname(String^ msg);

	private: System::Void DisplayingTheReceivedMessageFromTheServer(String^ msg);

	private: System::Void UpdateOverallRating(String^ rating);

	private: System::Void UpdatePairlRating(String^ rating);

	private: System::Void ButtonSaveAndChangeNickname_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonSaveAndChangeNickname_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TextBoxNickname_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonEnter_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonEnter_MouseEnter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ButtonEnter_MouseLeave(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TimerMsgServer_Tick(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RichTextBoxMessageEnter_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RichTextBoxMessageEnter_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RichTextBoxMessageEnter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void RichTextBoxMessageEnter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);

	private: System::Void RichTextBoxGetMessage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void RichTextBoxGetMessage_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void RichTextBoxRating_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TextBoxNickname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);


	private: System::Void Button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button6_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button7_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button8_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button9_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button10_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button11_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button12_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button13_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button14_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button15_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button16_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button17_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button18_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button19_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button20_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button21_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button22_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button23_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button24_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button25_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button26_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button27_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button28_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button29_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button30_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button31_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button32_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button33_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button34_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button35_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button36_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button37_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button38_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button39_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button40_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button41_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button42_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button43_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button44_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button45_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button46_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button47_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button48_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button49_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button50_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button51_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button52_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button53_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button54_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button55_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button56_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button57_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button58_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button59_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button60_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button61_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button62_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button63_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button64_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button65_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button66_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button67_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button68_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button69_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button70_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button71_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button72_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button73_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button74_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button75_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button76_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button77_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button78_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button79_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button80_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button81_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button82_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button83_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button84_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button85_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button86_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button87_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button88_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button89_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button90_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button91_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button92_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button93_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button94_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button95_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button96_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button97_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button98_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button99_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void Button100_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	};
}
