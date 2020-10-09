#include "Field.h"
#include "DifficultyLevelSelection.h"
#include "FormGameOver.h"
#include "FormVictory.h"
#include "FormInvitation.h"
#include "LogicGame.h"
#include "MessageForm.h"
#include <cstdlib>
#include <ctime>

#include <cstring>
#include <algorithm>
#include <string>
#include <msclr/marshal_cppstd.h>

#pragma once

using namespace System;
using namespace System::Text;
using namespace System::Windows::Forms;
using namespace System::Threading;
using namespace msclr::interop;
[STAThread]

int main(array<String^>^ args) {
	setlocale(LC_ALL, "Rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SapperGame::DifficultyLevelSelection form;
	Application::Run(% form);
	return 0;
}

/** Перевод из кодировки переменной System::String^ в кодировку переменной char **/
System::Void SapperGame::Field::RussianEncoding(char* messageSend, String^ msg) {
	for (int i = 0; i < msg->Length; i++) {
		if (Convert::ToInt32(msg[i]) == 1040) { messageSend[i] = 'А'; }
		else if (Convert::ToInt32(msg[i]) == 1041) { messageSend[i] = 'Б'; }
		else if (Convert::ToInt32(msg[i]) == 1042) { messageSend[i] = 'В'; }
		else if (Convert::ToInt32(msg[i]) == 1043) { messageSend[i] = 'Г'; }
		else if (Convert::ToInt32(msg[i]) == 1044) { messageSend[i] = 'Д'; }
		else if (Convert::ToInt32(msg[i]) == 1045) { messageSend[i] = 'Е'; }
		else if (Convert::ToInt32(msg[i]) == 1025) { messageSend[i] = 'Ё'; }
		else if (Convert::ToInt32(msg[i]) == 1046) { messageSend[i] = 'Ж'; }
		else if (Convert::ToInt32(msg[i]) == 1047) { messageSend[i] = 'З'; }
		else if (Convert::ToInt32(msg[i]) == 1048) { messageSend[i] = 'И'; }
		else if (Convert::ToInt32(msg[i]) == 1049) { messageSend[i] = 'Й'; }
		else if (Convert::ToInt32(msg[i]) == 1050) { messageSend[i] = 'К'; }
		else if (Convert::ToInt32(msg[i]) == 1051) { messageSend[i] = 'Л'; }
		else if (Convert::ToInt32(msg[i]) == 1052) { messageSend[i] = 'М'; }
		else if (Convert::ToInt32(msg[i]) == 1053) { messageSend[i] = 'Н'; }
		else if (Convert::ToInt32(msg[i]) == 1054) { messageSend[i] = 'О'; }
		else if (Convert::ToInt32(msg[i]) == 1055) { messageSend[i] = 'П'; }
		else if (Convert::ToInt32(msg[i]) == 1056) { messageSend[i] = 'Р'; }
		else if (Convert::ToInt32(msg[i]) == 1057) { messageSend[i] = 'С'; }
		else if (Convert::ToInt32(msg[i]) == 1058) { messageSend[i] = 'Т'; }
		else if (Convert::ToInt32(msg[i]) == 1059) { messageSend[i] = 'У'; }
		else if (Convert::ToInt32(msg[i]) == 1060) { messageSend[i] = 'Ф'; }
		else if (Convert::ToInt32(msg[i]) == 1061) { messageSend[i] = 'Х'; }
		else if (Convert::ToInt32(msg[i]) == 1062) { messageSend[i] = 'Ц'; }
		else if (Convert::ToInt32(msg[i]) == 1063) { messageSend[i] = 'Ч'; }
		else if (Convert::ToInt32(msg[i]) == 1064) { messageSend[i] = 'Ш'; }
		else if (Convert::ToInt32(msg[i]) == 1065) { messageSend[i] = 'Щ'; }
		else if (Convert::ToInt32(msg[i]) == 1066) { messageSend[i] = 'Ъ'; }
		else if (Convert::ToInt32(msg[i]) == 1067) { messageSend[i] = 'Ы'; }
		else if (Convert::ToInt32(msg[i]) == 1068) { messageSend[i] = 'Ь'; }
		else if (Convert::ToInt32(msg[i]) == 1069) { messageSend[i] = 'Э'; }
		else if (Convert::ToInt32(msg[i]) == 1070) { messageSend[i] = 'Ю'; }
		else if (Convert::ToInt32(msg[i]) == 1071) { messageSend[i] = 'Я'; }
		else if (Convert::ToInt32(msg[i]) == 1072) { messageSend[i] = 'а'; }
		else if (Convert::ToInt32(msg[i]) == 1073) { messageSend[i] = 'б'; }
		else if (Convert::ToInt32(msg[i]) == 1074) { messageSend[i] = 'в'; }
		else if (Convert::ToInt32(msg[i]) == 1075) { messageSend[i] = 'г'; }
		else if (Convert::ToInt32(msg[i]) == 1076) { messageSend[i] = 'д'; }
		else if (Convert::ToInt32(msg[i]) == 1077) { messageSend[i] = 'е'; }
		else if (Convert::ToInt32(msg[i]) == 1105) { messageSend[i] = 'ё'; }
		else if (Convert::ToInt32(msg[i]) == 1078) { messageSend[i] = 'ж'; }
		else if (Convert::ToInt32(msg[i]) == 1079) { messageSend[i] = 'з'; }
		else if (Convert::ToInt32(msg[i]) == 1080) { messageSend[i] = 'и'; }
		else if (Convert::ToInt32(msg[i]) == 1081) { messageSend[i] = 'й'; }
		else if (Convert::ToInt32(msg[i]) == 1082) { messageSend[i] = 'к'; }
		else if (Convert::ToInt32(msg[i]) == 1083) { messageSend[i] = 'л'; }
		else if (Convert::ToInt32(msg[i]) == 1084) { messageSend[i] = 'м'; }
		else if (Convert::ToInt32(msg[i]) == 1085) { messageSend[i] = 'н'; }
		else if (Convert::ToInt32(msg[i]) == 1086) { messageSend[i] = 'о'; }
		else if (Convert::ToInt32(msg[i]) == 1087) { messageSend[i] = 'п'; }
		else if (Convert::ToInt32(msg[i]) == 1088) { messageSend[i] = 'р'; }
		else if (Convert::ToInt32(msg[i]) == 1089) { messageSend[i] = 'с'; }
		else if (Convert::ToInt32(msg[i]) == 1090) { messageSend[i] = 'т'; }
		else if (Convert::ToInt32(msg[i]) == 1091) { messageSend[i] = 'у'; }
		else if (Convert::ToInt32(msg[i]) == 1092) { messageSend[i] = 'ф'; }
		else if (Convert::ToInt32(msg[i]) == 1093) { messageSend[i] = 'х'; }
		else if (Convert::ToInt32(msg[i]) == 1094) { messageSend[i] = 'ц'; }
		else if (Convert::ToInt32(msg[i]) == 1095) { messageSend[i] = 'ч'; }
		else if (Convert::ToInt32(msg[i]) == 1096) { messageSend[i] = 'ш'; }
		else if (Convert::ToInt32(msg[i]) == 1097) { messageSend[i] = 'щ'; }
		else if (Convert::ToInt32(msg[i]) == 1098) { messageSend[i] = 'ъ'; }
		else if (Convert::ToInt32(msg[i]) == 1099) { messageSend[i] = 'ы'; }
		else if (Convert::ToInt32(msg[i]) == 1100) { messageSend[i] = 'ь'; }
		else if (Convert::ToInt32(msg[i]) == 1101) { messageSend[i] = 'э'; }
		else if (Convert::ToInt32(msg[i]) == 1102) { messageSend[i] = 'ю'; }
		else if (Convert::ToInt32(msg[i]) == 1103) { messageSend[i] = 'я'; }
		else { messageSend[i] = msg[i]; }
	}
}

/** Перевод из кодировки переменной char в кодировку переменной System::String^ **/
System::String^ SapperGame::Field::RussianEncoding(char* messageRecvMsgServer, int messageRecvMsgServerLength, int startIndex) {
	String^ msg = "";
	for (int i = startIndex; i < messageRecvMsgServerLength; i++) {
		if (messageRecvMsgServer[i] == '\r' && messageRecvMsgServer[i + 1] == '\n') {
			break;
		}

		if ((int)messageRecvMsgServer[i] == -64) { msg += "А"; }
		else if ((int)messageRecvMsgServer[i] == -63) { msg += "Б"; }
		else if ((int)messageRecvMsgServer[i] == -62) { msg += "В"; }
		else if ((int)messageRecvMsgServer[i] == -61) { msg += "Г"; }
		else if ((int)messageRecvMsgServer[i] == -60) { msg += "Д"; }
		else if ((int)messageRecvMsgServer[i] == -59) { msg += "Е"; }
		else if ((int)messageRecvMsgServer[i] == -88) { msg += "Ё"; }
		else if ((int)messageRecvMsgServer[i] == -58) { msg += "Ж"; }
		else if ((int)messageRecvMsgServer[i] == -57) { msg += "З"; }
		else if ((int)messageRecvMsgServer[i] == -56) { msg += "И"; }
		else if ((int)messageRecvMsgServer[i] == -55) { msg += "Й"; }
		else if ((int)messageRecvMsgServer[i] == -54) { msg += "К"; }
		else if ((int)messageRecvMsgServer[i] == -53) { msg += "Л"; }
		else if ((int)messageRecvMsgServer[i] == -52) { msg += "М"; }
		else if ((int)messageRecvMsgServer[i] == -51) { msg += "Н"; }
		else if ((int)messageRecvMsgServer[i] == -50) { msg += "О"; }
		else if ((int)messageRecvMsgServer[i] == -49) { msg += "П"; }
		else if ((int)messageRecvMsgServer[i] == -48) { msg += "Р"; }
		else if ((int)messageRecvMsgServer[i] == -47) { msg += "С"; }
		else if ((int)messageRecvMsgServer[i] == -46) { msg += "Т"; }
		else if ((int)messageRecvMsgServer[i] == -45) { msg += "У"; }
		else if ((int)messageRecvMsgServer[i] == -44) { msg += "Ф"; }
		else if ((int)messageRecvMsgServer[i] == -43) { msg += "Х"; }
		else if ((int)messageRecvMsgServer[i] == -42) { msg += "Ц"; }
		else if ((int)messageRecvMsgServer[i] == -41) { msg += "Ч"; }
		else if ((int)messageRecvMsgServer[i] == -40) { msg += "Ш"; }
		else if ((int)messageRecvMsgServer[i] == -39) { msg += "Щ"; }
		else if ((int)messageRecvMsgServer[i] == -38) { msg += "Ъ"; }
		else if ((int)messageRecvMsgServer[i] == -37) { msg += "Ы"; }
		else if ((int)messageRecvMsgServer[i] == -36) { msg += "Ь"; }
		else if ((int)messageRecvMsgServer[i] == -35) { msg += "Э"; }
		else if ((int)messageRecvMsgServer[i] == -34) { msg += "Ю"; }
		else if ((int)messageRecvMsgServer[i] == -33) { msg += "Я"; }
		else if ((int)messageRecvMsgServer[i] == -32) { msg += "а"; }
		else if ((int)messageRecvMsgServer[i] == -31) { msg += "б"; }
		else if ((int)messageRecvMsgServer[i] == -30) { msg += "в"; }
		else if ((int)messageRecvMsgServer[i] == -29) { msg += "г"; }
		else if ((int)messageRecvMsgServer[i] == -28) { msg += "д"; }
		else if ((int)messageRecvMsgServer[i] == -27) { msg += "е"; }
		else if ((int)messageRecvMsgServer[i] == -72) { msg += "ё"; }
		else if ((int)messageRecvMsgServer[i] == -26) { msg += "ж"; }
		else if ((int)messageRecvMsgServer[i] == -25) { msg += "з"; }
		else if ((int)messageRecvMsgServer[i] == -24) { msg += "и"; }
		else if ((int)messageRecvMsgServer[i] == -23) { msg += "й"; }
		else if ((int)messageRecvMsgServer[i] == -22) { msg += "к"; }
		else if ((int)messageRecvMsgServer[i] == -21) { msg += "л"; }
		else if ((int)messageRecvMsgServer[i] == -20) { msg += "м"; }
		else if ((int)messageRecvMsgServer[i] == -19) { msg += "н"; }
		else if ((int)messageRecvMsgServer[i] == -18) { msg += "о"; }
		else if ((int)messageRecvMsgServer[i] == -17) { msg += "п"; }
		else if ((int)messageRecvMsgServer[i] == -16) { msg += "р"; }
		else if ((int)messageRecvMsgServer[i] == -15) { msg += "с"; }
		else if ((int)messageRecvMsgServer[i] == -14) { msg += "т"; }
		else if ((int)messageRecvMsgServer[i] == -13) { msg += "у"; }
		else if ((int)messageRecvMsgServer[i] == -12) { msg += "ф"; }
		else if ((int)messageRecvMsgServer[i] == -11) { msg += "х"; }
		else if ((int)messageRecvMsgServer[i] == -10) { msg += "ц"; }
		else if ((int)messageRecvMsgServer[i] == -9) { msg += "ч"; }
		else if ((int)messageRecvMsgServer[i] == -8) { msg += "ш"; }
		else if ((int)messageRecvMsgServer[i] == -7) { msg += "щ"; }
		else if ((int)messageRecvMsgServer[i] == -6) { msg += "ъ"; }
		else if ((int)messageRecvMsgServer[i] == -5) { msg += "ы"; }
		else if ((int)messageRecvMsgServer[i] == -4) { msg += "ь"; }
		else if ((int)messageRecvMsgServer[i] == -3) { msg += "э"; }
		else if ((int)messageRecvMsgServer[i] == -2) { msg += "ю"; }
		else if ((int)messageRecvMsgServer[i] == -1) { msg += "я"; }
		else { msg += Convert::ToChar(messageRecvMsgServer[i]); }
	}
	return msg;
}


/** Нажатие кнопки на игровом поле **/
System::Void SapperGame::Field::ButtonClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e, Button^ button, int buttonNum) {
	int str = abs((buttonNum - 1) / 10);
	int column = (buttonNum - 1) % 10;

	LogicGame LogicGame;
	if (found && !gameOver && !victory) {
		if (e->Button == ::MouseButtons::Left && !BombMark[buttonNum - 1] && !LeftClick[buttonNum - 1]) {
			if (!LeftClick[buttonNum - 1])
				LeftClick[buttonNum - 1] = true;
			if (!LogicGame.CheckBomb(arrCells, str, column)) {
				if (arrCells[str][column] == Convert::ToString(1)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[1];
				}
				else if (arrCells[str][column] == Convert::ToString(2)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[2];
				}
				else if (arrCells[str][column] == Convert::ToString(3)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[3];
				}
				else if (arrCells[str][column] == Convert::ToString(4)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[4];
				}
				else if (arrCells[str][column] == Convert::ToString(5)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[5];
				}
				else if (arrCells[str][column] == Convert::ToString(6)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[6];
				}
				else if (arrCells[str][column] == Convert::ToString(7)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[7];
				}
				else if (arrCells[str][column] == Convert::ToString(8)) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[8];
				}
				else if (arrCells[str][column] == " ") {
					SearchForEmptyNeighboringCells(str, column); /// Поиск пустых и рядом стоящих клеток
					DisclosureOfEmptyCellsandNeighboringCells(sender, e); /// Раскрытие пустых клеток и соседних с ними клеток
				}

				if (!FirstTapOnTheField) {
					FirstTapOnTheField = true;
				}

				NumberOfOpenCellsWithoutMines++;
				if (NumberOfOpenCellsWithoutMines >= (100 - NumberOfMines)) {
					Victory();
				}
			}
			else if (LogicGame.CheckBomb(arrCells, str, column)) {
				if (!FirstTapOnTheField) {
					FieldGeneration(str, column);
					LeftClick[buttonNum - 1] = false;
					FirstTapOnTheField = true;
					ButtonClick(sender, e, button, buttonNum);
					return;
				}
				DeadMineStr = str; DeadMineColumn = column;
				gameOver = true;
				GameOver();
			}
		}
		else if (e->Button == ::MouseButtons::Middle || e->Button == ::MouseButtons::Right) {
			if (!LeftClick[buttonNum - 1]) {
				if (!BombMark[buttonNum - 1] && TheNumberOfBombsRemainingOnTheField > 0) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[12];
					BombMark[buttonNum - 1] = true;
					TheNumberOfBombsRemainingOnTheField -= 1;
					DisplayTheRemainingNumberOfBombs();
				}
				else if (BombMark[buttonNum - 1]) {
					button->BackgroundImage = imageList_imagesOnTiles->Images[0];
					BombMark[buttonNum - 1] = false;
					TheNumberOfBombsRemainingOnTheField += 1;
					DisplayTheRemainingNumberOfBombs();
				}
			}
		}
	}
	groupBoxTimeAndRemainingMinesLable->Focus();
}


/** Отключение игрока от парной игры **/
System::Void SapperGame::Field::DisconnectingAPlayerFromAPairGame(String^ Nickname) {
	richTextBoxGetMessage->Clear();
	richTextBoxGetMessage->SelectionColor = Color::Green;
	richTextBoxGetMessage->AppendText("Welcome to the RCh server!" + Environment::NewLine);
	Host = false;
	pendingPlayerInvitation = false;
	gameWithTwoPlayersStarted = false;
	buttonInvitation->Text = "To invite";
	panelLoading->Visible = false;
	groupBoxTiles->Enabled = true;
	buttonSaveAndChangeNickname->Enabled = true;
	buttonInvitation->Visible = true;
	buttonStartPairGame->Visible = false;
	if (FirstTapOnTheField) {
		FirstTapOnTheField = false;
		NewGame();
	}
	MessageForm MF;
	if (Nickname == NicknameOfTheSecondPlayer) {
		MF.Show("Player \"" + NicknameOfTheSecondPlayer + "\" leaves the game.", "Message");
	}
	else {
		MF.Show("You disconnected from the doubles game.", "Message");
	}

	pendingPlayerInvitation = false;
	gameWithTwoPlayersStarted = false;

	char messageSend[2048];
	String^ msg = "<rating><update>\r\n\t";
	RussianEncoding(messageSend, msg);
	send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

	ZeroMemory(messageSend, 2048);
	msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "<time>" + Convert::ToInt32(0) + "\r\n\t";
	RussianEncoding(messageSend, msg);
	send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

	ZeroMemory(messageSend, 2048);
	msg = "<game><rating><update><MyNickname>" + NicknameOfTheSecondPlayer + "<NicknameOfTheSecondPlayer>" + labelNicknameChat->Text + "<time>" + Convert::ToInt32(0) + "\r\n\t";
	RussianEncoding(messageSend, msg);
	send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
	NicknameOfTheSecondPlayer = "";
}

/** Подготовка сообщения к выводу на экран **/
System::String^ SapperGame::Field::MessageTextRenderer(String^ Nickname, String^ msg) {
	String^ indentation = "";
	while (TextRenderer::MeasureText(indentation, richTextBoxMessageEnter->Font).Width < TextRenderer::MeasureText(Nickname, richTextBoxMessageEnter->Font).Width)
	{
		indentation += " ";
	}
	String^ message = "";
	String^ tempMessage = indentation;
	int startIndex = 0;
	for (int i = 0; i < msg->Length; i++) {
		if (msg[i] == ' ') {
			if (i + 1 < msg->Length) {
				bool dontEnterOrSpace = false;
				for (int j = i + 1; j < msg->Length; j++) {
					if (msg[j] == '\n' || msg[j] == ' ') {
						continue;
					}
					else {
						dontEnterOrSpace = true;
						break;
					}
				}
				if (!dontEnterOrSpace) {
					break;
				}
			}
			if (i == msg->Length - 1) {
				break;
			}
			if (i != 0) {
				if (msg[i + 1] == '\n' || msg[i - 1] == '\n') {
					continue;
				}
				for (int j = i + 1; j < msg->Length; j++) {
					if (msg[j] == ' ') {
						continue;
					}
					else {
						bool foundMes = false;
						for (int k = 0; k < tempMessage->Length; k++) {
							if (tempMessage[k] != ' ' && tempMessage[k] != '\n') {
								foundMes = true;
								break;
							}
						}
						if (foundMes) {
							tempMessage += msg[i];
							message += msg[i];
						}
						i = j - 1;
						break;
					}
				}
			}
			if (i == 0) {
				richTextBoxMessageEnter->Focus();
				continue;
			}
			continue;
		}
		else if (msg[i] == '\n') {
			if (i + 1 < msg->Length) {
				bool dontEnterOrSpace = false;
				for (int j = i + 1; j < msg->Length; j++) {
					if (msg[j] == ' ' || msg[j] == '\n') {
						continue;
					}
					else {
						dontEnterOrSpace = true;
						break;
					}
				}
				if (!dontEnterOrSpace) {
					break;
				}
			}
			if (i == msg->Length - 1) {
				break;
			}
			if (i != 0) {
				for (int j = i + 1; j < msg->Length; j++) {
					if (msg[j] == '\n') {
						continue;
					}
					else {
						bool foundMes = false;
						for (int k = 0; k < tempMessage->Length; k++) {
							if (tempMessage[k] != ' ' && tempMessage[k] != '\n') {
								foundMes = true;
								break;
							}
						}
						if (foundMes) {
							message += msg[i] + indentation;
							tempMessage = indentation;
						}
						i = j - 1;
						break;
					}
				}
			}
			if (i == 0) {
				richTextBoxMessageEnter->Focus();
				continue;
			}
			continue;
		}
		if (TextRenderer::MeasureText(tempMessage, richTextBoxMessageEnter->Font).Width >= richTextBoxGetMessage->Width - 50) {
			if (msg[i] != ' ') {
				int count = 0;
				for (int j = i; j >= startIndex; j--) {
					if (msg[j] == ' ') {
						break;
					}
					count++;
				}
				if (message->Length - count >= 0) {
					if (!(i - (count - 1) == 0 || i - (count - 1) == startIndex)) {
						i -= (count - 1);
						message = message->Remove(message->Length - count);
					}
				}
			}
			if (i + 1 < msg->Length) {
				startIndex = i + 1;
			}
			message += "\n" + indentation;
			tempMessage = indentation;
		}
		tempMessage += msg[i];
		message += msg[i];
	}
	return message;
}


/** Победа **/
System::Void SapperGame::Field::Victory() {
	int time = (60 * Minutes) + Seconds;
	if (NicknameOfTheSecondPlayer != "") {
		victory = true;
		Open_All_Cells();

		richTextBoxGetMessage->AppendText(Environment::NewLine);
		richTextBoxGetMessage->SelectionColor = Color::Blue;
		richTextBoxGetMessage->AppendText("You win! ");

		if (messageScrolling) {
			richTextBoxGetMessage->ScrollToCaret();
		}
		richTextBoxMessageEnter->Clear();
		richTextBoxMessageEnter->Focus();

		char messageSend[2048];
		String^ msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "<time>" + time + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

		ZeroMemory(messageSend, 2048);
		msg = "<message><pairGame><" + labelNicknameChat->Text + "> " + "Player <" + labelNicknameChat->Text + "> wins" + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);


		MessageForm MF;
		MF.Show("You win!", "Message");
		ZeroMemory(messageSend, 2048);
		msg = "<game><checkingTheCompletedGame><NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

		ZeroMemory(messageSend, 2048);
		msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
	}
	else {
		char messageSend[2048];
		String^ msg = "<rating><update><nickname>" + labelNicknameChat->Text + "<time>" + time + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);


		victory = true;
		Open_All_Cells();
		FormVictory^ Form_FormVictory = gcnew FormVictory();

		Form_FormVictory->LocationFieldForm = Field::Location;
		Form_FormVictory->labelVictory->ForeColor = Color::FromArgb(215, 229, 242);
		Form_FormVictory->labelLevel_image->ForeColor = Color::FromArgb(215, 229, 242);
		Form_FormVictory->labelLevel_text->ForeColor = Color::FromArgb(215, 229, 242);
		Form_FormVictory->labelTime_image->ForeColor = Color::FromArgb(215, 229, 242);
		Form_FormVictory->labelTime_text->ForeColor = Color::FromArgb(215, 229, 242);
		Form_FormVictory->NumberOfMines = NumberOfMines;

		if (NumberOfMines == 18) {
			Form_FormVictory->labelLevel_text->Text = L"Easy";
		}
		else if (NumberOfMines == 28) {
			Form_FormVictory->labelLevel_text->Text = L"Normal";
		}
		else if (NumberOfMines == 48) {
			Form_FormVictory->labelLevel_text->Text = L"Hard";
		}

		Form_FormVictory->labelTime_text->Text = Minutes + ":";

		if (Seconds < 10) {
			Form_FormVictory->labelTime_text->Text += "0" + Seconds;
		}
		else {
			Form_FormVictory->labelTime_text->Text += Seconds;
		}

		bool formMaximumSize = false;
		if (Field::Width == 756) {
			formMaximumSize = true;
		}
		else {
			formMaximumSize = false;
		}
		if (formMaximumSize) {
			Field::Width = 359;
		}
		Form_FormVictory->ShowDialog();
		delete Form_FormVictory;

		NewGame();

		if (formMaximumSize) {
			Field::Width = 756;
		}
		pendingPlayerInvitation = false;
		gameWithTwoPlayersStarted = false;
		buttonInvitation->Visible = true;
	}
}

/** Конец игры **/
System::Void SapperGame::Field::GameOver() {
	if (gameOver) {
		if (NicknameOfTheSecondPlayer != "") {
			Open_All_Cells();

			richTextBoxGetMessage->AppendText(Environment::NewLine);
			richTextBoxGetMessage->SelectionColor = Color::Blue;
			richTextBoxGetMessage->AppendText("You lose ");

			if (messageScrolling) {
				richTextBoxGetMessage->ScrollToCaret();
			}
			richTextBoxMessageEnter->Clear();
			richTextBoxMessageEnter->Focus();

			char messageSend[2048];
			String^ msg = "<message><pairGame><" + labelNicknameChat->Text + "> " + "Player <" + labelNicknameChat->Text + "> loses" + "\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

			
				MessageForm MF;
				MF.Show("You lose", "Message");
				ZeroMemory(messageSend, 2048);
				msg = "<game><checkingTheCompletedGame><NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
			

				ZeroMemory(messageSend, 2048);
				msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

			


		}
		else {
			Open_All_Cells();
			FormGameOver^ Form_FormGameOver = gcnew FormGameOver();

			bool formMaximumSize = false;
			if (Field::Width == 756) {
				formMaximumSize = true;
			}
			else {
				formMaximumSize = false;
			}
			if (formMaximumSize) {
				Field::Width = 359;
			}

			Form_FormGameOver->LocationFieldForm = Field::Location;
			Form_FormGameOver->ShowDialog();
			delete Form_FormGameOver;


			NewGame();

			if (formMaximumSize) {
				Field::Width = 756;
			}
			pendingPlayerInvitation = false;
			gameWithTwoPlayersStarted = false;
			buttonInvitation->Visible = true;
		}
	}
}

/** Новая игра **/
System::Void SapperGame::Field::NewGame() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arrCells[i][j] = " ";
		}
	}

	FieldGeneration(-1, -1); // Field Generation

	//
	//  tile loading
	//

	/*
	  buttonDifficultyLevelSelection
	*/
	buttonDifficultyLevelSelection->BackgroundImage = imageList_smiles->Images[0];
	buttonDifficultyLevelSelection->FlatStyle = FlatStyle::Flat;
	buttonDifficultyLevelSelection->FlatAppearance->BorderSize = 0;
	buttonDifficultyLevelSelection->BackgroundImageLayout = ImageLayout::Zoom;

	/*
	  Time
	*/
	labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
	labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
	labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
	labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
	labelDelimiterBetweenMinutesAndSeconds->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[10];
	Seconds = 0;
	Minutes = 0;

	/*
	  Field
	*/
	found = true;
	victory = false;
	gameOver = false;
	FirstTapOnTheField = false;
	TheNumberOfBombsRemainingOnTheField = NumberOfMines;
	NumberOfOpenCellsWithoutMines = 0;

	DisplayTheRemainingNumberOfBombs(); // Display the remaining number of bombs

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			ArrayCheckEmptyCell[i][j] = false;
		}
	}

	for (int i = 0; i < 100; i++) {
		LeftClick[i] = false;
		BombMark[i] = false;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 && j == 0)
				button1->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 1)
				button2->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 2)
				button3->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 3)
				button4->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 4)
				button5->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 5)
				button6->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 6)
				button7->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 7)
				button8->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 8)
				button9->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 9)
				button10->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 1 && j == 0)
				button11->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 1)
				button12->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 2)
				button13->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 3)
				button14->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 4)
				button15->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 5)
				button16->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 6)
				button17->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 7)
				button18->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 8)
				button19->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 9)
				button20->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 2 && j == 0)
				button21->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 1)
				button22->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 2)
				button23->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 3)
				button24->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 4)
				button25->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 5)
				button26->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 6)
				button27->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 7)
				button28->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 8)
				button29->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 9)
				button30->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 3 && j == 0)
				button31->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 1)
				button32->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 2)
				button33->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 3)
				button34->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 4)
				button35->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 5)
				button36->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 6)
				button37->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 7)
				button38->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 8)
				button39->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 9)
				button40->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 4 && j == 0)
				button41->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 1)
				button42->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 2)
				button43->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 3)
				button44->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 4)
				button45->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 5)
				button46->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 6)
				button47->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 7)
				button48->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 8)
				button49->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 9)
				button50->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 5 && j == 0)
				button51->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 1)
				button52->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 2)
				button53->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 3)
				button54->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 4)
				button55->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 5)
				button56->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 6)
				button57->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 7)
				button58->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 8)
				button59->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 9)
				button60->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 6 && j == 0)
				button61->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 1)
				button62->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 2)
				button63->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 3)
				button64->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 4)
				button65->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 5)
				button66->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 6)
				button67->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 7)
				button68->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 8)
				button69->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 9)
				button70->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 7 && j == 0)
				button71->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 1)
				button72->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 2)
				button73->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 3)
				button74->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 4)
				button75->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 5)
				button76->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 6)
				button77->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 7)
				button78->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 8)
				button79->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 9)
				button80->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 8 && j == 0)
				button81->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 1)
				button82->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 2)
				button83->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 3)
				button84->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 4)
				button85->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 5)
				button86->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 6)
				button87->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 7)
				button88->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 8)
				button89->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 9)
				button90->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 9 && j == 0)
				button91->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 1)
				button92->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 2)
				button93->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 3)
				button94->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 4)
				button95->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 5)
				button96->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 6)
				button97->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 7)
				button98->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 8)
				button99->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 9)
				button100->BackgroundImage = imageList_imagesOnTiles->Images[0];
		}
	}
}

/** Генерация поля **/
System::Void SapperGame::Field::FieldGeneration(int indexStr, int indexColumn) {
	int count = 0, tempNumber1, tempNumber2;
	srand(time(NULL));
	if (indexStr < 0 && indexColumn < 0) {
		while (count < NumberOfMines) {
			tempNumber1 = rand() % 10;
			tempNumber2 = rand() % 10;
			if (arrCells[tempNumber1][tempNumber2] != "mine") {
				arrCells[tempNumber1][tempNumber2] = "mine";
				count++;
			}
		}
	}
	else {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				arrCells[i][j] = " ";
			}
		}
		while (count < NumberOfMines) {
			do {
				tempNumber1 = rand() % 10;
			} while (tempNumber1 == indexStr);
			do {
				tempNumber2 = rand() % 10;
			} while (tempNumber2 == indexColumn);
			if (arrCells[tempNumber1][tempNumber2] != "mine") {
				arrCells[tempNumber1][tempNumber2] = "mine";
				count++;
			}
		}
	}

	count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arrCells[i][j] != "mine") {
				count = 0;
				if (i < 9 && arrCells[i + 1][j] == "mine")
					count++;
				if (j < 9 && arrCells[i][j + 1] == "mine")
					count++;
				if (i < 9 && j < 9 && arrCells[i + 1][j + 1] == "mine")
					count++;
				if (i > 0 && j < 9 && arrCells[i - 1][j + 1] == "mine")
					count++;

				if (i > 0 && arrCells[i - 1][j] == "mine")
					count++;
				if (j > 0 && arrCells[i][j - 1] == "mine")
					count++;
				if (i > 0 && j > 0 && arrCells[i - 1][j - 1] == "mine")
					count++;
				if (i < 9 && j > 0 && arrCells[i + 1][j - 1] == "mine")
					count++;

				if (count != 0)
					arrCells[i][j] = Convert::ToString(count);


			}
		}
	}
}

/** Поиск пустых соседник клеток **/
System::Void SapperGame::Field::SearchForEmptyNeighboringCells(int str, int column) {
	if (BombMark[(str * 10) + column]) {
		return;
	}
	else if (arrCells[str][column] == " ") {
		ArrayCheckEmptyCell[str][column] = true;
		if (!LeftClick[(str * 10) + column])
			NumberOfOpenCellsWithoutMines++;
	}
	else {
		ArrayCheckEmptyCell[str][column] = true;
		if (!LeftClick[(str * 10) + column])
			NumberOfOpenCellsWithoutMines++;
		return;
	}


	if (str < 9 && !ArrayCheckEmptyCell[str + 1][column]) {
		SearchForEmptyNeighboringCells(str + 1, column);
	}
	if (column < 9 && !ArrayCheckEmptyCell[str][column + 1]) {
		SearchForEmptyNeighboringCells(str, column + 1);
	}
	if (str < 9 && column < 9 && !ArrayCheckEmptyCell[str + 1][column + 1]) {
		SearchForEmptyNeighboringCells(str + 1, column + 1);
	}
	if (str > 0 && column < 9 && !ArrayCheckEmptyCell[str - 1][column + 1]) {
		SearchForEmptyNeighboringCells(str - 1, column + 1);
	}

	if (str > 0 && !ArrayCheckEmptyCell[str - 1][column]) {

		SearchForEmptyNeighboringCells(str - 1, column);
	}
	if (column > 0 && !ArrayCheckEmptyCell[str][column - 1]) {

		SearchForEmptyNeighboringCells(str, column - 1);
	}
	if (str > 0 && column > 0 && !ArrayCheckEmptyCell[str - 1][column - 1]) {

		SearchForEmptyNeighboringCells(str - 1, column - 1);
	}
	if (str < 9 && column > 0 && !ArrayCheckEmptyCell[str + 1][column - 1]) {

		SearchForEmptyNeighboringCells(str + 1, column - 1);
	}
}

/** Вывод на экран пустых клеток и соседних с ними клеток **/
System::Void SapperGame::Field::DisclosureOfEmptyCellsandNeighboringCells(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (ArrayCheckEmptyCell[i][j]) {
				if (i == 0 && j == 0) {
					if (arrCells[0][0] == Convert::ToString(1)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][0] == Convert::ToString(2)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][0] == Convert::ToString(3)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][0] == Convert::ToString(4)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][0] == Convert::ToString(5)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][0] == Convert::ToString(6)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][0] == Convert::ToString(7)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][0] == Convert::ToString(8)) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][0] == " ") {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 1) {
					if (arrCells[0][1] == Convert::ToString(1)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][1] == Convert::ToString(2)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][1] == Convert::ToString(3)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][1] == Convert::ToString(4)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][1] == Convert::ToString(5)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][1] == Convert::ToString(6)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][1] == Convert::ToString(7)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][1] == Convert::ToString(8)) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][1] == " ") {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 2) {
					if (arrCells[0][2] == Convert::ToString(1)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][2] == Convert::ToString(2)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][2] == Convert::ToString(3)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][2] == Convert::ToString(4)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][2] == Convert::ToString(5)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][2] == Convert::ToString(6)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][2] == Convert::ToString(7)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][2] == Convert::ToString(8)) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][2] == " ") {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 3) {
					if (arrCells[0][3] == Convert::ToString(1)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][3] == Convert::ToString(2)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][3] == Convert::ToString(3)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][3] == Convert::ToString(4)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][3] == Convert::ToString(5)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][3] == Convert::ToString(6)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][3] == Convert::ToString(7)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][3] == Convert::ToString(8)) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][3] == " ") {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 4) {
					if (arrCells[0][4] == Convert::ToString(1)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][4] == Convert::ToString(2)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][4] == Convert::ToString(3)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][4] == Convert::ToString(4)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][4] == Convert::ToString(5)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][4] == Convert::ToString(6)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][4] == Convert::ToString(7)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][4] == Convert::ToString(8)) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][4] == " ") {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 5) {
					if (arrCells[0][5] == Convert::ToString(1)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][5] == Convert::ToString(2)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][5] == Convert::ToString(3)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][5] == Convert::ToString(4)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][5] == Convert::ToString(5)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][5] == Convert::ToString(6)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][5] == Convert::ToString(7)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][5] == Convert::ToString(8)) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][5] == " ") {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 6) {
					if (arrCells[0][6] == Convert::ToString(1)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][6] == Convert::ToString(2)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][6] == Convert::ToString(3)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][6] == Convert::ToString(4)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][6] == Convert::ToString(5)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][6] == Convert::ToString(6)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][6] == Convert::ToString(7)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][6] == Convert::ToString(8)) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][6] == " ") {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 7) {
					if (arrCells[0][7] == Convert::ToString(1)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][7] == Convert::ToString(2)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][7] == Convert::ToString(3)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][7] == Convert::ToString(4)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][7] == Convert::ToString(5)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][7] == Convert::ToString(6)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][7] == Convert::ToString(7)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][7] == Convert::ToString(8)) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][7] == " ") {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 8) {
					if (arrCells[0][8] == Convert::ToString(1)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][8] == Convert::ToString(2)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][8] == Convert::ToString(3)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][8] == Convert::ToString(4)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][8] == Convert::ToString(5)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][8] == Convert::ToString(6)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][8] == Convert::ToString(7)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][8] == Convert::ToString(8)) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][8] == " ") {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 0 && j == 9) {
					if (arrCells[0][9] == Convert::ToString(1)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[0][9] == Convert::ToString(2)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[0][9] == Convert::ToString(3)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[0][9] == Convert::ToString(4)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[0][9] == Convert::ToString(5)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[0][9] == Convert::ToString(6)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[0][9] == Convert::ToString(7)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[0][9] == Convert::ToString(8)) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[0][9] == " ") {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 1 && j == 0) {
					if (arrCells[1][0] == Convert::ToString(1)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][0] == Convert::ToString(2)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][0] == Convert::ToString(3)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][0] == Convert::ToString(4)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][0] == Convert::ToString(5)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][0] == Convert::ToString(6)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][0] == Convert::ToString(7)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][0] == Convert::ToString(8)) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][0] == " ") {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 1) {
					if (arrCells[1][1] == Convert::ToString(1)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][1] == Convert::ToString(2)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][1] == Convert::ToString(3)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][1] == Convert::ToString(4)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][1] == Convert::ToString(5)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][1] == Convert::ToString(6)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][1] == Convert::ToString(7)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][1] == Convert::ToString(8)) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][1] == " ") {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 2) {
					if (arrCells[1][2] == Convert::ToString(1)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][2] == Convert::ToString(2)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][2] == Convert::ToString(3)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][2] == Convert::ToString(4)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][2] == Convert::ToString(5)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][2] == Convert::ToString(6)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][2] == Convert::ToString(7)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][2] == Convert::ToString(8)) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][2] == " ") {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 3) {
					if (arrCells[1][3] == Convert::ToString(1)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][3] == Convert::ToString(2)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][3] == Convert::ToString(3)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][3] == Convert::ToString(4)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][3] == Convert::ToString(5)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][3] == Convert::ToString(6)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][3] == Convert::ToString(7)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][3] == Convert::ToString(8)) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][3] == " ") {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 4) {
					if (arrCells[1][4] == Convert::ToString(1)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][4] == Convert::ToString(2)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][4] == Convert::ToString(3)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][4] == Convert::ToString(4)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][4] == Convert::ToString(5)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][4] == Convert::ToString(6)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][4] == Convert::ToString(7)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][4] == Convert::ToString(8)) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][4] == " ") {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 5) {
					if (arrCells[1][5] == Convert::ToString(1)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][5] == Convert::ToString(2)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][5] == Convert::ToString(3)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][5] == Convert::ToString(4)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][5] == Convert::ToString(5)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][5] == Convert::ToString(6)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][5] == Convert::ToString(7)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][5] == Convert::ToString(8)) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][5] == " ") {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 6) {
					if (arrCells[1][6] == Convert::ToString(1)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][6] == Convert::ToString(2)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][6] == Convert::ToString(3)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][6] == Convert::ToString(4)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][6] == Convert::ToString(5)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][6] == Convert::ToString(6)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][6] == Convert::ToString(7)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][6] == Convert::ToString(8)) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][6] == " ") {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 7) {
					if (arrCells[1][7] == Convert::ToString(1)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][7] == Convert::ToString(2)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][7] == Convert::ToString(3)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][7] == Convert::ToString(4)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][7] == Convert::ToString(5)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][7] == Convert::ToString(6)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][7] == Convert::ToString(7)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][7] == Convert::ToString(8)) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][7] == " ") {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 8) {
					if (arrCells[1][8] == Convert::ToString(1)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][8] == Convert::ToString(2)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][8] == Convert::ToString(3)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][8] == Convert::ToString(4)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][8] == Convert::ToString(5)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][8] == Convert::ToString(6)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][8] == Convert::ToString(7)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][8] == Convert::ToString(8)) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][8] == " ") {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 1 && j == 9) {
					if (arrCells[1][9] == Convert::ToString(1)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[1][9] == Convert::ToString(2)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[1][9] == Convert::ToString(3)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[1][9] == Convert::ToString(4)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[1][9] == Convert::ToString(5)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[1][9] == Convert::ToString(6)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[1][9] == Convert::ToString(7)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[1][9] == Convert::ToString(8)) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[1][9] == " ") {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 2 && j == 0) {
					if (arrCells[2][0] == Convert::ToString(1)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][0] == Convert::ToString(2)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][0] == Convert::ToString(3)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][0] == Convert::ToString(4)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][0] == Convert::ToString(5)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][0] == Convert::ToString(6)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][0] == Convert::ToString(7)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][0] == Convert::ToString(8)) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][0] == " ") {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 1) {
					if (arrCells[2][1] == Convert::ToString(1)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][1] == Convert::ToString(2)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][1] == Convert::ToString(3)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][1] == Convert::ToString(4)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][1] == Convert::ToString(5)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][1] == Convert::ToString(6)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][1] == Convert::ToString(7)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][1] == Convert::ToString(8)) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][1] == " ") {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 2) {
					if (arrCells[2][2] == Convert::ToString(1)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][2] == Convert::ToString(2)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][2] == Convert::ToString(3)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][2] == Convert::ToString(4)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][2] == Convert::ToString(5)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][2] == Convert::ToString(6)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][2] == Convert::ToString(7)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][2] == Convert::ToString(8)) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][2] == " ") {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 3) {
					if (arrCells[2][3] == Convert::ToString(1)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][3] == Convert::ToString(2)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][3] == Convert::ToString(3)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][3] == Convert::ToString(4)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][3] == Convert::ToString(5)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][3] == Convert::ToString(6)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][3] == Convert::ToString(7)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][3] == Convert::ToString(8)) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][3] == " ") {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 4) {
					if (arrCells[2][4] == Convert::ToString(1)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][4] == Convert::ToString(2)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][4] == Convert::ToString(3)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][4] == Convert::ToString(4)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][4] == Convert::ToString(5)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][4] == Convert::ToString(6)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][4] == Convert::ToString(7)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][4] == Convert::ToString(8)) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][4] == " ") {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 5) {
					if (arrCells[2][5] == Convert::ToString(1)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][5] == Convert::ToString(2)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][5] == Convert::ToString(3)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][5] == Convert::ToString(4)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][5] == Convert::ToString(5)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][5] == Convert::ToString(6)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][5] == Convert::ToString(7)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][5] == Convert::ToString(8)) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][5] == " ") {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 6) {
					if (arrCells[2][6] == Convert::ToString(1)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][6] == Convert::ToString(2)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][6] == Convert::ToString(3)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][6] == Convert::ToString(4)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][6] == Convert::ToString(5)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][6] == Convert::ToString(6)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][6] == Convert::ToString(7)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][6] == Convert::ToString(8)) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][6] == " ") {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 7) {
					if (arrCells[2][7] == Convert::ToString(1)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][7] == Convert::ToString(2)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][7] == Convert::ToString(3)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][7] == Convert::ToString(4)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][7] == Convert::ToString(5)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][7] == Convert::ToString(6)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][7] == Convert::ToString(7)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][7] == Convert::ToString(8)) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][7] == " ") {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 8) {
					if (arrCells[2][8] == Convert::ToString(1)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][8] == Convert::ToString(2)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][8] == Convert::ToString(3)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][8] == Convert::ToString(4)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][8] == Convert::ToString(5)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][8] == Convert::ToString(6)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][8] == Convert::ToString(7)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][8] == Convert::ToString(8)) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][8] == " ") {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 2 && j == 9) {
					if (arrCells[2][9] == Convert::ToString(1)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[2][9] == Convert::ToString(2)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[2][9] == Convert::ToString(3)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[2][9] == Convert::ToString(4)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[2][9] == Convert::ToString(5)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[2][9] == Convert::ToString(6)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[2][9] == Convert::ToString(7)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[2][9] == Convert::ToString(8)) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[2][9] == " ") {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 3 && j == 0) {
					if (arrCells[3][0] == Convert::ToString(1)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][0] == Convert::ToString(2)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][0] == Convert::ToString(3)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][0] == Convert::ToString(4)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][0] == Convert::ToString(5)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][0] == Convert::ToString(6)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][0] == Convert::ToString(7)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][0] == Convert::ToString(8)) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][0] == " ") {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 1) {
					if (arrCells[3][1] == Convert::ToString(1)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][1] == Convert::ToString(2)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][1] == Convert::ToString(3)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][1] == Convert::ToString(4)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][1] == Convert::ToString(5)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][1] == Convert::ToString(6)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][1] == Convert::ToString(7)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][1] == Convert::ToString(8)) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][1] == " ") {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 2) {
					if (arrCells[3][2] == Convert::ToString(1)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][2] == Convert::ToString(2)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][2] == Convert::ToString(3)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][2] == Convert::ToString(4)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][2] == Convert::ToString(5)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][2] == Convert::ToString(6)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][2] == Convert::ToString(7)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][2] == Convert::ToString(8)) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][2] == " ") {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 3) {
					if (arrCells[3][3] == Convert::ToString(1)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][3] == Convert::ToString(2)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][3] == Convert::ToString(3)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][3] == Convert::ToString(4)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][3] == Convert::ToString(5)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][3] == Convert::ToString(6)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][3] == Convert::ToString(7)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][3] == Convert::ToString(8)) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][3] == " ") {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 4) {
					if (arrCells[3][4] == Convert::ToString(1)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][4] == Convert::ToString(2)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][4] == Convert::ToString(3)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][4] == Convert::ToString(4)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][4] == Convert::ToString(5)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][4] == Convert::ToString(6)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][4] == Convert::ToString(7)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][4] == Convert::ToString(8)) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][4] == " ") {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 5) {
					if (arrCells[3][5] == Convert::ToString(1)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][5] == Convert::ToString(2)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][5] == Convert::ToString(3)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][5] == Convert::ToString(4)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][5] == Convert::ToString(5)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][5] == Convert::ToString(6)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][5] == Convert::ToString(7)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][5] == Convert::ToString(8)) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][5] == " ") {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 6) {
					if (arrCells[3][6] == Convert::ToString(1)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][6] == Convert::ToString(2)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][6] == Convert::ToString(3)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][6] == Convert::ToString(4)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][6] == Convert::ToString(5)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][6] == Convert::ToString(6)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][6] == Convert::ToString(7)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][6] == Convert::ToString(8)) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][6] == " ") {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 7) {
					if (arrCells[3][7] == Convert::ToString(1)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][7] == Convert::ToString(2)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][7] == Convert::ToString(3)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][7] == Convert::ToString(4)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][7] == Convert::ToString(5)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][7] == Convert::ToString(6)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][7] == Convert::ToString(7)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][7] == Convert::ToString(8)) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][7] == " ") {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 8) {
					if (arrCells[3][8] == Convert::ToString(1)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][8] == Convert::ToString(2)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][8] == Convert::ToString(3)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][8] == Convert::ToString(4)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][8] == Convert::ToString(5)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][8] == Convert::ToString(6)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][8] == Convert::ToString(7)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][8] == Convert::ToString(8)) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][8] == " ") {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 3 && j == 9) {
					if (arrCells[3][9] == Convert::ToString(1)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[3][9] == Convert::ToString(2)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[3][9] == Convert::ToString(3)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[3][9] == Convert::ToString(4)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[3][9] == Convert::ToString(5)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[3][9] == Convert::ToString(6)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[3][9] == Convert::ToString(7)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[3][9] == Convert::ToString(8)) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[3][9] == " ") {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 4 && j == 0) {
					if (arrCells[4][0] == Convert::ToString(1)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][0] == Convert::ToString(2)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][0] == Convert::ToString(3)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][0] == Convert::ToString(4)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][0] == Convert::ToString(5)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][0] == Convert::ToString(6)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][0] == Convert::ToString(7)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][0] == Convert::ToString(8)) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][0] == " ") {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 1) {
					if (arrCells[4][1] == Convert::ToString(1)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][1] == Convert::ToString(2)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][1] == Convert::ToString(3)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][1] == Convert::ToString(4)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][1] == Convert::ToString(5)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][1] == Convert::ToString(6)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][1] == Convert::ToString(7)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][1] == Convert::ToString(8)) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][1] == " ") {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 2) {
					if (arrCells[4][2] == Convert::ToString(1)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][2] == Convert::ToString(2)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][2] == Convert::ToString(3)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][2] == Convert::ToString(4)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][2] == Convert::ToString(5)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][2] == Convert::ToString(6)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][2] == Convert::ToString(7)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][2] == Convert::ToString(8)) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][2] == " ") {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 3) {
					if (arrCells[4][3] == Convert::ToString(1)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][3] == Convert::ToString(2)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][3] == Convert::ToString(3)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][3] == Convert::ToString(4)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][3] == Convert::ToString(5)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][3] == Convert::ToString(6)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][3] == Convert::ToString(7)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][3] == Convert::ToString(8)) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][3] == " ") {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 4) {
					if (arrCells[4][4] == Convert::ToString(1)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][4] == Convert::ToString(2)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][4] == Convert::ToString(3)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][4] == Convert::ToString(4)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][4] == Convert::ToString(5)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][4] == Convert::ToString(6)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][4] == Convert::ToString(7)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][4] == Convert::ToString(8)) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][4] == " ") {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 5) {
					if (arrCells[4][5] == Convert::ToString(1)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][5] == Convert::ToString(2)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][5] == Convert::ToString(3)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][5] == Convert::ToString(4)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][5] == Convert::ToString(5)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][5] == Convert::ToString(6)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][5] == Convert::ToString(7)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][5] == Convert::ToString(8)) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][5] == " ") {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 6) {
					if (arrCells[4][6] == Convert::ToString(1)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][6] == Convert::ToString(2)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][6] == Convert::ToString(3)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][6] == Convert::ToString(4)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][6] == Convert::ToString(5)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][6] == Convert::ToString(6)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][6] == Convert::ToString(7)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][6] == Convert::ToString(8)) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][6] == " ") {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 7) {
					if (arrCells[4][7] == Convert::ToString(1)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][7] == Convert::ToString(2)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][7] == Convert::ToString(3)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][7] == Convert::ToString(4)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][7] == Convert::ToString(5)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][7] == Convert::ToString(6)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][7] == Convert::ToString(7)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][7] == Convert::ToString(8)) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][7] == " ") {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 8) {
					if (arrCells[4][8] == Convert::ToString(1)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][8] == Convert::ToString(2)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][8] == Convert::ToString(3)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][8] == Convert::ToString(4)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][8] == Convert::ToString(5)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][8] == Convert::ToString(6)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][8] == Convert::ToString(7)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][8] == Convert::ToString(8)) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][8] == " ") {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 4 && j == 9) {
					if (arrCells[4][9] == Convert::ToString(1)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[4][9] == Convert::ToString(2)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[4][9] == Convert::ToString(3)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[4][9] == Convert::ToString(4)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[4][9] == Convert::ToString(5)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[4][9] == Convert::ToString(6)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[4][9] == Convert::ToString(7)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[4][9] == Convert::ToString(8)) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[4][9] == " ") {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 5 && j == 0) {
					if (arrCells[5][0] == Convert::ToString(1)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][0] == Convert::ToString(2)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][0] == Convert::ToString(3)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][0] == Convert::ToString(4)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][0] == Convert::ToString(5)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][0] == Convert::ToString(6)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][0] == Convert::ToString(7)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][0] == Convert::ToString(8)) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][0] == " ") {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 1) {
					if (arrCells[5][1] == Convert::ToString(1)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][1] == Convert::ToString(2)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][1] == Convert::ToString(3)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][1] == Convert::ToString(4)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][1] == Convert::ToString(5)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][1] == Convert::ToString(6)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][1] == Convert::ToString(7)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][1] == Convert::ToString(8)) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][1] == " ") {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 2) {
					if (arrCells[5][2] == Convert::ToString(1)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][2] == Convert::ToString(2)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][2] == Convert::ToString(3)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][2] == Convert::ToString(4)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][2] == Convert::ToString(5)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][2] == Convert::ToString(6)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][2] == Convert::ToString(7)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][2] == Convert::ToString(8)) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][2] == " ") {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 3) {
					if (arrCells[5][3] == Convert::ToString(1)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][3] == Convert::ToString(2)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][3] == Convert::ToString(3)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][3] == Convert::ToString(4)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][3] == Convert::ToString(5)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][3] == Convert::ToString(6)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][3] == Convert::ToString(7)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][3] == Convert::ToString(8)) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][3] == " ") {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 4) {
					if (arrCells[5][4] == Convert::ToString(1)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][4] == Convert::ToString(2)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][4] == Convert::ToString(3)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][4] == Convert::ToString(4)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][4] == Convert::ToString(5)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][4] == Convert::ToString(6)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][4] == Convert::ToString(7)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][4] == Convert::ToString(8)) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][4] == " ") {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 5) {
					if (arrCells[5][5] == Convert::ToString(1)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][5] == Convert::ToString(2)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][5] == Convert::ToString(3)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][5] == Convert::ToString(4)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][5] == Convert::ToString(5)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][5] == Convert::ToString(6)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][5] == Convert::ToString(7)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][5] == Convert::ToString(8)) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][5] == " ") {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 6) {
					if (arrCells[5][6] == Convert::ToString(1)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][6] == Convert::ToString(2)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][6] == Convert::ToString(3)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][6] == Convert::ToString(4)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][6] == Convert::ToString(5)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][6] == Convert::ToString(6)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][6] == Convert::ToString(7)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][6] == Convert::ToString(8)) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][6] == " ") {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 7) {
					if (arrCells[5][7] == Convert::ToString(1)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][7] == Convert::ToString(2)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][7] == Convert::ToString(3)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][7] == Convert::ToString(4)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][7] == Convert::ToString(5)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][7] == Convert::ToString(6)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][7] == Convert::ToString(7)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][7] == Convert::ToString(8)) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][7] == " ") {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 8) {
					if (arrCells[5][8] == Convert::ToString(1)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][8] == Convert::ToString(2)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][8] == Convert::ToString(3)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][8] == Convert::ToString(4)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][8] == Convert::ToString(5)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][8] == Convert::ToString(6)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][8] == Convert::ToString(7)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][8] == Convert::ToString(8)) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][8] == " ") {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 5 && j == 9) {
					if (arrCells[5][9] == Convert::ToString(1)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[5][9] == Convert::ToString(2)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[5][9] == Convert::ToString(3)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[5][9] == Convert::ToString(4)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[5][9] == Convert::ToString(5)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[5][9] == Convert::ToString(6)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[5][9] == Convert::ToString(7)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[5][9] == Convert::ToString(8)) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[5][9] == " ") {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 6 && j == 0) {
					if (arrCells[6][0] == Convert::ToString(1)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][0] == Convert::ToString(2)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][0] == Convert::ToString(3)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][0] == Convert::ToString(4)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][0] == Convert::ToString(5)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][0] == Convert::ToString(6)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][0] == Convert::ToString(7)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][0] == Convert::ToString(8)) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][0] == " ") {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 1) {
					if (arrCells[6][1] == Convert::ToString(1)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][1] == Convert::ToString(2)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][1] == Convert::ToString(3)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][1] == Convert::ToString(4)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][1] == Convert::ToString(5)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][1] == Convert::ToString(6)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][1] == Convert::ToString(7)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][1] == Convert::ToString(8)) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][1] == " ") {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 2) {
					if (arrCells[6][2] == Convert::ToString(1)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][2] == Convert::ToString(2)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][2] == Convert::ToString(3)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][2] == Convert::ToString(4)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][2] == Convert::ToString(5)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][2] == Convert::ToString(6)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][2] == Convert::ToString(7)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][2] == Convert::ToString(8)) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][2] == " ") {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 3) {
					if (arrCells[6][3] == Convert::ToString(1)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][3] == Convert::ToString(2)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][3] == Convert::ToString(3)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][3] == Convert::ToString(4)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][3] == Convert::ToString(5)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][3] == Convert::ToString(6)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][3] == Convert::ToString(7)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][3] == Convert::ToString(8)) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][3] == " ") {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 4) {
					if (arrCells[6][4] == Convert::ToString(1)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][4] == Convert::ToString(2)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][4] == Convert::ToString(3)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][4] == Convert::ToString(4)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][4] == Convert::ToString(5)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][4] == Convert::ToString(6)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][4] == Convert::ToString(7)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][4] == Convert::ToString(8)) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][4] == " ") {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 5) {
					if (arrCells[6][5] == Convert::ToString(1)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][5] == Convert::ToString(2)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][5] == Convert::ToString(3)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][5] == Convert::ToString(4)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][5] == Convert::ToString(5)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][5] == Convert::ToString(6)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][5] == Convert::ToString(7)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][5] == Convert::ToString(8)) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][5] == " ") {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 6) {
					if (arrCells[6][6] == Convert::ToString(1)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][6] == Convert::ToString(2)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][6] == Convert::ToString(3)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][6] == Convert::ToString(4)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][6] == Convert::ToString(5)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][6] == Convert::ToString(6)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][6] == Convert::ToString(7)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][6] == Convert::ToString(8)) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][6] == " ") {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 7) {
					if (arrCells[6][7] == Convert::ToString(1)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][7] == Convert::ToString(2)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][7] == Convert::ToString(3)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][7] == Convert::ToString(4)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][7] == Convert::ToString(5)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][7] == Convert::ToString(6)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][7] == Convert::ToString(7)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][7] == Convert::ToString(8)) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][7] == " ") {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 8) {
					if (arrCells[6][8] == Convert::ToString(1)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][8] == Convert::ToString(2)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][8] == Convert::ToString(3)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][8] == Convert::ToString(4)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][8] == Convert::ToString(5)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][8] == Convert::ToString(6)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][8] == Convert::ToString(7)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][8] == Convert::ToString(8)) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][8] == " ") {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 6 && j == 9) {
					if (arrCells[6][9] == Convert::ToString(1)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[6][9] == Convert::ToString(2)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[6][9] == Convert::ToString(3)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[6][9] == Convert::ToString(4)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[6][9] == Convert::ToString(5)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[6][9] == Convert::ToString(6)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[6][9] == Convert::ToString(7)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[6][9] == Convert::ToString(8)) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[6][9] == " ") {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 7 && j == 0) {
					if (arrCells[7][0] == Convert::ToString(1)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][0] == Convert::ToString(2)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][0] == Convert::ToString(3)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][0] == Convert::ToString(4)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][0] == Convert::ToString(5)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][0] == Convert::ToString(6)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][0] == Convert::ToString(7)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][0] == Convert::ToString(8)) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][0] == " ") {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 1) {
					if (arrCells[7][1] == Convert::ToString(1)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][1] == Convert::ToString(2)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][1] == Convert::ToString(3)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][1] == Convert::ToString(4)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][1] == Convert::ToString(5)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][1] == Convert::ToString(6)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][1] == Convert::ToString(7)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][1] == Convert::ToString(8)) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][1] == " ") {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 2) {
					if (arrCells[7][2] == Convert::ToString(1)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][2] == Convert::ToString(2)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][2] == Convert::ToString(3)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][2] == Convert::ToString(4)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][2] == Convert::ToString(5)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][2] == Convert::ToString(6)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][2] == Convert::ToString(7)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][2] == Convert::ToString(8)) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][2] == " ") {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 3) {
					if (arrCells[7][3] == Convert::ToString(1)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][3] == Convert::ToString(2)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][3] == Convert::ToString(3)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][3] == Convert::ToString(4)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][3] == Convert::ToString(5)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][3] == Convert::ToString(6)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][3] == Convert::ToString(7)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][3] == Convert::ToString(8)) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][3] == " ") {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 4) {
					if (arrCells[7][4] == Convert::ToString(1)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][4] == Convert::ToString(2)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][4] == Convert::ToString(3)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][4] == Convert::ToString(4)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][4] == Convert::ToString(5)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][4] == Convert::ToString(6)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][4] == Convert::ToString(7)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][4] == Convert::ToString(8)) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][4] == " ") {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 5) {
					if (arrCells[7][5] == Convert::ToString(1)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][5] == Convert::ToString(2)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][5] == Convert::ToString(3)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][5] == Convert::ToString(4)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][5] == Convert::ToString(5)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][5] == Convert::ToString(6)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][5] == Convert::ToString(7)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][5] == Convert::ToString(8)) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][5] == " ") {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 6) {
					if (arrCells[7][6] == Convert::ToString(1)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][6] == Convert::ToString(2)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][6] == Convert::ToString(3)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][6] == Convert::ToString(4)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][6] == Convert::ToString(5)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][6] == Convert::ToString(6)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][6] == Convert::ToString(7)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][6] == Convert::ToString(8)) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][6] == " ") {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 7) {
					if (arrCells[7][7] == Convert::ToString(1)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][7] == Convert::ToString(2)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][7] == Convert::ToString(3)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][7] == Convert::ToString(4)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][7] == Convert::ToString(5)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][7] == Convert::ToString(6)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][7] == Convert::ToString(7)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][7] == Convert::ToString(8)) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][7] == " ") {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 8) {
					if (arrCells[7][8] == Convert::ToString(1)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][8] == Convert::ToString(2)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][8] == Convert::ToString(3)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][8] == Convert::ToString(4)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][8] == Convert::ToString(5)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][8] == Convert::ToString(6)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][8] == Convert::ToString(7)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][8] == Convert::ToString(8)) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][8] == " ") {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 7 && j == 9) {
					if (arrCells[7][9] == Convert::ToString(1)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[7][9] == Convert::ToString(2)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[7][9] == Convert::ToString(3)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[7][9] == Convert::ToString(4)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[7][9] == Convert::ToString(5)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[7][9] == Convert::ToString(6)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[7][9] == Convert::ToString(7)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[7][9] == Convert::ToString(8)) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[7][9] == " ") {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}


				else if (i == 8 && j == 0) {
					if (arrCells[8][0] == Convert::ToString(1)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][0] == Convert::ToString(2)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][0] == Convert::ToString(3)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][0] == Convert::ToString(4)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][0] == Convert::ToString(5)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][0] == Convert::ToString(6)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][0] == Convert::ToString(7)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][0] == Convert::ToString(8)) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][0] == " ") {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 1) {
					if (arrCells[8][1] == Convert::ToString(1)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][1] == Convert::ToString(2)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][1] == Convert::ToString(3)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][1] == Convert::ToString(4)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][1] == Convert::ToString(5)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][1] == Convert::ToString(6)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][1] == Convert::ToString(7)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][1] == Convert::ToString(8)) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][1] == " ") {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 2) {
					if (arrCells[8][2] == Convert::ToString(1)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][2] == Convert::ToString(2)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][2] == Convert::ToString(3)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][2] == Convert::ToString(4)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][2] == Convert::ToString(5)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][2] == Convert::ToString(6)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][2] == Convert::ToString(7)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][2] == Convert::ToString(8)) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][2] == " ") {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 3) {
					if (arrCells[8][3] == Convert::ToString(1)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][3] == Convert::ToString(2)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][3] == Convert::ToString(3)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][3] == Convert::ToString(4)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][3] == Convert::ToString(5)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][3] == Convert::ToString(6)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][3] == Convert::ToString(7)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][3] == Convert::ToString(8)) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][3] == " ") {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 4) {
					if (arrCells[8][4] == Convert::ToString(1)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][4] == Convert::ToString(2)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][4] == Convert::ToString(3)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][4] == Convert::ToString(4)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][4] == Convert::ToString(5)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][4] == Convert::ToString(6)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][4] == Convert::ToString(7)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][4] == Convert::ToString(8)) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][4] == " ") {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 5) {
					if (arrCells[8][5] == Convert::ToString(1)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][5] == Convert::ToString(2)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][5] == Convert::ToString(3)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][5] == Convert::ToString(4)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][5] == Convert::ToString(5)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][5] == Convert::ToString(6)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][5] == Convert::ToString(7)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][5] == Convert::ToString(8)) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][5] == " ") {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 6) {
					if (arrCells[8][6] == Convert::ToString(1)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][6] == Convert::ToString(2)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][6] == Convert::ToString(3)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][6] == Convert::ToString(4)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][6] == Convert::ToString(5)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][6] == Convert::ToString(6)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][6] == Convert::ToString(7)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][6] == Convert::ToString(8)) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][6] == " ") {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 7) {
					if (arrCells[8][7] == Convert::ToString(1)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][7] == Convert::ToString(2)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][7] == Convert::ToString(3)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][7] == Convert::ToString(4)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][7] == Convert::ToString(5)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][7] == Convert::ToString(6)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][7] == Convert::ToString(7)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][7] == Convert::ToString(8)) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][7] == " ") {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 8) {
					if (arrCells[8][8] == Convert::ToString(1)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][8] == Convert::ToString(2)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][8] == Convert::ToString(3)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][8] == Convert::ToString(4)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][8] == Convert::ToString(5)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][8] == Convert::ToString(6)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][8] == Convert::ToString(7)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][8] == Convert::ToString(8)) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][8] == " ") {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 8 && j == 9) {
					if (arrCells[8][9] == Convert::ToString(1)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[8][9] == Convert::ToString(2)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[8][9] == Convert::ToString(3)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[8][9] == Convert::ToString(4)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[8][9] == Convert::ToString(5)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[8][9] == Convert::ToString(6)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[8][9] == Convert::ToString(7)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[8][9] == Convert::ToString(8)) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[8][9] == " ") {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}



				else if (i == 9 && j == 0) {
					if (arrCells[9][0] == Convert::ToString(1)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][0] == Convert::ToString(2)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][0] == Convert::ToString(3)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][0] == Convert::ToString(4)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][0] == Convert::ToString(5)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][0] == Convert::ToString(6)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][0] == Convert::ToString(7)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][0] == Convert::ToString(8)) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][0] == " ") {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 1) {
					if (arrCells[9][1] == Convert::ToString(1)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][1] == Convert::ToString(2)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][1] == Convert::ToString(3)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][1] == Convert::ToString(4)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][1] == Convert::ToString(5)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][1] == Convert::ToString(6)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][1] == Convert::ToString(7)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][1] == Convert::ToString(8)) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][1] == " ") {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 2) {
					if (arrCells[9][2] == Convert::ToString(1)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][2] == Convert::ToString(2)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][2] == Convert::ToString(3)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][2] == Convert::ToString(4)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][2] == Convert::ToString(5)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][2] == Convert::ToString(6)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][2] == Convert::ToString(7)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][2] == Convert::ToString(8)) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][2] == " ") {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 3) {
					if (arrCells[9][3] == Convert::ToString(1)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][3] == Convert::ToString(2)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][3] == Convert::ToString(3)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][3] == Convert::ToString(4)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][3] == Convert::ToString(5)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][3] == Convert::ToString(6)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][3] == Convert::ToString(7)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][3] == Convert::ToString(8)) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][3] == " ") {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 4) {
					if (arrCells[9][4] == Convert::ToString(1)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][4] == Convert::ToString(2)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][4] == Convert::ToString(3)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][4] == Convert::ToString(4)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][4] == Convert::ToString(5)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][4] == Convert::ToString(6)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][4] == Convert::ToString(7)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][4] == Convert::ToString(8)) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][4] == " ") {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 5) {
					if (arrCells[9][5] == Convert::ToString(1)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][5] == Convert::ToString(2)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][5] == Convert::ToString(3)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][5] == Convert::ToString(4)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][5] == Convert::ToString(5)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][5] == Convert::ToString(6)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][5] == Convert::ToString(7)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][5] == Convert::ToString(8)) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][5] == " ") {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 6) {
					if (arrCells[9][6] == Convert::ToString(1)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][6] == Convert::ToString(2)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][6] == Convert::ToString(3)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][6] == Convert::ToString(4)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][6] == Convert::ToString(5)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][6] == Convert::ToString(6)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][6] == Convert::ToString(7)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][6] == Convert::ToString(8)) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][6] == " ") {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 7) {
					if (arrCells[9][7] == Convert::ToString(1)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][7] == Convert::ToString(2)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][7] == Convert::ToString(3)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][7] == Convert::ToString(4)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][7] == Convert::ToString(5)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][7] == Convert::ToString(6)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][7] == Convert::ToString(7)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][7] == Convert::ToString(8)) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][7] == " ") {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 8) {
					if (arrCells[9][8] == Convert::ToString(1)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][8] == Convert::ToString(2)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][8] == Convert::ToString(3)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][8] == Convert::ToString(4)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][8] == Convert::ToString(5)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][8] == Convert::ToString(6)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][8] == Convert::ToString(7)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][8] == Convert::ToString(8)) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][8] == " ") {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				else if (i == 9 && j == 9) {
					if (arrCells[9][9] == Convert::ToString(1)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[1];
					}
					else if (arrCells[9][9] == Convert::ToString(2)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[2];
					}
					else if (arrCells[9][9] == Convert::ToString(3)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[3];
					}
					else if (arrCells[9][9] == Convert::ToString(4)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[4];
					}
					else if (arrCells[9][9] == Convert::ToString(5)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[5];
					}
					else if (arrCells[9][9] == Convert::ToString(6)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[6];
					}
					else if (arrCells[9][9] == Convert::ToString(7)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[7];
					}
					else if (arrCells[9][9] == Convert::ToString(8)) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[8];
					}
					else if (arrCells[9][9] == " ") {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[9];
					}
				}
				ArrayCheckEmptyCell[i][j] = false;
				LeftClick[(i * 10) + j] = true;
			}
		}
	}
}

/** Показать оставшееся количество бомб **/
System::Void SapperGame::Field::DisplayTheRemainingNumberOfBombs() {
	String^ TheNumberOfBombsRemainingOnTheField_str = Convert::ToString(TheNumberOfBombsRemainingOnTheField);

	labelCountMinesValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];

	if (TheNumberOfBombsRemainingOnTheField >= 10) {
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				if (TheNumberOfBombsRemainingOnTheField_str[i] == '0') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '1') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '2') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '3') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '4') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '5') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '6') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '7') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '8') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '9') {
					labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
				}
			}
			else if (i == 1) {
				if (TheNumberOfBombsRemainingOnTheField_str[i] == '0') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '1') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '2') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '3') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '4') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '5') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '6') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '7') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '8') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
				}
				else if (TheNumberOfBombsRemainingOnTheField_str[i] == '9') {
					labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
				}
			}
		}
	}
	else {
		labelCountMinesValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
		if (TheNumberOfBombsRemainingOnTheField_str[0] == '0') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '1') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '2') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '3') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '4') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '5') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '6') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '7') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '8') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
		}
		else if (TheNumberOfBombsRemainingOnTheField_str[0] == '9') {
			labelCountMinesValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
		}
	}

}

/** Открыть все клетки **/
System::Void SapperGame::Field::Open_All_Cells() {

	if (gameOver) {
		//
		// first line of buttons
		//
		if (DeadMineStr == 0 && DeadMineColumn == 0)
			button1->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 1)
			button2->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 2)
			button3->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 3)
			button4->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 4)
			button5->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 5)
			button6->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 6)
			button7->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 7)
			button8->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 8)
			button9->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 0 && DeadMineColumn == 9)
			button10->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// second line of buttons
		//
		else if (DeadMineStr == 1 && DeadMineColumn == 0)
			button11->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 1)
			button12->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 2)
			button13->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 3)
			button14->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 4)
			button15->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 5)
			button16->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 6)
			button17->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 7)
			button18->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 8)
			button19->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 1 && DeadMineColumn == 9)
			button20->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// third line of buttons
		//
		else if (DeadMineStr == 2 && DeadMineColumn == 0)
			button21->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 1)
			button22->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 2)
			button23->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 3)
			button24->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 4)
			button25->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 5)
			button26->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 6)
			button27->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 7)
			button28->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 8)
			button29->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 2 && DeadMineColumn == 9)
			button30->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// fourth line of buttons
		//
		else if (DeadMineStr == 3 && DeadMineColumn == 0)
			button31->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 1)
			button32->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 2)
			button33->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 3)
			button34->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 4)
			button35->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 5)
			button36->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 6)
			button37->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 7)
			button38->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 8)
			button39->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 3 && DeadMineColumn == 9)
			button40->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// fifth line of buttons
		//
		else if (DeadMineStr == 4 && DeadMineColumn == 0)
			button41->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 1)
			button42->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 2)
			button43->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 3)
			button44->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 4)
			button45->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 5)
			button46->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 6)
			button47->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 7)
			button48->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 8)
			button49->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 4 && DeadMineColumn == 9)
			button50->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// sixth line of buttons
		//
		else if (DeadMineStr == 5 && DeadMineColumn == 0)
			button51->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 1)
			button52->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 2)
			button53->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 3)
			button54->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 4)
			button55->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 5)
			button56->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 6)
			button57->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 7)
			button58->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 8)
			button59->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 5 && DeadMineColumn == 9)
			button60->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// seventh line of buttons
		//
		else if (DeadMineStr == 6 && DeadMineColumn == 0)
			button61->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 1)
			button62->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 2)
			button63->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 3)
			button64->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 4)
			button65->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 5)
			button66->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 6)
			button67->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 7)
			button68->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 8)
			button69->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 6 && DeadMineColumn == 9)
			button70->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// eighth line of buttons
		//
		else if (DeadMineStr == 7 && DeadMineColumn == 0)
			button71->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 1)
			button72->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 2)
			button73->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 3)
			button74->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 4)
			button75->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 5)
			button76->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 6)
			button77->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 7)
			button78->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 8)
			button79->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 7 && DeadMineColumn == 9)
			button80->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// ninth line of buttons
		//
		else if (DeadMineStr == 8 && DeadMineColumn == 0)
			button81->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 1)
			button82->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 2)
			button83->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 3)
			button84->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 4)
			button85->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 5)
			button86->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 6)
			button87->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 7)
			button88->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 8)
			button89->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 8 && DeadMineColumn == 9)
			button90->BackgroundImage = imageList_imagesOnTiles->Images[11];

		//
		// tenth line of buttons
		//
		else if (DeadMineStr == 9 && DeadMineColumn == 0)
			button91->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 1)
			button92->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 2)
			button93->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 3)
			button94->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 4)
			button95->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 5)
			button96->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 6)
			button97->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 7)
			button98->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 8)
			button99->BackgroundImage = imageList_imagesOnTiles->Images[11];
		else if (DeadMineStr == 9 && DeadMineColumn == 9)
			button100->BackgroundImage = imageList_imagesOnTiles->Images[11];
	}

	Image^ image;
	if (victory)
		image = imageList_imagesOnTiles->Images[12];
	else if (gameOver)
		image = imageList_imagesOnTiles->Images[10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (gameOver) {
				if (i == DeadMineStr && j == DeadMineColumn)
					continue;
			}

			//
			// Bombs cells
			//
			if (arrCells[i][j] == "mine") {
				if (BombMark[i * 10 + j])
					continue;

				if (i == 0 && j == 0)
					button1->BackgroundImage = image;
				if (i == 0 && j == 1)
					button2->BackgroundImage = image;
				if (i == 0 && j == 2)
					button3->BackgroundImage = image;
				if (i == 0 && j == 3)
					button4->BackgroundImage = image;
				if (i == 0 && j == 4)
					button5->BackgroundImage = image;
				if (i == 0 && j == 5)
					button6->BackgroundImage = image;
				if (i == 0 && j == 6)
					button7->BackgroundImage = image;
				if (i == 0 && j == 7)
					button8->BackgroundImage = image;
				if (i == 0 && j == 8)
					button9->BackgroundImage = image;
				if (i == 0 && j == 9)
					button10->BackgroundImage = image;

				if (i == 1 && j == 0)
					button11->BackgroundImage = image;
				if (i == 1 && j == 1)
					button12->BackgroundImage = image;
				if (i == 1 && j == 2)
					button13->BackgroundImage = image;
				if (i == 1 && j == 3)
					button14->BackgroundImage = image;
				if (i == 1 && j == 4)
					button15->BackgroundImage = image;
				if (i == 1 && j == 5)
					button16->BackgroundImage = image;
				if (i == 1 && j == 6)
					button17->BackgroundImage = image;
				if (i == 1 && j == 7)
					button18->BackgroundImage = image;
				if (i == 1 && j == 8)
					button19->BackgroundImage = image;
				if (i == 1 && j == 9)
					button20->BackgroundImage = image;

				if (i == 2 && j == 0)
					button21->BackgroundImage = image;
				if (i == 2 && j == 1)
					button22->BackgroundImage = image;
				if (i == 2 && j == 2)
					button23->BackgroundImage = image;
				if (i == 2 && j == 3)
					button24->BackgroundImage = image;
				if (i == 2 && j == 4)
					button25->BackgroundImage = image;
				if (i == 2 && j == 5)
					button26->BackgroundImage = image;
				if (i == 2 && j == 6)
					button27->BackgroundImage = image;
				if (i == 2 && j == 7)
					button28->BackgroundImage = image;
				if (i == 2 && j == 8)
					button29->BackgroundImage = image;
				if (i == 2 && j == 9)
					button30->BackgroundImage = image;

				if (i == 3 && j == 0)
					button31->BackgroundImage = image;
				if (i == 3 && j == 1)
					button32->BackgroundImage = image;
				if (i == 3 && j == 2)
					button33->BackgroundImage = image;
				if (i == 3 && j == 3)
					button34->BackgroundImage = image;
				if (i == 3 && j == 4)
					button35->BackgroundImage = image;
				if (i == 3 && j == 5)
					button36->BackgroundImage = image;
				if (i == 3 && j == 6)
					button37->BackgroundImage = image;
				if (i == 3 && j == 7)
					button38->BackgroundImage = image;
				if (i == 3 && j == 8)
					button39->BackgroundImage = image;
				if (i == 3 && j == 9)
					button40->BackgroundImage = image;

				if (i == 4 && j == 0)
					button41->BackgroundImage = image;
				if (i == 4 && j == 1)
					button42->BackgroundImage = image;
				if (i == 4 && j == 2)
					button43->BackgroundImage = image;
				if (i == 4 && j == 3)
					button44->BackgroundImage = image;
				if (i == 4 && j == 4)
					button45->BackgroundImage = image;
				if (i == 4 && j == 5)
					button46->BackgroundImage = image;
				if (i == 4 && j == 6)
					button47->BackgroundImage = image;
				if (i == 4 && j == 7)
					button48->BackgroundImage = image;
				if (i == 4 && j == 8)
					button49->BackgroundImage = image;
				if (i == 4 && j == 9)
					button50->BackgroundImage = image;

				if (i == 5 && j == 0)
					button51->BackgroundImage = image;
				if (i == 5 && j == 1)
					button52->BackgroundImage = image;
				if (i == 5 && j == 2)
					button53->BackgroundImage = image;
				if (i == 5 && j == 3)
					button54->BackgroundImage = image;
				if (i == 5 && j == 4)
					button55->BackgroundImage = image;
				if (i == 5 && j == 5)
					button56->BackgroundImage = image;
				if (i == 5 && j == 6)
					button57->BackgroundImage = image;
				if (i == 5 && j == 7)
					button58->BackgroundImage = image;
				if (i == 5 && j == 8)
					button59->BackgroundImage = image;
				if (i == 5 && j == 9)
					button60->BackgroundImage = image;

				if (i == 6 && j == 0)
					button61->BackgroundImage = image;
				if (i == 6 && j == 1)
					button62->BackgroundImage = image;
				if (i == 6 && j == 2)
					button63->BackgroundImage = image;
				if (i == 6 && j == 3)
					button64->BackgroundImage = image;
				if (i == 6 && j == 4)
					button65->BackgroundImage = image;
				if (i == 6 && j == 5)
					button66->BackgroundImage = image;
				if (i == 6 && j == 6)
					button67->BackgroundImage = image;
				if (i == 6 && j == 7)
					button68->BackgroundImage = image;
				if (i == 6 && j == 8)
					button69->BackgroundImage = image;
				if (i == 6 && j == 9)
					button70->BackgroundImage = image;

				if (i == 7 && j == 0)
					button71->BackgroundImage = image;
				if (i == 7 && j == 1)
					button72->BackgroundImage = image;
				if (i == 7 && j == 2)
					button73->BackgroundImage = image;
				if (i == 7 && j == 3)
					button74->BackgroundImage = image;
				if (i == 7 && j == 4)
					button75->BackgroundImage = image;
				if (i == 7 && j == 5)
					button76->BackgroundImage = image;
				if (i == 7 && j == 6)
					button77->BackgroundImage = image;
				if (i == 7 && j == 7)
					button78->BackgroundImage = image;
				if (i == 7 && j == 8)
					button79->BackgroundImage = image;
				if (i == 7 && j == 9)
					button80->BackgroundImage = image;

				if (i == 8 && j == 0)
					button81->BackgroundImage = image;
				if (i == 8 && j == 1)
					button82->BackgroundImage = image;
				if (i == 8 && j == 2)
					button83->BackgroundImage = image;
				if (i == 8 && j == 3)
					button84->BackgroundImage = image;
				if (i == 8 && j == 4)
					button85->BackgroundImage = image;
				if (i == 8 && j == 5)
					button86->BackgroundImage = image;
				if (i == 8 && j == 6)
					button87->BackgroundImage = image;
				if (i == 8 && j == 7)
					button88->BackgroundImage = image;
				if (i == 8 && j == 8)
					button89->BackgroundImage = image;
				if (i == 8 && j == 9)
					button90->BackgroundImage = image;

				if (i == 9 && j == 0)
					button91->BackgroundImage = image;
				if (i == 9 && j == 1)
					button92->BackgroundImage = image;
				if (i == 9 && j == 2)
					button93->BackgroundImage = image;
				if (i == 9 && j == 3)
					button94->BackgroundImage = image;
				if (i == 9 && j == 4)
					button95->BackgroundImage = image;
				if (i == 9 && j == 5)
					button96->BackgroundImage = image;
				if (i == 9 && j == 6)
					button97->BackgroundImage = image;
				if (i == 9 && j == 7)
					button98->BackgroundImage = image;
				if (i == 9 && j == 8)
					button99->BackgroundImage = image;
				if (i == 9 && j == 9)
					button100->BackgroundImage = image;
			}
			//
			// Cells without bombs
			//
			else if (gameOver) {
				/// Button1
				if (i == 0 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button1->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button1->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button1->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button2
				if (i == 0 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button2->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button2->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button2->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button3
				if (i == 0 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button3->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button3->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button3->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button4
				if (i == 0 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button4->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button4->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button4->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button5
				if (i == 0 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button5->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button5->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button5->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button6
				if (i == 0 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button6->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button6->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button6->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button7
				if (i == 0 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button7->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button7->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button7->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button8
				if (i == 0 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button8->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button8->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button8->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button9
				if (i == 0 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button9->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button9->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button9->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button10
				if (i == 0 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button10->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button10->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button10->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button11
				if (i == 1 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button11->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button11->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button11->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button12
				if (i == 1 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button12->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button12->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button12->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button13
				if (i == 1 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button13->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button13->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button13->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button14
				if (i == 1 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button14->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button14->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button14->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button15
				if (i == 1 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button15->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button15->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button15->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button16
				if (i == 1 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button16->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button16->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button16->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button17
				if (i == 1 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button17->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button17->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button17->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button18
				if (i == 1 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button18->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button18->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button18->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button19
				if (i == 1 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button19->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button19->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button19->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button20
				if (i == 1 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button20->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button20->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button20->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button21
				if (i == 2 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button21->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button21->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button21->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button22
				if (i == 2 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button22->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button22->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button22->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button23
				if (i == 2 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button23->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button23->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button23->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button24
				if (i == 2 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button24->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button24->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button24->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button25
				if (i == 2 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button25->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button25->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button25->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button26
				if (i == 2 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button26->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button26->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button26->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button27
				if (i == 2 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button27->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button27->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button27->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button28
				if (i == 2 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button28->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button28->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button28->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button29
				if (i == 2 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button29->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button29->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button29->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button30
				if (i == 2 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button30->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button30->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button30->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button31
				if (i == 3 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button31->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button31->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button31->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button32
				if (i == 3 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button32->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button32->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button32->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button33
				if (i == 3 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button33->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button33->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button33->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button34
				if (i == 3 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button34->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button34->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button34->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button35
				if (i == 3 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button35->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button35->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button35->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button36
				if (i == 3 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button36->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button36->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button36->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button37
				if (i == 3 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button37->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button37->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button37->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button38
				if (i == 3 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button38->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button38->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button38->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button39
				if (i == 3 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button39->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button39->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button39->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button40
				if (i == 3 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button40->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button40->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button40->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button41
				if (i == 4 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button41->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button41->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button41->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button42
				if (i == 4 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button42->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button42->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button42->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button43
				if (i == 4 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button43->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button43->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button43->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button44
				if (i == 4 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button44->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button44->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button44->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button45
				if (i == 4 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button45->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button45->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button45->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button46
				if (i == 4 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button46->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button46->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button46->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button47
				if (i == 4 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button47->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button47->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button47->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button48
				if (i == 4 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button48->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button48->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button48->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button49
				if (i == 4 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button49->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button49->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button49->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button50
				if (i == 4 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button50->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button50->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button50->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button51
				if (i == 5 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button51->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button51->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button51->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button52
				if (i == 5 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button52->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button52->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button52->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button53
				if (i == 5 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button53->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button53->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button53->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button54
				if (i == 5 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button54->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button54->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button54->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button55
				if (i == 5 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button55->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button55->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button55->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button56
				if (i == 5 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button56->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button56->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button56->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button57
				if (i == 5 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button57->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button57->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button57->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button58
				if (i == 5 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button58->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button58->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button58->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button59
				if (i == 5 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button59->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button59->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button59->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button60
				if (i == 5 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button60->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button60->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button60->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button61
				if (i == 6 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button61->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button61->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button61->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button62
				if (i == 6 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button62->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button62->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button62->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button63
				if (i == 6 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button63->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button63->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button63->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button64
				if (i == 6 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button64->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button64->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button64->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button65
				if (i == 6 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button65->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button65->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button65->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button66
				if (i == 6 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button66->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button66->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button66->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button67
				if (i == 6 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button67->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button67->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button67->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button68
				if (i == 6 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button68->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button68->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button68->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button69
				if (i == 6 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button69->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button69->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button69->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button70
				if (i == 6 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button70->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button70->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button70->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button71
				if (i == 7 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button71->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button71->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button71->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button72
				if (i == 7 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button72->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button72->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button72->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button73
				if (i == 7 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button73->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button73->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button73->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button74
				if (i == 7 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button74->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button74->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button74->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button75
				if (i == 7 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button75->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button75->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button75->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button76
				if (i == 7 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button76->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button76->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button76->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button77
				if (i == 7 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button77->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button77->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button77->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button78
				if (i == 7 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button78->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button78->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button78->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button79
				if (i == 7 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button79->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button79->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button79->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button80
				if (i == 7 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button80->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button80->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button80->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button81
				if (i == 8 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button81->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button81->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button81->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button82
				if (i == 8 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button82->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button82->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button82->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button83
				if (i == 8 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button83->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button83->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button83->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button84
				if (i == 8 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button84->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button84->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button84->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button85
				if (i == 8 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button85->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button85->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button85->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button86
				if (i == 8 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button86->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button86->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button86->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button87
				if (i == 8 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button87->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button87->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button87->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button88
				if (i == 8 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button88->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button88->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button88->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button89
				if (i == 8 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button89->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button89->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button89->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button90
				if (i == 8 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button90->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button90->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button90->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}

				/// Button91
				if (i == 9 && j == 0) {
					if (BombMark[i * 10 + j]) {
						button91->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button91->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button91->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button92
				if (i == 9 && j == 1) {
					if (BombMark[i * 10 + j]) {
						button92->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button92->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button92->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button93
				if (i == 9 && j == 2) {
					if (BombMark[i * 10 + j]) {
						button93->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button93->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button93->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button94
				if (i == 9 && j == 3) {
					if (BombMark[i * 10 + j]) {
						button94->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button94->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button94->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button95
				if (i == 9 && j == 4) {
					if (BombMark[i * 10 + j]) {
						button95->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button95->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button95->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button96
				if (i == 9 && j == 5) {
					if (BombMark[i * 10 + j]) {
						button96->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button96->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button96->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button97
				if (i == 9 && j == 6) {
					if (BombMark[i * 10 + j]) {
						button97->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button97->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button97->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button98
				if (i == 9 && j == 7) {
					if (BombMark[i * 10 + j]) {
						button98->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button98->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button98->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button99
				if (i == 9 && j == 8) {
					if (BombMark[i * 10 + j]) {
						button99->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button99->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button99->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
				/// Button100
				if (i == 9 && j == 9) {
					if (BombMark[i * 10 + j]) {
						button100->BackgroundImage = imageList_imagesOnTiles->Images[13];
						continue;
					}
					if (arrCells[i][j] == Convert::ToString(1))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[1];
					else if (arrCells[i][j] == Convert::ToString(2))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[2];
					else if (arrCells[i][j] == Convert::ToString(3))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[3];
					else if (arrCells[i][j] == Convert::ToString(4))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[4];
					else if (arrCells[i][j] == Convert::ToString(5))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[5];
					else if (arrCells[i][j] == Convert::ToString(6))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[6];
					else if (arrCells[i][j] == Convert::ToString(7))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[7];
					else if (arrCells[i][j] == Convert::ToString(8))
						button100->BackgroundImage = imageList_imagesOnTiles->Images[8];
					else if (arrCells[i][j] == " ")
						button100->BackgroundImage = imageList_imagesOnTiles->Images[9];
				}
			}
		}
	}
}

/** Отправить данные об игровом поле второму игроку **/
System::Void SapperGame::Field::SendDataAboutThePlayingFieldToTheSecondPlayer() {
	String^ gameArray = "";
	gameArray += "<arrCells>";
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arrCells[i][j] == "mine") {
				gameArray += "m";
			}
			else {
				gameArray += arrCells[i][j];
			}
		}
	}
	gameArray += "<NumberOfMines>" + NumberOfMines;
	char messageSend[2048];
	String^ msg = "<game><start><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + gameArray + "\r\n\t";
	RussianEncoding(messageSend, msg);
	send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
}





//
// DifficultyLevelSelection Form
//
System::Void SapperGame::DifficultyLevelSelection::Button_Start_Click(System::Object^ sender, System::EventArgs^ e) {
	Field^ Form_Field = gcnew Field();
	if (radioButtonSinglePlayerGame->Checked == true) {
		Form_Field->MultiplayerGame = false;
	}
	else if (radioButtonSinglePlayerGame->Checked == true) {
		Form_Field->MultiplayerGame = true;
	}

	if (radioButton_Easy->Checked == true) {
		Form_Field->NumberOfMines = 18;
	}
	else if (radioButton_Normal->Checked == true) {
		Form_Field->NumberOfMines = 28;
	}
	else if (radioButton_Hard->Checked == true) {
		Form_Field->NumberOfMines = 48;
	}

	DifficultyLevelSelection::Visible = false;
	Form_Field->Show();
}

System::Void SapperGame::DifficultyLevelSelection::Button_Exit_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::ExitThread();
}

System::Void SapperGame::DifficultyLevelSelection::Button_Start_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->button_Start->Font = gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold);
	delete this->button_Start->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Start_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->button_Start->Font = gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold);
	delete this->button_Start->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Start_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->button_Start->Font = gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold);
	delete this->button_Start->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Start_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->button_Start->Font = gcnew System::Drawing::Font(L"Segoe Print", 14.25F, System::Drawing::FontStyle::Bold);
	delete this->button_Start->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Exit_Cancel_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->button_Exit_Cancel->Font = gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold);
	delete this->button_Exit_Cancel->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Exit_Cancel_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->button_Exit_Cancel->Font = gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Regular);
	delete this->button_Exit_Cancel->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Exit_Cancel_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->button_Exit_Cancel->Font = gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold);
	delete this->button_Exit_Cancel->Font;
}

System::Void SapperGame::DifficultyLevelSelection::Button_Exit_Cancel_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->button_Exit_Cancel->Font = gcnew System::Drawing::Font(L"Segoe Print", 8.25F, System::Drawing::FontStyle::Regular);
	delete this->button_Exit_Cancel->Font;
}


//
// FormVictory Form
//
System::Void SapperGame::FormVictory::TimerFirework_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (countFirework < 59) {
		FormVictory::BackgroundImage = imageList_imagesVictory->Images[countFirework];
		FormVictory::BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		countFirework++;
	}
	else
		countFirework = 0;
}

System::Void SapperGame::FormVictory::TimerOpacity_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (countOpacity == 1) {
		if (r > 0 && g > 0 && b > 70) {
			r -= 1;
			g -= 1;
			b -= 1;
			labelVictory->ForeColor = Color::FromArgb(r, g, b);

			if (r == 0 || g == 0 || b == 70) {
				labelVictory->ForeColor = Color::FromArgb(r, g, b);
				r = 215;
				g = 229;
				b = 242;
				countOpacity++;
			}
		}
	}
	else if (countOpacity == 2) {
		if (r > 0 && g > 0 && b > 70) {
			r -= 1;
			g -= 1;
			b -= 1;
			labelLevel_image->ForeColor = Color::FromArgb(r, g, b);

			labelTime_image->ForeColor = Color::FromArgb(r, g, b);
			labelTime_text->ForeColor = Color::FromArgb(r, g, b);

			if (r == 0 || g == 0 || b == 70) {
				labelVictory->ForeColor = Color::FromArgb(r, g, b);
				r = 215;
				g = 229;
				b = 242;
				countOpacity++;
			}
		}

		if (NumberOfMines == 18) {
			if (r_labelLevel_text > 0 && g_labelLevel_text > 128 && b_labelLevel_text > 0) {
				tempSubtraction += 0.5;
				r_labelLevel_text -= 1;
				if (tempSubtraction == 1) {
					g_labelLevel_text -= tempSubtraction;
					tempSubtraction = 0;
				}
				b_labelLevel_text -= 1;
				labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);

				if (r_labelLevel_text == 0 || g_labelLevel_text == 128 || b_labelLevel_text == 0) {
					labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);
					r_labelLevel_text = 215;
					g_labelLevel_text = 229;
					b_labelLevel_text = 242;
					countOpacity++;
				}
			}
		}
		else if (NumberOfMines == 28) {
			if (b_labelLevel_text > 0) {
				b_labelLevel_text -= 1;
				labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);

				if (b_labelLevel_text == 0) {
					labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);
					b_labelLevel_text = 242;
					countOpacity++;
				}
			}
		}
		else if (NumberOfMines == 48) {
			if (g_labelLevel_text > 0 && b_labelLevel_text > 0) {
				g_labelLevel_text -= 1;
				b_labelLevel_text -= 1;
				labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);

				if (g_labelLevel_text == 0 || b_labelLevel_text == 0) {
					labelLevel_text->ForeColor = Color::FromArgb(r_labelLevel_text, g_labelLevel_text, b_labelLevel_text);
					g_labelLevel_text = 229;
					b_labelLevel_text = 242;
					countOpacity++;
				}
			}
		}
	}
	else if (countOpacity == 3) {
		this->buttonNewGame->Visible = true;
		this->buttonExit->Visible = true;
	}
}

System::Void SapperGame::FormVictory::FormVictory_Load(System::Object^ sender, System::EventArgs^ e) {

	System::Drawing::Rectangle ScreenSize = System::Windows::Forms::Screen::PrimaryScreen->Bounds;
	Field^ Form_Field = gcnew Field();
	
	if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X < ScreenSize.Width / 2) &&
		(LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height < ScreenSize.Height)) {
		FormVictory::Location = Point((LocationFieldForm.X + Form_Field->ClientSize.Width + 9), LocationFieldForm.Y);
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X >= ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height < ScreenSize.Height)) {
		FormVictory::Location = Point((LocationFieldForm.X - FormVictory::ClientSize.Width + 9), LocationFieldForm.Y);
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X < ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height >= ScreenSize.Height)) {
		FormVictory::Location = Point((LocationFieldForm.X + Form_Field->ClientSize.Width + 9), (LocationFieldForm.Y - FormVictory::ClientSize.Height + 9));
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X >= ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height >= ScreenSize.Height)) {
		FormVictory::Location = Point((LocationFieldForm.X - FormVictory::ClientSize.Width + 9), (LocationFieldForm.Y - FormVictory::ClientSize.Height + 9));
	}
	buttonNewGame->Focus();
	delete Form_Field;
}

System::Void SapperGame::FormVictory::ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	DoNotAskAboutClosingTheForm = true;
	FormVictory::Close();
}

System::Void SapperGame::FormVictory::ButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
	FormVictory::Close();
}

System::Void SapperGame::FormVictory::FormVictory_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (!DoNotAskAboutClosingTheForm) {
		MessageForm MF;
		if (MF.ShowDialog("Are you sure you want to exit the game?", "Sapper", "Yes", "No") == "Yes") {
			Application::ExitThread();
		}
		else {
			e->Cancel = true;
		}
	}
	else {
		this->buttonExit->Click -= gcnew System::EventHandler(this, &FormVictory::ButtonExit_Click);
		this->buttonExit->Enter -= gcnew System::EventHandler(this, &FormVictory::ButtonExit_Enter);
		this->buttonExit->Leave -= gcnew System::EventHandler(this, &FormVictory::ButtonExit_Leave);
		this->buttonExit->MouseEnter -= gcnew System::EventHandler(this, &FormVictory::ButtonExit_MouseEnter);
		this->buttonExit->MouseLeave -= gcnew System::EventHandler(this, &FormVictory::ButtonExit_MouseLeave);
		this->buttonNewGame->UseVisualStyleBackColor = false;

		this->buttonNewGame->Click -= gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Click);
		this->buttonNewGame->Enter -= gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Enter);
		this->buttonNewGame->Leave -= gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_Leave);
		this->buttonNewGame->MouseEnter -= gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_MouseEnter);
		this->buttonNewGame->MouseLeave -= gcnew System::EventHandler(this, &FormVictory::ButtonNewGame_MouseLeave);

		this->timerFirework->Tick -= gcnew System::EventHandler(this, &FormVictory::TimerFirework_Tick);

		this->timerOpacity->Tick -= gcnew System::EventHandler(this, &FormVictory::TimerOpacity_Tick);

		this->FormClosing -= gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormVictory::FormVictory_FormClosing);
		this->Load -= gcnew System::EventHandler(this, &FormVictory::FormVictory_Load);
	}
}

System::Void SapperGame::FormVictory::ButtonNewGame_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormVictory::ButtonNewGame_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormVictory::ButtonNewGame_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormVictory::ButtonNewGame_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormVictory::ButtonExit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormVictory::ButtonExit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormVictory::ButtonExit_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormVictory::ButtonExit_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}


//
// FormGameOver Form
//
System::Void SapperGame::FormGameOver::Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	FormGameOver::BackgroundImage = imageList_imagesGameOver->Images[count];
	FormGameOver::BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	if (!found)
		count++;
	else
		count--;
	if (count == 3)
		found = true;
	else if (count == 0)
		found = false;
}

System::Void SapperGame::FormGameOver::FormGameOver_Load(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Rectangle ScreenSize = System::Windows::Forms::Screen::PrimaryScreen->Bounds;
	Field^ Form_Field = gcnew Field();

	if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X < ScreenSize.Width / 2) &&
		(LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height < ScreenSize.Height))
	{
		FormGameOver::Location = Point((LocationFieldForm.X + Form_Field->ClientSize.Width + 9), LocationFieldForm.Y);
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X >= ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height < ScreenSize.Height))
	{
			FormGameOver::Location = Point((LocationFieldForm.X - FormGameOver::ClientSize.Width + 9), LocationFieldForm.Y);
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X < ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height >= ScreenSize.Height))
	{
			FormGameOver::Location = Point((LocationFieldForm.X + Form_Field->ClientSize.Width + 9), (LocationFieldForm.Y - FormGameOver::ClientSize.Height + 9));
	}
	else if ((LocationFieldForm.X + Form_Field->ClientSize.Width > 0) && (LocationFieldForm.X >= ScreenSize.Width / 2) &&
			 (LocationFieldForm.Y >= 0) && (LocationFieldForm.Y + Form_Field->ClientSize.Height >= ScreenSize.Height))
	{
			FormGameOver::Location = Point((LocationFieldForm.X - FormGameOver::ClientSize.Width + 9), (LocationFieldForm.Y - FormGameOver::ClientSize.Height + 9));
	}
	buttonNewGame->Focus();
	delete Form_Field;
}

System::Void SapperGame::FormGameOver::ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	DoNotAskAboutClosingTheForm = true;
	FormGameOver::Close();
}

System::Void SapperGame::FormGameOver::ButtonExit_Click(System::Object^ sender, System::EventArgs^ e) {
	FormGameOver::Close();
}

System::Void SapperGame::FormGameOver::FormGameOver_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (!DoNotAskAboutClosingTheForm) {
		MessageForm MF;
		if (MF.ShowDialog("Are you sure you want to exit the game?", "Sapper", "Yes", "No") == "Yes") {
			Application::ExitThread();
		}
		else {
			e->Cancel = true;
		}
	}
	else {
		this->buttonExit->Click -= gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Click);
		this->buttonExit->Enter -= gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Enter);
		this->buttonExit->Leave -= gcnew System::EventHandler(this, &FormGameOver::ButtonExit_Leave);
		this->buttonExit->MouseEnter -= gcnew System::EventHandler(this, &FormGameOver::ButtonExit_MouseEnter);
		this->buttonExit->MouseLeave -= gcnew System::EventHandler(this, &FormGameOver::ButtonExit_MouseLeave);
		this->buttonNewGame->Click -= gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Click);
		this->buttonNewGame->Enter -= gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Enter);
		this->buttonNewGame->Leave -= gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_Leave);
		this->buttonNewGame->MouseEnter -= gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_MouseEnter);
		this->buttonNewGame->MouseLeave -= gcnew System::EventHandler(this, &FormGameOver::ButtonNewGame_MouseLeave);

		this->timer->Tick -= gcnew System::EventHandler(this, &FormGameOver::Timer_Tick);

		this->Load -= gcnew System::EventHandler(this, &FormGameOver::FormGameOver_Load);
	}
}

System::Void SapperGame::FormGameOver::ButtonNewGame_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormGameOver::ButtonNewGame_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormGameOver::ButtonExit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormGameOver::ButtonExit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormGameOver::ButtonNewGame_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormGameOver::ButtonNewGame_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonNewGame->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonNewGame->Font;
}

System::Void SapperGame::FormGameOver::ButtonExit_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 11.25F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}

System::Void SapperGame::FormGameOver::ButtonExit_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->buttonExit->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold));
	delete this->buttonExit->Font;
}


//
// FormInvitation Form
//
System::Void SapperGame::FormInvitation::TextBoxNickname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter) {
		e->KeyChar = 0;
		buttonInviteEnter->PerformClick();
	}
	else if ((char)Keys::Control || (char)Keys::Shift) {}
	else if (!((Convert::ToInt32(e->KeyChar) >= 1040 && Convert::ToInt32(e->KeyChar) <= 1071) || (Convert::ToInt32(e->KeyChar) >= 1072 && Convert::ToInt32(e->KeyChar) <= 1103) ||
		Convert::ToInt32(e->KeyChar) == 1025 || (e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z') ||
		(e->KeyChar >= '1' && e->KeyChar <= '9') || e->KeyChar == '_' || e->KeyChar == '-' || e->KeyChar == '\b'))
	{
		e->KeyChar = 0;
	}
	else if (textBoxNickname->Text == "" && (e->KeyChar == '-' || e->KeyChar == '_')) {
		e->KeyChar = 0;
	}
}

System::Void SapperGame::FormInvitation::TextBoxNickname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxNickname->Text == "") {
		buttonInviteEnter->Enabled = false;
	}
	else {
		buttonInviteEnter->Enabled = true;
	}
}


//
// Field Form
//
System::Void SapperGame::Field::LoadingCircleAnimation() {
	
		if (countImagesLoading == 20) {
			countImagesLoading = 0;
		}
		pictureBoxLoading->Image = imageList_imagesLoadingCircle->Images[countImagesLoading];
		countImagesLoading++;
}

System::Void SapperGame::Field::GameWithAPartner(String^ gameArray) {
	if (gameArray[0] == '<' && gameArray[1] == 'd' && gameArray[2] == 'i' && gameArray[3] == 's' && gameArray[4] == 'c' &&
		gameArray[5] == 'o' && gameArray[6] == 'n' && gameArray[7] == 'n' && gameArray[8] == 'e' && gameArray[9] == 'c' &&
		gameArray[10] == 't' && gameArray[11] == 'i' && gameArray[12] == 'n' && gameArray[13] == 'g' && gameArray[14] == 'P' &&
		gameArray[15] == 'l' && gameArray[16] == 'a' && gameArray[17] == 'y' && gameArray[18] == 'e' && gameArray[19] == 'r' &&
		gameArray[20] == 'P' && gameArray[21] == 'a' && gameArray[22] == 'i' && gameArray[23] == 'r' && gameArray[24] == 'G' &&
		gameArray[25] == 'a' && gameArray[26] == 'm' && gameArray[27] == 'e' && gameArray[28] == '>')
	{
		DisconnectingAPlayerFromAPairGame(NicknameOfTheSecondPlayer);
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'r' && gameArray[2] == 'a' && gameArray[3] == 't' && gameArray[4] == 'i' && gameArray[5] == 'n' &&
			 gameArray[6] == 'g' && gameArray[7] == '>' && gameArray[8] == '<' && gameArray[9] == 'u' && gameArray[10] == 'p' && gameArray[11] == 'd' &&
			 gameArray[12] == 'a' &&gameArray[13] == 't' && gameArray[14] == 'e' && gameArray[15] == '>')
	{
			String^ newGameArray = "";
			for (int i = 16; i < gameArray->Length; i++) {
				if (gameArray[i] == '\r' && gameArray[i + 1] == '\n') {
					break;
				}
				newGameArray += gameArray[i];
			}
			UpdatePairlRating(newGameArray);
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'i' && gameArray[2] == 'n' && gameArray[3] == 'v' && gameArray[4] == 'i' &&
			 gameArray[5] == 't' && gameArray[6] == 'a' && gameArray[7] == 't' && gameArray[8] == 'i' && gameArray[9] == 'o' &&
			 gameArray[10] == 'n' && gameArray[11] == 'C' && gameArray[12] == 'a' && gameArray[13] == 'n' && gameArray[14] == 'c' &&
			 gameArray[15] == 'e' && gameArray[16] == 'l' && gameArray[17] == 'e' && gameArray[18] == 'd' && gameArray[19] == '>')
	{
			char messageSend[2048];
			String^ msg = "<rating><update>\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

			String^ tempNicknameOfTheSecondPlayer = "";
			panelLoading->Visible = false;
			groupBoxTiles->Enabled = true;
			buttonSaveAndChangeNickname->Enabled = true;
			buttonStartPairGame->Visible = false;
			buttonInvitation->Visible = true;
			buttonStartPairGame->Visible = false;
			pendingPlayerInvitation = false;
			gameWithTwoPlayersStarted = false;
			NicknameOfTheSecondPlayer = "";
			for (int i = 14; i < gameArray->Length; i++) {
				if (gameArray[i] == '<' && gameArray[i + 1] == 'N' && gameArray[i + 2] == 'i' && gameArray[i + 3] == 'c' && gameArray[i + 4] == 'k' &&
					gameArray[i + 5] == 'n' && gameArray[i + 6] == 'a' && gameArray[i + 7] == 'm' && gameArray[i + 8] == 'e' && gameArray[i + 9] == 'O' &&
					gameArray[i + 10] == 'f' && gameArray[i + 11] == 'T' && gameArray[i + 12] == 'h' && gameArray[i + 13] == 'e' && gameArray[i + 14] == 'S' &&
					gameArray[i + 15] == 'e' && gameArray[i + 16] == 'c' && gameArray[i + 17] == 'o' && gameArray[i + 18] == 'n' && gameArray[i + 19] == 'd' &&
					gameArray[i + 20] == 'P' && gameArray[i + 21] == 'l' && gameArray[i + 22] == 'a' && gameArray[i + 23] == 'y' && gameArray[i + 24] == 'e' &&
					gameArray[i + 25] == 'r' && gameArray[i + 26] == '>')
				{
					for (int j = i + 27; j < gameArray->Length; j++) {
						if (gameArray[j] == '\r' && gameArray[j + 1] == '\n') {
							break;
						}
						tempNicknameOfTheSecondPlayer += gameArray[j];
					}
				}
			}
			richTextBoxGetMessage->Clear();
			richTextBoxGetMessage->SelectionColor = Color::Green;
			richTextBoxGetMessage->AppendText("Welcome to the RCh server!" + Environment::NewLine);
			buttonInvitation->Text = "To invite";
			MessageForm MF;
			MF.Show("Player \"" + tempNicknameOfTheSecondPlayer + "\" canceled invitation", "Message");
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'i' && gameArray[2] == 'n' && gameArray[3] == 'v' && gameArray[4] == 'i' && gameArray[5] == 't' && gameArray[6] == 'e' && gameArray[7] == '>')
	{
		if (gameArray[8] == '<' && gameArray[9] == 't' && gameArray[10] == 'r' && gameArray[11] == 'u' && gameArray[12] == 'e' && gameArray[13] == '>')
		{
			if (gameArray[14] == '<' && gameArray[15] == 'i' && gameArray[16] == 'n' && gameArray[17] == 'v' && gameArray[18] == 'i' && gameArray[19] == 't' &&
				gameArray[20] == 'a' && gameArray[21] == 't' && gameArray[22] == 'i' && gameArray[23] == 'o' && gameArray[24] == 'n' && gameArray[25] == 'S' &&
				gameArray[26] == 'e' && gameArray[27] == 'n' && gameArray[28] == 't' && gameArray[29] == '>')
			{
				MessageForm MF;
				MF.Show("Invitation sent", "Message");
			}
			else {
				String^ tempNicknameOfTheSecondPlayer = "";
				String^ responseToInvitation = "";
				for (int i = 14; i < gameArray->Length; i++) {
					if (gameArray[i] == '<' && gameArray[i + 1] == 'N' && gameArray[i + 2] == 'i' && gameArray[i + 3] == 'c' && gameArray[i + 4] == 'k' &&
						gameArray[i + 5] == 'n' && gameArray[i + 6] == 'a' && gameArray[i + 7] == 'm' && gameArray[i + 8] == 'e' && gameArray[i + 9] == 'O' &&
						gameArray[i + 10] == 'f' && gameArray[i + 11] == 'T' && gameArray[i + 12] == 'h' && gameArray[i + 13] == 'e' && gameArray[i + 14] == 'S' &&
						gameArray[i + 15] == 'e' && gameArray[i + 16] == 'c' && gameArray[i + 17] == 'o' && gameArray[i + 18] == 'n' && gameArray[i + 19] == 'd' &&
						gameArray[i + 20] == 'P' && gameArray[i + 21] == 'l' && gameArray[i + 22] == 'a' && gameArray[i + 23] == 'y' && gameArray[i + 24] == 'e' &&
						gameArray[i + 25] == 'r' && gameArray[i + 26] == '>')
					{
						for (int j = i + 27; j < gameArray->Length; j++) {
							if (gameArray[j] == '<' && gameArray[j + 1] == 't' && gameArray[j + 2] == 'r' && gameArray[j + 3] == 'u' && gameArray[j + 4] == 'e' && gameArray[j + 5] == '>')
							{
								responseToInvitation = "true";
								break;
							}
							else if (gameArray[j] == '<' && gameArray[j + 1] == 'f' && gameArray[j + 2] == 'a' && gameArray[j + 3] == 'l' && gameArray[j + 4] == 's' && gameArray[j + 5] == 'e' && gameArray[j + 6] == '>')
							{
								responseToInvitation = "false";
								break;
							}
							else if (gameArray[j] == '<' && gameArray[j + 1] == 'i' && gameArray[j + 2] == 's' && gameArray[j + 3] == 'P' && gameArray[j + 4] == 'l' && gameArray[j + 5] == 'a' &&
								gameArray[j + 6] == 'y' && gameArray[j + 7] == 'i' && gameArray[j + 8] == 'n' && gameArray[j + 9] == 'g' && gameArray[j + 10] == '>')
							{
								responseToInvitation = "isPlaying";
								break;
							}
							if (gameArray[j] == '\r' && gameArray[j + 1] == '\n') {
								break;
							}
							tempNicknameOfTheSecondPlayer += gameArray[j];
						}
					}
				}
				if (responseToInvitation == "") {
					if (NicknameOfTheSecondPlayer == "" && !FirstTapOnTheField) {
						MessageForm MF;
						if (MF.ShowDialog("Player \"" + tempNicknameOfTheSecondPlayer + "\" invites you to a pair game.", "Invitation to the pair game", "To accept", "Reject") == "To accept") {
							NicknameOfTheSecondPlayer = tempNicknameOfTheSecondPlayer;
							pendingPlayerInvitation = true;
							gameWithTwoPlayersStarted = false;

							
							char messageSend[2048];
							String^ msg = "<game><invite><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "<true>\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
							groupBoxTiles->Enabled = false;
							buttonSaveAndChangeNickname->Enabled = false;

							ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerLoadingCircle);
							Thread^ newThread = gcnew Thread(threadDelegate);
							newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
							newThread->Start();
							panelLoading->Visible = true;
							
							msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
							buttonInvitation->Text = "To leave";
							richTextBoxGetMessage->Clear();
							richTextBoxGetMessage->SelectionColor = Color::Green;
							richTextBoxGetMessage->AppendText("Welcome to the RCh pair game chat!" + Environment::NewLine);
						}
						else {
							char messageSend[2048];
							String^ msg = "<game><invite><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "<false>\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
						}
					}
					else {
						char messageSend[2048];
						String^ msg = "<game><invite><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "<isPlaying>\r\n\t";
						RussianEncoding(messageSend, msg);
						send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
					}
				}
				else if (responseToInvitation == "isPlaying") {
					NicknameOfTheSecondPlayer = "";
					panelLoading->Visible = false;

					char messageSend[2048];
					String^ msg = "<rating><update>\r\n\t";
					RussianEncoding(messageSend, msg);

					MessageForm MF;
					MF.Show("Player \"" + tempNicknameOfTheSecondPlayer + "\" is currently in the game and can accept your invitation", "Message");
				}
				else {
					MessageForm MF;
					if (responseToInvitation == "true") {
						if (NicknameOfTheSecondPlayer == "") {
							buttonInvitation->Text = "To leave";
							NicknameOfTheSecondPlayer = tempNicknameOfTheSecondPlayer;
							Host = true;
							pendingPlayerInvitation = true;
							gameWithTwoPlayersStarted = false;


							SendDataAboutThePlayingFieldToTheSecondPlayer(); // Отправляем данные об игровом поле второму игроку
							buttonStartPairGame->Visible = true;
							char messageSend[2048];
							String^ msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
							richTextBoxGetMessage->Clear();
							richTextBoxGetMessage->SelectionColor = Color::Green;
							richTextBoxGetMessage->AppendText("Welcome to the RCh pair game chat!" + Environment::NewLine);
							MF.Show("Player \"" + tempNicknameOfTheSecondPlayer + "\" accepts the pair game invitation.", "Response to invitation");
							
							labelLoadingText->Text = "Waiting for the game to start";
							panelLoading->Location = Point(43, panelLoading->Location.Y);
							panelLoading->Width = 259;
							panelLoading->Height = 62;
							groupBoxTiles->Enabled = false;
							ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerLoadingCircle);
							Thread^ newThread = gcnew Thread(threadDelegate);
							newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
							newThread->Start();
							panelLoading->Visible = true;
						}
						else {
							char messageSend[2048];
							String^ msg = "<game><invitationCanceled><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
						}
					}
					else if (responseToInvitation = "false") {
						if (NicknameOfTheSecondPlayer == "") {
							MF.Show("Player \"" + tempNicknameOfTheSecondPlayer + "\" declines doubles invitation.", "Response to invitation");
						}
						else {
							char messageSend[2048];
							String^ msg = "<game><invitationCanceled><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "\r\n\t";
							RussianEncoding(messageSend, msg);
							send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
						}
					}
				}
			}
		}
		else if (gameArray[8] == '<' && gameArray[9] == 'f' && gameArray[10] == 'a' && gameArray[11] == 'l' && gameArray[12] == 's' && gameArray[13] == 'e' && gameArray[14] == '>')
		{
			if (NicknameOfTheSecondPlayer == "" && !FirstTapOnTheField) {
				String^ tempNicknameOfTheSecondPlayer = "";
				for (int i = 15; i < gameArray->Length; i++) {
					if (gameArray[i] == '<' && gameArray[i + 1] == 'N' && gameArray[i + 2] == 'i' && gameArray[i + 3] == 'c' && gameArray[i + 4] == 'k' &&
						gameArray[i + 5] == 'n' && gameArray[i + 6] == 'a' && gameArray[i + 7] == 'm' && gameArray[i + 8] == 'e' && gameArray[i + 9] == 'O' &&
						gameArray[i + 10] == 'f' && gameArray[i + 11] == 'T' && gameArray[i + 12] == 'h' && gameArray[i + 13] == 'e' && gameArray[i + 14] == 'S' &&
						gameArray[i + 15] == 'e' && gameArray[i + 16] == 'c' && gameArray[i + 17] == 'o' && gameArray[i + 18] == 'n' && gameArray[i + 19] == 'd' &&
						gameArray[i + 20] == 'P' && gameArray[i + 21] == 'l' && gameArray[i + 22] == 'a' && gameArray[i + 23] == 'y' && gameArray[i + 24] == 'e' &&
						gameArray[i + 25] == 'r' && gameArray[i + 26] == '>')
					{
						for (int j = i + 27; j < gameArray->Length; j++) {
							if (gameArray[j] == '\r' && gameArray[j + 1] == '\n') {
								break;
							}
							tempNicknameOfTheSecondPlayer += gameArray[j];
						}
					}
				}
				MessageForm MF;
				MF.Show("Player \"" + tempNicknameOfTheSecondPlayer + "\" is not in the game", "Message");
			}
		}
	}
	else if (gameArray[0] == '<' && gameArray[1] == 's' && gameArray[2] == 't' && gameArray[3] == 'a' && gameArray[4] == 'r' && gameArray[5] == 't' && gameArray[6] == '>')
	{
		for (int i = 7; i < gameArray->Length; i++) {
			if (gameArray[i] == '<' && gameArray[i + 1] == 'a' && gameArray[i + 2] == 'r' && gameArray[i + 3] == 'r' && gameArray[i + 4] == 'C' &&
				gameArray[i + 5] == 'e' && gameArray[i + 6] == 'l' && gameArray[i + 7] == 'l' && gameArray[i + 8] == 's' && gameArray[i + 9] == '>')
			{
				int count = 0;
				for (int j = i + 10; j < gameArray->Length; j++) {
					if (gameArray[j] == '<' && gameArray[j + 1] == 'N' && gameArray[j + 2] == 'u' && gameArray[j + 3] == 'm' && gameArray[j + 4] == 'b' &&
						gameArray[j + 5] == 'e' && gameArray[j + 6] == 'r' && gameArray[j + 7] == 'O' && gameArray[j + 8] == 'f' && gameArray[j + 9] == 'M' &&
						gameArray[j + 10] == 'i' && gameArray[j + 11] == 'n' && gameArray[j + 12] == 'e' && gameArray[j + 13] == 's' && gameArray[j + 14] == '>')
					{
						count = j;
						break;
					}
					if (gameArray[j] == 'm') {
						arrCells[abs(count / 10)][count % 10] = "mine";
					}
					else {
						arrCells[abs(count / 10)][count % 10] = Convert::ToString(gameArray[j]);
					}
					count++;
				}
			}
			if (gameArray[i] == '<' && gameArray[i + 1] == 'N' && gameArray[i + 2] == 'u' && gameArray[i + 3] == 'm' && gameArray[i + 4] == 'b' &&
				gameArray[i + 5] == 'e' && gameArray[i + 6] == 'r' && gameArray[i + 7] == 'O' && gameArray[i + 8] == 'f' && gameArray[i + 9] == 'M' &&
				gameArray[i + 10] == 'i' && gameArray[i + 11] == 'n' && gameArray[i + 12] == 'e' && gameArray[i + 13] == 's' && gameArray[i + 14] == '>')
			{
				String^ NumberOfMines_STR = "";
				for (int j = i + 15; j < gameArray->Length; j++) {
					if (gameArray[j] == '\r' && gameArray[j + 1] == '\n') {
						break;
					}
					NumberOfMines_STR += gameArray[j];
				}
				NumberOfMines = Convert::ToInt32(NumberOfMines_STR);
				TheNumberOfBombsRemainingOnTheField = NumberOfMines;
				DisplayTheRemainingNumberOfBombs();

				break;
			}
		}
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'N' && gameArray[2] == 'e' && gameArray[3] == 'w' && gameArray[4] == 'G' &&
			 gameArray[5] == 'a' && gameArray[6] == 'm' && gameArray[7] == 'e' && gameArray[8] == '>')
	{
			labelLoadingText->Text = "Waiting for the game to start";
			panelLoading->Location = Point(43, panelLoading->Location.Y);
			panelLoading->Width = 259;
			panelLoading->Height = 62;
			groupBoxTiles->Enabled = false;
			ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerLoadingCircle);
			Thread^ newThread = gcnew Thread(threadDelegate);
			newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
			newThread->Start();
			panelLoading->Visible = true;

			buttonSaveAndChangeNickname->Enabled = true;
			pendingPlayerInvitation = true;
			gameWithTwoPlayersStarted = false;
			SendDataAboutThePlayingFieldToTheSecondPlayer(); // Отправляем данные об игровом поле второму игроку
			buttonStartPairGame->Visible = true;

			char messageSend[2048];
			String^ msg = "<game><rating><update><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'p' && gameArray[2] == 'l' && gameArray[3] == 'a' && gameArray[4] == 'y' && gameArray[5] == '>')
	{
		panelLoading->Visible = false;
		groupBoxTiles->Enabled = true;
		buttonSaveAndChangeNickname->Enabled = true;
		pendingPlayerInvitation = false;
		gameWithTwoPlayersStarted = true;
		buttonStartPairGame->Visible = false;
		FirstTapOnTheField = true;
	}
	else if (gameArray[0] == '<' && gameArray[1] == 'c' && gameArray[2] == 'h' && gameArray[3] == 'e' && gameArray[4] == 'c' && gameArray[5] == 'k' && gameArray[6] == 'i' && gameArray[7] == 'n' &&
			 gameArray[8] == 'g' && gameArray[9] == 'T' && gameArray[10] == 'h' && gameArray[11] == 'e' && gameArray[12] == 'C' && gameArray[13] == 'o' && gameArray[14] == 'm' &&
			 gameArray[15] == 'p' && gameArray[16] == 'l' && gameArray[17] == 'e' && gameArray[18] == 't' && gameArray[19] == 'e' && gameArray[20] == 'd' && gameArray[21] == 'G' &&
			 gameArray[22] == 'a' && gameArray[23] == 'm' && gameArray[24] == 'e' && gameArray[25] == '>')
	{
			
			char messageSend[2048];
			String^ completedGame = "";
			int time = 0;
			for (int i = 26; i < gameArray->Length; i++) {
				if (gameArray[i] == '<' && gameArray[i + 1] == 't' && gameArray[i + 2] == 'r' && gameArray[i + 3] == 'u' && gameArray[i + 4] == 'e' && gameArray[i + 5] == '>')
				{
					completedGame = "true";
				}
				if (gameArray[i] == '<' && gameArray[i + 1] == 'f' && gameArray[i + 2] == 'a' && gameArray[i + 3] == 'l' && gameArray[i + 4] == 's' && gameArray[i + 5] == 'e' && gameArray[i + 6] == '>')
				{
					completedGame = "false";
					break;
				}
				if (gameArray[i] == '<' && gameArray[i + 1] == 't' && gameArray[i + 2] == 'i' && gameArray[i + 3] == 'm' && gameArray[i + 4] == 'e' && gameArray[i + 5] == '>')
				{
					String^ S_time = "";
					for (int j = i + 6; j < gameArray->Length; j++) {
						if (gameArray[j] == '\r' && gameArray[j + 1] == '\n') {
							break;
						}
						S_time += gameArray[j];
					}
					time = Convert::ToInt32(S_time);
				}
			}

			if (completedGame == "false") {
				MessageForm MF;
				MF.Show("Player \"" + NicknameOfTheSecondPlayer + "\" is still playing, wait until the end of his game", "Message");
			}
			else if (completedGame == "true") {
				MessageForm MF;
				if (gameOver) {
					if (time <= 0) {
						MF.Show("No winners", "Message");
					}
					else {
						MF.Show("Player \"" + NicknameOfTheSecondPlayer + "\" wins", "Message");
					}
				}
				else if (victory) {
					if (time <= 0 || time > ((60 * Minutes) + Seconds)) {
						
						MF.Show("You are a winner!", "Message");
					}
					else if (time < ((60 * Minutes) + Seconds)) {
						MF.Show("Player \"" + NicknameOfTheSecondPlayer + "\" wins", "Message");
					}
					else if (time == ((60 * Minutes) + Seconds)) {
						MF.Show("Game ended in a draw", "Message");
						
					}
				}
				NewGame();
				if (Host) {
					labelLoadingText->Text = "Waiting for the second player to be ready";
					panelLoading->Location = Point(3, panelLoading->Location.Y);
					groupBoxTiles->Enabled = false;
					ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerLoadingCircle);
					Thread^ newThread = gcnew Thread(threadDelegate);
					newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
					newThread->Start();
					panelLoading->Visible = true;
				}
				else {
					pendingPlayerInvitation = true;
					gameWithTwoPlayersStarted = false;
					groupBoxTiles->Enabled = false;
					buttonSaveAndChangeNickname->Enabled = false;

					ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerLoadingCircle);
					Thread^ newThread = gcnew Thread(threadDelegate);
					newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
					newThread->Start();
					panelLoading->Visible = true;

					char messageSend[2048];
					String^ msg = "<game><start><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "<NewGame>\r\n\t";
					RussianEncoding(messageSend, msg);
					send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
				}
			}
			else {
				String^ msg = "";
				if (victory || gameOver) {
					msg = "<game><checkingTheCompletedGame><true><NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
				}
				else {
					msg = "<game><checkingTheCompletedGame><false><NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
				}
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
			}
	}
}

System::Void SapperGame::Field::AddUserNickname(String^ msg) {
	if (msg[0] == '<' && msg[1] == 's' && msg[2] == 'a' && msg[3] == 'v' && msg[4] == 'e' && msg[5] == '>')
	{
		if (msg[6] == '<' && msg[7] == 't' && msg[8] == 'r' && msg[9] == 'u' && msg[10] == 'e' && msg[11] == '>')
		{

			String^ Nickname = "";
			for (int i = 12; i < msg->Length; i++) {
				if (msg[i] == '\r' && msg[i + 1] == '\n') {
					break;
				}
				Nickname += msg[i];
			}
			textBoxNickname->Visible = false;
			textBoxNickname->Text = "";

			labelNicknameChat->ForeColor = ForeColor.Blue;
			labelNicknameChat->Text = Nickname;
			labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);
			buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[1];
			buttonSaveAndChangeNickname->Location = Point((labelNicknameChat->Location.X + labelNicknameChat->Size.Width + 5), buttonSaveAndChangeNickname->Location.Y);
			if (!NicknameChange) {
				richTextBoxRating->Height -= 15;
				richTextBoxRating->Location = Point(richTextBoxRating->Location.X, richTextBoxRating->Location.Y + 15);
			}
			if (!labelNicknameRating->Visible) {
				labelNicknameRating->Visible = true;
				labelNicknameRating->Text = Nickname;
				labelNicknameRating->Location = Point((richTextBoxRating->Location.X + abs((richTextBoxRating->Width - labelNicknameRating->Width) / 2)), labelNicknameRating->Location.Y);
			}
			else {
				labelNicknameRating->Text = Nickname;
				labelNicknameRating->Location = Point((richTextBoxRating->Location.X + abs((richTextBoxRating->Width - labelNicknameRating->Width) / 2)), labelNicknameRating->Location.Y);
			}

			NicknameAdd = false;

			char messageSend[2048];
			String^ msg = "<rating><update>\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

			ZeroMemory(messageSend, 2048);
			if (!NicknameChange) {
				button1->Enabled = true; button2->Enabled = true; button3->Enabled = true; button4->Enabled = true; button5->Enabled = true;
				button6->Enabled = true; button7->Enabled = true; button8->Enabled = true; button9->Enabled = true; button10->Enabled = true;
				button11->Enabled = true; button12->Enabled = true; button13->Enabled = true; button14->Enabled = true; button15->Enabled = true;
				button16->Enabled = true; button17->Enabled = true; button18->Enabled = true; button19->Enabled = true; button20->Enabled = true;
				button21->Enabled = true; button22->Enabled = true; button23->Enabled = true; button24->Enabled = true; button25->Enabled = true;
				button26->Enabled = true; button27->Enabled = true; button28->Enabled = true; button29->Enabled = true; button30->Enabled = true;
				button31->Enabled = true; button32->Enabled = true; button33->Enabled = true; button34->Enabled = true; button35->Enabled = true;
				button36->Enabled = true; button37->Enabled = true; button38->Enabled = true; button39->Enabled = true; button40->Enabled = true;
				button41->Enabled = true; button42->Enabled = true; button43->Enabled = true; button44->Enabled = true; button45->Enabled = true;
				button46->Enabled = true; button47->Enabled = true; button48->Enabled = true; button49->Enabled = true; button50->Enabled = true;
				button51->Enabled = true; button52->Enabled = true; button53->Enabled = true; button54->Enabled = true; button55->Enabled = true;
				button56->Enabled = true; button57->Enabled = true; button58->Enabled = true; button59->Enabled = true; button60->Enabled = true;
				button61->Enabled = true; button62->Enabled = true; button63->Enabled = true; button64->Enabled = true; button65->Enabled = true;
				button66->Enabled = true; button67->Enabled = true; button68->Enabled = true; button69->Enabled = true; button70->Enabled = true;
				button71->Enabled = true; button72->Enabled = true; button73->Enabled = true; button74->Enabled = true; button75->Enabled = true;
				button76->Enabled = true; button77->Enabled = true; button78->Enabled = true; button79->Enabled = true; button80->Enabled = true;
				button81->Enabled = true; button82->Enabled = true; button83->Enabled = true; button84->Enabled = true; button85->Enabled = true;
				button86->Enabled = true; button87->Enabled = true; button88->Enabled = true; button89->Enabled = true; button90->Enabled = true;
				button91->Enabled = true; button92->Enabled = true; button93->Enabled = true; button94->Enabled = true; button95->Enabled = true;
				button96->Enabled = true; button97->Enabled = true; button98->Enabled = true; button99->Enabled = true; button100->Enabled = true;
				richTextBoxGetMessage->SelectionColor = Color::Green;
				richTextBoxGetMessage->AppendText("Welcome to the RCh server!" + Environment::NewLine);

				Field::Width = 756;

				NicknameChange = true;

				msg = "<message><nickname><connect>" + labelNicknameChat->Text + "\r\n\t";
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);

				buttonInvitation->Visible = true;
				buttonInvitation->Text = "To invite";
				buttonStartPairGame->Visible = false;
				pendingPlayerInvitation = false;
				gameWithTwoPlayersStarted = false;
				NicknameOfTheSecondPlayer = "";

			}
			else {
				msg = "<message><nickname><change><old>" + OldNickname + "<new>" + labelNicknameChat->Text + "\r\n\t";
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
			}
		}
		else if (msg[6] == '<' && msg[7] == 'f' && msg[8] == 'a' && msg[9] == 'l' && msg[10] == 's' && msg[11] == 'e' && msg[12] == '>')
		{
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "At the moment, such a nickname already exists";
			MessageForm MF;
			MF.Show("At the moment, such a nickname already exists!", "Message");
		}
	}
	else if (msg[0] == '<' && msg[1] == 'c' && msg[2] == 'h' && msg[3] == 'e' && msg[4] == 'c' && msg[5] == 'k' && msg[6] == '>')
	{
		if (msg[7] == '<' && msg[8] == 't' && msg[9] == 'r' && msg[10] == 'u' && msg[11] == 'e' && msg[12] == '>') {
			buttonSaveAndChangeNickname->Visible = true;
			buttonSaveAndChangeNickname->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 30, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Green;
			labelNicknameChat->Text = "Nickname unoccupied";
		}
		else if (msg[7] == '<' && msg[8] == 'f' && msg[9] == 'a' && msg[10] == 'l' && msg[11] == 's' && msg[12] == 'e' && msg[13] == '>') {
			buttonSaveAndChangeNickname->Visible = false;
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "At the moment, such a nickname already exists";
		}
	}
	else if (textBoxNickname->Visible) {
		buttonSaveAndChangeNickname->Visible = false;
		textBoxNickname->Visible = false;
		richTextBoxGetMessage->Clear();
		richTextBoxGetMessage->SelectionColor = Color::Red;
		richTextBoxGetMessage->AppendText("Disconnected.");
		labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);
		labelNicknameChat->ForeColor = ForeColor.Red;
		labelNicknameChat->Text = msg;
	}
}

System::Void SapperGame::Field::DisplayingTheReceivedMessageFromTheServer(String^ msg) {
	if (NicknameChange) {
		if (msg == "Welcome to the RCh server!") {
			richTextBoxGetMessage->SelectionColor = Color::Green;
			richTextBoxGetMessage->AppendText(msg);
		}
		else if (msg == "Disconnected.\nServer is not available.") {
			if (difficultyLevelSelection) {
				FormClose = true;
				Field::Close();
				return;
			}
			else {
				richTextBoxGetMessage->AppendText(Environment::NewLine);
				richTextBoxGetMessage->SelectionColor = Color::Red;
				richTextBoxGetMessage->AppendText(msg);
				button1->Enabled = false; button2->Enabled = false; button3->Enabled = false; button4->Enabled = false; button5->Enabled = false;
				button6->Enabled = false; button7->Enabled = false; button8->Enabled = false; button9->Enabled = false; button10->Enabled = false;
				button11->Enabled = false; button12->Enabled = false; button13->Enabled = false; button14->Enabled = false; button15->Enabled = false;
				button16->Enabled = false; button17->Enabled = false; button18->Enabled = false; button19->Enabled = false; button20->Enabled = false;
				button21->Enabled = false; button22->Enabled = false; button23->Enabled = false; button24->Enabled = false; button25->Enabled = false;
				button26->Enabled = false; button27->Enabled = false; button28->Enabled = false; button29->Enabled = false; button30->Enabled = false;
				button31->Enabled = false; button32->Enabled = false; button33->Enabled = false; button34->Enabled = false; button35->Enabled = false;
				button36->Enabled = false; button37->Enabled = false; button38->Enabled = false; button39->Enabled = false; button40->Enabled = false;
				button41->Enabled = false; button42->Enabled = false; button43->Enabled = false; button44->Enabled = false; button45->Enabled = false;
				button46->Enabled = false; button47->Enabled = false; button48->Enabled = false; button49->Enabled = false; button50->Enabled = false;
				button51->Enabled = false; button52->Enabled = false; button53->Enabled = false; button54->Enabled = false; button55->Enabled = false;
				button56->Enabled = false; button57->Enabled = false; button58->Enabled = false; button59->Enabled = false; button60->Enabled = false;
				button61->Enabled = false; button62->Enabled = false; button63->Enabled = false; button64->Enabled = false; button65->Enabled = false;
				button66->Enabled = false; button67->Enabled = false; button68->Enabled = false; button69->Enabled = false; button70->Enabled = false;
				button71->Enabled = false; button72->Enabled = false; button73->Enabled = false; button74->Enabled = false; button75->Enabled = false;
				button76->Enabled = false; button77->Enabled = false; button78->Enabled = false; button79->Enabled = false; button80->Enabled = false;
				button81->Enabled = false; button82->Enabled = false; button83->Enabled = false; button84->Enabled = false; button85->Enabled = false;
				button86->Enabled = false; button87->Enabled = false; button88->Enabled = false; button89->Enabled = false; button90->Enabled = false;
				button91->Enabled = false; button92->Enabled = false; button93->Enabled = false; button94->Enabled = false; button95->Enabled = false;
				button96->Enabled = false; button97->Enabled = false; button98->Enabled = false; button99->Enabled = false; button100->Enabled = false;
				NewGame();
				foundConnect = false;
				textBoxNickname->Visible = false;
				labelNicknameChat->Visible = false;
				labelNicknameRating->Visible = false;
				labelNicknameRating->Text = "";
				buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[0];
				buttonSaveAndChangeNickname->Visible = false;
				buttonSaveAndChangeNickname->Enabled = true;
				buttonInvitation->Visible = false;
				buttonInvitation->Text = "To invite";
				buttonStartPairGame->Visible = false;
				panelLoading->Visible = false;
				groupBoxTiles->Enabled = true;
				pendingPlayerInvitation = false;
				gameWithTwoPlayersStarted = false;
				NicknameOfTheSecondPlayer = "";
				if (NicknameChange) {
					richTextBoxRating->Height += 15;
					richTextBoxRating->Location = Point(richTextBoxRating->Location.X, richTextBoxRating->Location.Y - 15);
					richTextBoxRating->Clear();
				}
				richTextBoxRating->Clear();
				richTextBoxGetMessage->Location = Point(richTextBoxGetMessage->Location.X, richTextBoxGetMessage->Location.Y + 25);
				richTextBoxGetMessage->Height -= 25;
				Field::Height = 424;
				buttonConnect->BackgroundImage = imageList_imagesConnectedAndDisconnected->Images[0];
			}
		}
		else {
			if (msg[0] == '<' && msg[1] == 'p' && msg[2] == 'a' && msg[3] == 'i' && msg[4] == 'r' && msg[5] == 'G' && msg[6] == 'a' && msg[7] == 'm' && msg[8] == 'e' && msg[9] == '>')
			{
				String^ tempNicknameOfTheSecondPlayer = "";
				int index = 0;
				for (int i = 11; i < msg->Length; i++) {
					if (msg[i] == '>') {
						index = i + 1;
						break;
					}
					tempNicknameOfTheSecondPlayer += msg[i];
				}
				if (tempNicknameOfTheSecondPlayer != NicknameOfTheSecondPlayer) {
					return;
				}
				String^ tempMsg = "";
				for (int i = index; i < msg->Length; i++) {
					tempMsg += msg[i];
				}
				msg = tempMsg;
			}
			else if (NicknameOfTheSecondPlayer != "") {
				String^ tempNicknameOfTheSecondPlayer = "";
				for (int i = 0; i < msg->Length; i++) {
					if (msg[i] == '<') {
						for (int j = i + 1; j < msg->Length; j++) {
							if (msg[j] == '>') {
								break;
							}
							tempNicknameOfTheSecondPlayer += msg[j];
						}
					}
				}
				if (tempNicknameOfTheSecondPlayer != NicknameOfTheSecondPlayer) {
					return;
				}
			}
			richTextBoxGetMessage->AppendText(Environment::NewLine);

			String^ tempNicknameOfTheSecondPlayer = "";
			int index = 0;
			for (int i = 0; i < msg->Length; i++) {
				if (msg[i] == '<') {
					for (int j = i + 1; j < msg->Length; j++) {
						if (msg[j] == '>') {
							index = j + 2;
							break;
						}
						tempNicknameOfTheSecondPlayer += msg[j];
					}
					break;
				}
			}
			String^ tempMsg = "";
			for (int j = index; j < msg->Length; j++) {
				tempMsg += msg[j];
			}
			msg = tempMsg;
			for (int i = 0; i < msg->Length; i++) {
				if (msg[i] == 'j' && msg[i + 1] == 'o' && msg[i + 2] == 'i' && msg[i + 3] == 'n' && msg[i + 4] == 's')
				{
					
					richTextBoxGetMessage->SelectionColor = Color::Blue;
					richTextBoxGetMessage->AppendText(tempNicknameOfTheSecondPlayer + " ");
					richTextBoxGetMessage->SelectionColor = Color::FromArgb(115, 158, 8);
					richTextBoxGetMessage->AppendText(msg);
					break;
				}
				else if (msg[i] == 'c' && msg[i + 1] == 'h' && msg[i + 2] == 'a' && msg[i + 3] == 'n' && msg[i + 4] == 'g' && msg[i + 5] == 'e' && msg[i + 6] == 's')
				{
					tempMsg = "";
					String^ tempNewNicknameOfTheSecondPlayer = "";
					for (int j = 0; j < msg->Length; j++) {
						if (msg[j] == '<') {
							for (int k = j + 1; k < msg->Length; k++) {
								if (msg[k] == '>') {
									break;
								}
								tempNewNicknameOfTheSecondPlayer += msg[k];
							}
							break;
						}
						tempMsg += msg[j];
					}
					msg = tempMsg;
					
					richTextBoxGetMessage->SelectionColor = Color::Blue;
					richTextBoxGetMessage->AppendText(tempNicknameOfTheSecondPlayer + " ");
					richTextBoxGetMessage->SelectionColor = Color::FromArgb(173, 63, 3);
					richTextBoxGetMessage->AppendText(msg);
					richTextBoxGetMessage->SelectionColor = Color::Blue;
					richTextBoxGetMessage->AppendText(tempNewNicknameOfTheSecondPlayer + " ");
					break;
				}
				else if (msg[i] == 'd' && msg[i + 1] == 'i' && msg[i + 2] == 's' && msg[i + 3] == 'c' && msg[i + 4] == 'o' &&
						 msg[i + 5] == 'n' && msg[i + 6] == 'n' && msg[i + 7] == 'e' && msg[i + 8] == 'c' && msg[i + 9] == 't')
				{
						if (NicknameOfTheSecondPlayer == tempNicknameOfTheSecondPlayer) {
							DisconnectingAPlayerFromAPairGame(NicknameOfTheSecondPlayer); //Отключаем игрока от парной игры
							richTextBoxGetMessage->AppendText(Environment::NewLine);
						}
						
						richTextBoxGetMessage->SelectionColor = Color::Blue;
						richTextBoxGetMessage->AppendText(tempNicknameOfTheSecondPlayer + " ");
						richTextBoxGetMessage->SelectionColor = Color::FromArgb(166, 0, 0);
						richTextBoxGetMessage->AppendText(msg);
						break;
				}
				else {
					for (int j = 0; j < msg->Length; j++) {
						if ((msg[i] == 'l' && msg[i + 1] == 'o' && msg[i + 2] == 's' && msg[i + 3] == 'e' && msg[i + 4] == 's') ||
							(msg[i] == 'w' && msg[i + 1] == 'i' && msg[i + 2] == 'n' && msg[i + 3] == 's'))
						{
							richTextBoxGetMessage->SelectionColor = Color::Blue;
							richTextBoxGetMessage->AppendText(tempNicknameOfTheSecondPlayer + " ");
							richTextBoxGetMessage->SelectionColor = Color::Indigo;
							String^ message = MessageTextRenderer(tempNicknameOfTheSecondPlayer + " ", msg);
							richTextBoxGetMessage->AppendText(message);
							return;
						}
					}
					richTextBoxGetMessage->SelectionColor = Color::Blue;
					richTextBoxGetMessage->AppendText(tempNicknameOfTheSecondPlayer + ": ");
					richTextBoxGetMessage->SelectionColor = Color::Indigo;
					String^ message = MessageTextRenderer(tempNicknameOfTheSecondPlayer + ": ", msg);
					richTextBoxGetMessage->AppendText(message);
					break;
				}
			}
			
		}
		richTextBoxGetMessage->SelectionColor = Color::Indigo;
		if (messageScrolling) {
			richTextBoxGetMessage->ScrollToCaret();
		}
	}
}

System::Void SapperGame::Field::UpdateOverallRating(String^ rating) {
	if (NicknameOfTheSecondPlayer == "" && NicknameChange) {
		richTextBoxRating->Clear();
		richTextBoxRating->SelectionColor = Color::White;
		richTextBoxRating->AppendText(rating);
	}
}

System::Void SapperGame::Field::UpdatePairlRating(String^ rating) {
	
	richTextBoxRating->Clear();
	richTextBoxRating->SelectionColor = Color::White;
	richTextBoxRating->AppendText(rating);
	
}


System::Void SapperGame::Field::TimerMsgServer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (StartTimerBetweenClicks) {
		if (Time_Between_Clicks > 20) {
			if (newCursorX - CursorX < 5 && newCursorY - CursorY < 5) {
				richTextBoxMessageEnter->Focus();
			}
			Time_Between_Clicks = 0;
			StartTimerBetweenClicks = false;
		}
		Time_Between_Clicks++;
	}
}

System::Void SapperGame::Field::Field_Load(System::Object^ sender, System::EventArgs^ e) {
	Field::Width = 359;
	Field::Height = 424;
	buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[0];
	if (MultiplayerGame) {
		button1->Enabled = false; button2->Enabled = false; button3->Enabled = false; button4->Enabled = false; button5->Enabled = false;
		button6->Enabled = false; button7->Enabled = false; button8->Enabled = false; button9->Enabled = false; button10->Enabled = false;
		button11->Enabled = false; button12->Enabled = false; button13->Enabled = false; button14->Enabled = false; button15->Enabled = false;
		button16->Enabled = false; button17->Enabled = false; button18->Enabled = false; button19->Enabled = false; button20->Enabled = false;
		button21->Enabled = false; button22->Enabled = false; button23->Enabled = false; button24->Enabled = false; button25->Enabled = false;
		button26->Enabled = false; button27->Enabled = false; button28->Enabled = false; button29->Enabled = false; button30->Enabled = false;
		button31->Enabled = false; button32->Enabled = false; button33->Enabled = false; button34->Enabled = false; button35->Enabled = false;
		button36->Enabled = false; button37->Enabled = false; button38->Enabled = false; button39->Enabled = false; button40->Enabled = false;
		button41->Enabled = false; button42->Enabled = false; button43->Enabled = false; button44->Enabled = false; button45->Enabled = false;
		button46->Enabled = false; button47->Enabled = false; button48->Enabled = false; button49->Enabled = false; button50->Enabled = false;
		button51->Enabled = false; button52->Enabled = false; button53->Enabled = false; button54->Enabled = false; button55->Enabled = false;
		button56->Enabled = false; button57->Enabled = false; button58->Enabled = false; button59->Enabled = false; button60->Enabled = false;
		button61->Enabled = false; button62->Enabled = false; button63->Enabled = false; button64->Enabled = false; button65->Enabled = false;
		button66->Enabled = false; button67->Enabled = false; button68->Enabled = false; button69->Enabled = false; button70->Enabled = false;
		button71->Enabled = false; button72->Enabled = false; button73->Enabled = false; button74->Enabled = false; button75->Enabled = false;
		button76->Enabled = false; button77->Enabled = false; button78->Enabled = false; button79->Enabled = false; button80->Enabled = false;
		button81->Enabled = false; button82->Enabled = false; button83->Enabled = false; button84->Enabled = false; button85->Enabled = false;
		button86->Enabled = false; button87->Enabled = false; button88->Enabled = false; button89->Enabled = false; button90->Enabled = false;
		button91->Enabled = false; button92->Enabled = false; button93->Enabled = false; button94->Enabled = false; button95->Enabled = false;
		button96->Enabled = false; button97->Enabled = false; button98->Enabled = false; button99->Enabled = false; button100->Enabled = false;
		buttonConnect->Visible = true;
	}
	else {
		buttonConnect->Visible = false;
	}

	//
	// tile loading
	//
	buttonDifficultyLevelSelection->BackgroundImage = imageList_smiles->Images[0];
	buttonDifficultyLevelSelection->FlatStyle = FlatStyle::Flat;
	buttonDifficultyLevelSelection->FlatAppearance->BorderSize = 0;
	buttonDifficultyLevelSelection->BackgroundImageLayout = ImageLayout::Zoom;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 && j == 0)
				button1->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 1)
				button2->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 2)
				button3->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 3)
				button4->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 4)
				button5->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 5)
				button6->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 6)
				button7->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 7)
				button8->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 8)
				button9->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 0 && j == 9)
				button10->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 1 && j == 0)
				button11->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 1)
				button12->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 2)
				button13->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 3)
				button14->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 4)
				button15->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 5)
				button16->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 6)
				button17->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 7)
				button18->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 8)
				button19->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 1 && j == 9)
				button20->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 2 && j == 0)
				button21->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 1)
				button22->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 2)
				button23->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 3)
				button24->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 4)
				button25->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 5)
				button26->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 6)
				button27->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 7)
				button28->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 8)
				button29->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 2 && j == 9)
				button30->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 3 && j == 0)
				button31->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 1)
				button32->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 2)
				button33->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 3)
				button34->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 4)
				button35->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 5)
				button36->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 6)
				button37->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 7)
				button38->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 8)
				button39->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 3 && j == 9)
				button40->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 4 && j == 0)
				button41->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 1)
				button42->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 2)
				button43->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 3)
				button44->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 4)
				button45->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 5)
				button46->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 6)
				button47->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 7)
				button48->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 8)
				button49->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 4 && j == 9)
				button50->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 5 && j == 0)
				button51->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 1)
				button52->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 2)
				button53->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 3)
				button54->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 4)
				button55->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 5)
				button56->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 6)
				button57->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 7)
				button58->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 8)
				button59->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 5 && j == 9)
				button60->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 6 && j == 0)
				button61->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 1)
				button62->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 2)
				button63->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 3)
				button64->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 4)
				button65->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 5)
				button66->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 6)
				button67->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 7)
				button68->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 8)
				button69->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 6 && j == 9)
				button70->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 7 && j == 0)
				button71->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 1)
				button72->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 2)
				button73->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 3)
				button74->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 4)
				button75->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 5)
				button76->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 6)
				button77->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 7)
				button78->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 8)
				button79->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 7 && j == 9)
				button80->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 8 && j == 0)
				button81->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 1)
				button82->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 2)
				button83->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 3)
				button84->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 4)
				button85->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 5)
				button86->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 6)
				button87->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 7)
				button88->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 8)
				button89->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 8 && j == 9)
				button90->BackgroundImage = imageList_imagesOnTiles->Images[0];

			if (i == 9 && j == 0)
				button91->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 1)
				button92->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 2)
				button93->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 3)
				button94->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 4)
				button95->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 5)
				button96->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 6)
				button97->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 7)
				button98->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 8)
				button99->BackgroundImage = imageList_imagesOnTiles->Images[0];
			if (i == 9 && j == 9)
				button100->BackgroundImage = imageList_imagesOnTiles->Images[0];
		}
	}
	buttonNewGame->PerformClick();
}

System::Void SapperGame::Field::ButtonConnect_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	//WSAStartup
	if (!foundConnect) {
		//Server connection for messages
		WSAData wsaData;
		WORD DLLVersion = MAKEWORD(2, 1);
		if (WSAStartup(DLLVersion, &wsaData) != 0) {
			if (Field::Height == 424) {
				richTextBoxGetMessage->Location = Point(richTextBoxGetMessage->Location.X, richTextBoxGetMessage->Location.Y - 25);
				richTextBoxGetMessage->Height += 25;
				Field::Height = 449;
			}

			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Error";
			labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);

			NicknameAdd = true;
			NicknameChange = false;
			labelNicknameChat->Visible = true;
			textBoxNickname->Visible = false;
			buttonSaveAndChangeNickname->Visible = false;
			buttonInvitation->Visible = false;
			buttonInvitation->Text = "To invite";
			buttonStartPairGame->Visible = false;
			panelLoading->Visible = false;
			groupBoxTiles->Enabled = true;
			pendingPlayerInvitation = false;
			gameWithTwoPlayersStarted = false;
			NicknameOfTheSecondPlayer = "";
		}
		else {

			SOCKADDR_IN addr;
			int sizeofaddr = sizeof(addr);
			addr.sin_addr.s_addr = inet_addr("5.136.85.156");
			addr.sin_port = htons(1234);
			addr.sin_family = AF_INET;

			ConnectionMsgServer = socket(AF_INET, SOCK_STREAM, NULL);
			if (connect(ConnectionMsgServer, (SOCKADDR*)& addr, sizeof(addr)) != 0) {
				if (Field::Height == 424) {
					richTextBoxGetMessage->Location = Point(richTextBoxGetMessage->Location.X, richTextBoxGetMessage->Location.Y - 25);
					richTextBoxGetMessage->Height += 25;
					Field::Height = 449;
				}

				labelNicknameChat->ForeColor = ForeColor.Red;
				labelNicknameChat->Text = "Error: failed connect to server";
				labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);

				NicknameAdd = true;
				NicknameChange = false;
				labelNicknameChat->Visible = true;
				textBoxNickname->Visible = false;
				buttonSaveAndChangeNickname->Visible = false;
				buttonInvitation->Visible = false;
				buttonInvitation->Text = "To invite";
				buttonStartPairGame->Visible = false;
				panelLoading->Visible = false;
				groupBoxTiles->Enabled = true;
				pendingPlayerInvitation = false;
				gameWithTwoPlayersStarted = false;
				NicknameOfTheSecondPlayer = "";
			}
			else {
				richTextBoxGetMessage->Clear();
				richTextBoxGetMessage->SelectionColor = Color::Green;
				richTextBoxGetMessage->AppendText("Connected! ");
				buttonConnect->BackgroundImage = imageList_imagesConnectedAndDisconnected->Images[1];
				ThreadStart^ threadDelegate = gcnew ThreadStart(this, &Field::ClientHandlerMsgServer);
				Thread^ newThread = gcnew Thread(threadDelegate);
				newThread->IsBackground = true; // свойство Thread->IsBackground = true: показывает, что поток является фоновым
				newThread->Start();

				OldNickname = "";
				if (Field::Height == 424) {
					richTextBoxGetMessage->Location = Point(richTextBoxGetMessage->Location.X, richTextBoxGetMessage->Location.Y - 25);
					richTextBoxGetMessage->Height += 25;
					Field::Height = 449;
				}

				textBoxNickname->Text = "";
				textBoxNickname->Size = System::Drawing::Size(48, 23);

				buttonSaveAndChangeNickname->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);

				labelNicknameChat->ForeColor = ForeColor.Red;
				labelNicknameChat->Text = "Enter your nickname";
				labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);

				NicknameAdd = true;
				NicknameChange = false;
				textBoxNickname->Visible = true;
				labelNicknameChat->Visible = true;
				foundConnect = true;
				textBoxNickname->Focus();
			}
		}
	}
	else {
		foundConnect = false;
		textBoxNickname->Visible = false;
		labelNicknameChat->Visible = false;
		labelNicknameRating->Visible = false;
		labelNicknameRating->Text = "";
		buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[0];
		buttonSaveAndChangeNickname->Visible = false;
		buttonInvitation->Visible = false;
		buttonInvitation->Text = "To invite";
		buttonStartPairGame->Visible = false;
		panelLoading->Visible = false;
		groupBoxTiles->Enabled = true;
		pendingPlayerInvitation = false;
		gameWithTwoPlayersStarted = false;
		NicknameOfTheSecondPlayer = "";
		button1->Enabled = false; button2->Enabled = false; button3->Enabled = false; button4->Enabled = false; button5->Enabled = false;
		button6->Enabled = false; button7->Enabled = false; button8->Enabled = false; button9->Enabled = false; button10->Enabled = false;
		button11->Enabled = false; button12->Enabled = false; button13->Enabled = false; button14->Enabled = false; button15->Enabled = false;
		button16->Enabled = false; button17->Enabled = false; button18->Enabled = false; button19->Enabled = false; button20->Enabled = false;
		button21->Enabled = false; button22->Enabled = false; button23->Enabled = false; button24->Enabled = false; button25->Enabled = false;
		button26->Enabled = false; button27->Enabled = false; button28->Enabled = false; button29->Enabled = false; button30->Enabled = false;
		button31->Enabled = false; button32->Enabled = false; button33->Enabled = false; button34->Enabled = false; button35->Enabled = false;
		button36->Enabled = false; button37->Enabled = false; button38->Enabled = false; button39->Enabled = false; button40->Enabled = false;
		button41->Enabled = false; button42->Enabled = false; button43->Enabled = false; button44->Enabled = false; button45->Enabled = false;
		button46->Enabled = false; button47->Enabled = false; button48->Enabled = false; button49->Enabled = false; button50->Enabled = false;
		button51->Enabled = false; button52->Enabled = false; button53->Enabled = false; button54->Enabled = false; button55->Enabled = false;
		button56->Enabled = false; button57->Enabled = false; button58->Enabled = false; button59->Enabled = false; button60->Enabled = false;
		button61->Enabled = false; button62->Enabled = false; button63->Enabled = false; button64->Enabled = false; button65->Enabled = false;
		button66->Enabled = false; button67->Enabled = false; button68->Enabled = false; button69->Enabled = false; button70->Enabled = false;
		button71->Enabled = false; button72->Enabled = false; button73->Enabled = false; button74->Enabled = false; button75->Enabled = false;
		button76->Enabled = false; button77->Enabled = false; button78->Enabled = false; button79->Enabled = false; button80->Enabled = false;
		button81->Enabled = false; button82->Enabled = false; button83->Enabled = false; button84->Enabled = false; button85->Enabled = false;
		button86->Enabled = false; button87->Enabled = false; button88->Enabled = false; button89->Enabled = false; button90->Enabled = false;
		button91->Enabled = false; button92->Enabled = false; button93->Enabled = false; button94->Enabled = false; button95->Enabled = false;
		button96->Enabled = false; button97->Enabled = false; button98->Enabled = false; button99->Enabled = false; button100->Enabled = false;

		char messageSend[2048];
		if (NicknameChange) {
			String^ msg = "<message><nickname><disconnect><true>" + labelNicknameChat->Text + "\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
		}
		else {
			if (difficultyLevelSelection) {
				String^ msg = "<message><nickname><disconnect><false>\r\n\t";
				RussianEncoding(messageSend, msg);
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
				FormClose = true;
				Field::Close();
				return;
			}
			else {
				richTextBoxRating->Clear();
				richTextBoxGetMessage->Location = Point(richTextBoxGetMessage->Location.X, richTextBoxGetMessage->Location.Y + 25);
				richTextBoxGetMessage->Height -= 25;
				Field::Height = 424;
				richTextBoxGetMessage->Clear();
				richTextBoxGetMessage->SelectionColor = Color::Red;
				richTextBoxGetMessage->AppendText("Disconnected.");
				buttonConnect->BackgroundImage = imageList_imagesConnectedAndDisconnected->Images[0];

				String^ msg = "<message><nickname><disconnect><false>\r\n\t";
				RussianEncoding(messageSend, msg);
			}
		}
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
	}
}

System::Void SapperGame::Field::ButtonConnect_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBoxNickname->Focus();
}

System::Void SapperGame::Field::ButtonInvitation_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (foundConnect && NicknameChange) {
		if (NicknameOfTheSecondPlayer == "" && !FirstTapOnTheField) {
			if (NicknameChange && textBoxNickname->Visible) {
				NicknameAdd = false;
				textBoxNickname->Visible = false;
				textBoxNickname->Text = "";

				labelNicknameChat->ForeColor = ForeColor.Blue;
				labelNicknameChat->Text = OldNickname;
				labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);
				buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[1];
				buttonSaveAndChangeNickname->Location = Point((labelNicknameChat->Location.X + labelNicknameChat->Size.Width + 5), buttonSaveAndChangeNickname->Location.Y);
				buttonSaveAndChangeNickname->Visible = true;
				textBoxNickname->Focus();
			}

			MessageForm MF;
			String^ tempNicknameOfTheSecondPlayer = MF.ShowDialog("Invitation to the pair game", "To accept", "Reject");
			if (tempNicknameOfTheSecondPlayer == "Reject") {
				tempNicknameOfTheSecondPlayer = "";
			}
			else {
				if (tempNicknameOfTheSecondPlayer == labelNicknameChat->Text) {
					MF.Show("You cannot invite yourself to a pair game!", "Message");
				}
				else {
					pendingPlayerInvitation = true;
					char messageSend[2048];
					String^ msg = "<game><invite><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + tempNicknameOfTheSecondPlayer + "\r\n\t";
					RussianEncoding(messageSend, msg);
					send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
				}
			}
		}
		else {
			if ((FirstTapOnTheField && !pendingPlayerInvitation) && (FirstTapOnTheField && !gameWithTwoPlayersStarted)) {
				buttonInvitation->Visible = false;
			}
			else {
				MessageForm MF;
				if (MF.ShowDialog("Are you sure you want to leave the doubles game? You let your partners down and your results will be lost.", "Sapper", "Yes", "No") == "Yes") {
					char messageSend[2048];
					String^ msg = "<game><disconnectingPlayerPairGame><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
					RussianEncoding(messageSend, msg);
					send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
					DisconnectingAPlayerFromAPairGame(labelNicknameChat->Text);
				}
			}
		}
	}
}

System::Void SapperGame::Field::ButtonStartPairGame_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (pendingPlayerInvitation && NicknameOfTheSecondPlayer != "") {
		char messageSend[2048];
		String^ msg = "<game><play><MyNickname>" + labelNicknameChat->Text + "<NicknameOfTheSecondPlayer>" + NicknameOfTheSecondPlayer + "\r\n\t";
		RussianEncoding(messageSend, msg);
		send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
	}
}

System::Void SapperGame::Field::TextBoxNickname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (textBoxNickname->Visible) {
		if (TextRenderer::MeasureText(textBoxNickname->Text, textBoxNickname->Font).Width >= 48) {
			textBoxNickname->Width = TextRenderer::MeasureText(textBoxNickname->Text, textBoxNickname->Font).Width;
		}
		if (TextRenderer::MeasureText(textBoxNickname->Text, textBoxNickname->Font).Width < textBoxNickname->Width &&
			TextRenderer::MeasureText(textBoxNickname->Text, textBoxNickname->Font).Width < 48) {
			textBoxNickname->Width = 48;
		}

		if (buttonSaveAndChangeNickname->Visible) {
			if (buttonSaveAndChangeNickname->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) <= 4) {
				buttonSaveAndChangeNickname->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			}
			else if (buttonSaveAndChangeNickname->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) >= 6) {
				buttonSaveAndChangeNickname->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			}

			if (labelNicknameChat->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) <= 29) {
				labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 30, labelNicknameChat->Location.Y);
			}
			else if (labelNicknameChat->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) >= 31) {
				labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 30, labelNicknameChat->Location.Y);
			}
		}
		else {
			if (labelNicknameChat->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) <= 29) {
				labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			}
			else if (labelNicknameChat->Location.X - (textBoxNickname->Location.X + textBoxNickname->Size.Width) >= 31) {
				labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			}
		}

		if (textBoxNickname->Text == "") {
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "\"Nickname\" field cannot be empty";
		}
		else if (textBoxNickname->Text[0] == ' ') {
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "\"Nickname\" field cannot begin with a space";
		}
		else if (textBoxNickname->TextLength < 4) {
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Nickname must not be shorter than three characters";
		}
		else if (textBoxNickname->TextLength > 16) {
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Nickname must not be longer than sixteen characters";
		}
		else if (textBoxNickname->Text == OldNickname) {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "New nickname cannot match old nickname";
		}
		else {
			char messageSend[2048];
			String^ msg = "<nickname><check>" + textBoxNickname->Text + "\r\n\t";
			RussianEncoding(messageSend, msg);
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
		}
	}
}

System::Void SapperGame::Field::TextBoxNickname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Escape) {
		if (NicknameChange && textBoxNickname->Visible) {
			NicknameAdd = false;
			textBoxNickname->Visible = false;
			textBoxNickname->Text = "";

			labelNicknameChat->ForeColor = ForeColor.Blue;
			labelNicknameChat->Text = OldNickname;
			labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);
			buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[1];
			buttonSaveAndChangeNickname->Location = Point((labelNicknameChat->Location.X + labelNicknameChat->Size.Width + 5), buttonSaveAndChangeNickname->Location.Y);
			buttonSaveAndChangeNickname->Visible = true;
			textBoxNickname->Focus();
		}
	}
	else if (e->KeyChar == (char)Keys::Enter) {
		e->KeyChar = 0;
		buttonSaveAndChangeNickname->PerformClick();
	}
	else if ((char)Keys::Control || (char)Keys::Shift) {	}
	else if (!((Convert::ToInt32(e->KeyChar) >= 1040 && Convert::ToInt32(e->KeyChar) <= 1071) || (Convert::ToInt32(e->KeyChar) >= 1072 && Convert::ToInt32(e->KeyChar) <= 1103) ||
			    Convert::ToInt32(e->KeyChar) == 1025 || (e->KeyChar >= 'A' && e->KeyChar <= 'Z') || (e->KeyChar >= 'a' && e->KeyChar <= 'z') ||
			   (e->KeyChar >= '1' && e->KeyChar <= '9') ||  e->KeyChar == '_' || e->KeyChar == '-'  || e->KeyChar == '\b'))
	{
			e->KeyChar = 0;
	}
	else if (textBoxNickname->Text == "" && (e->KeyChar == '-' || e->KeyChar == '_')) {
		e->KeyChar = 0;
	}
}

System::Void SapperGame::Field::ButtonSaveAndChangeNickname_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (NicknameAdd) {
		if (textBoxNickname->Text == "") {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "\"Nickname\" field cannot be empty";
		}
		else if (textBoxNickname->Text[0] == ' ') {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "\"Nickname\" field cannot begin with a space";
		}
		else if (textBoxNickname->TextLength < 4) {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Nickname must not be shorter than three characters";
		}
		else if (textBoxNickname->TextLength > 16) {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Nickname must not be longer than sixteen characters";
		}
		else if (textBoxNickname->Text == OldNickname) {
			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "New nickname cannot match old nickname";
		}
		else {
			char messageSend[2048];
			if (!NicknameChange) {
				String^ msg = "<nickname><save>" + textBoxNickname->Text + "\r\n\t";
				RussianEncoding(messageSend, msg);
			}
			else {
				String^ msg = "<nickname><edit><old>" + OldNickname + "<new>" + textBoxNickname->Text + "\r\n\t";
				RussianEncoding(messageSend, msg);
			}
			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
		}
		textBoxNickname->Focus();
	}
	else  {
		if (NicknameOfTheSecondPlayer == "") {
			OldNickname = labelNicknameChat->Text;

			textBoxNickname->Size = System::Drawing::Size(48, 23);

			buttonSaveAndChangeNickname->Visible = false;
			buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[0];
			buttonSaveAndChangeNickname->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, buttonSaveAndChangeNickname->Location.Y);

			labelNicknameChat->ForeColor = ForeColor.Red;
			labelNicknameChat->Text = "Enter your nickname";
			labelNicknameChat->Location = Point(textBoxNickname->Location.X + textBoxNickname->Size.Width + 5, labelNicknameChat->Location.Y);

			NicknameAdd = true;
			textBoxNickname->Visible = true;
			textBoxNickname->Focus();
		}
	}
}

System::Void SapperGame::Field::ButtonSaveAndChangeNickname_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBoxNickname->Focus();
}

System::Void SapperGame::Field::ButtonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (foundConnect) {
		String^ message = MessageTextRenderer("<(I am)> ", messageText);
		if (message != "") {
			char messageSend[2048];
			String^ msg = "";
			if (NicknameOfTheSecondPlayer == "") {
				msg = "<message><" + labelNicknameChat->Text + "> " + messageText + "\r\n\t";
			}
			else {
				msg = "<message><pairGame><" + labelNicknameChat->Text + "> " + "<" + labelNicknameChat->Text + "> " + messageText + "\r\n\t";
			}
			
			RussianEncoding(messageSend, msg);
			
			richTextBoxGetMessage->AppendText(Environment::NewLine);
			richTextBoxGetMessage->SelectionColor = Color::Blue;
			richTextBoxGetMessage->AppendText("<(I am)> ");

			richTextBoxGetMessage->SelectionColor = Color::Indigo;
			richTextBoxGetMessage->AppendText(message);

			richTextBoxGetMessage->ScrollToCaret();
			richTextBoxMessageEnter->Clear();
			richTextBoxGetMessage->Height = 198;
			richTextBoxMessageEnter->Location = Point(359, 373);
			richTextBoxMessageEnter->Height = 25;
			richTextBoxMessageEnter->Focus();
			
			/*
			Encoding^ UTF8 = Encoding::UTF8;
			Encoding^ unicode = Encoding::Unicode;

			array<byte>^ UnicodeBytes = unicode->GetBytes(msg);
			array<byte>^ UTF8Bytes = Encoding::Convert(unicode, UTF8, UnicodeBytes);

			array<wchar_t>^ UTF8Chars = gcnew array<wchar_t>(UTF8->GetCharCount(UTF8Bytes, 0, UTF8Bytes->Length));
			UTF8->GetChars(UTF8Bytes, 0, UTF8Bytes->Length, UTF8Chars, 0);

			String^ UTF8String = "";
			for (int i = 0; i < UTF8Chars->Length; i++) {
				UTF8String += UTF8Chars[i];
			}

			std::wstring wstr;
			std::reverse(wstr.begin(), wstr.end());
			wstr = marshal_as<std::wstring>(UTF8String);

			int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
			std::string strTo(size_needed, 0);
			WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
			std::cout << strTo << std::endl;
			*/

			send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
		}
	}
}

System::Void SapperGame::Field::ButtonEnter_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	buttonEnter->BackgroundImage = imageList_imagesForSendButton->Images[1];
}

System::Void SapperGame::Field::ButtonEnter_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	buttonEnter->BackgroundImage = imageList_imagesForSendButton->Images[0];
}

System::Void SapperGame::Field::RichTextBoxMessageEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
}

System::Void SapperGame::Field::RichTextBoxMessageEnter_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	richTextBoxMessageEnter->Enabled = false;

	if (richTextBoxMessageEnter->SelectionStart >= 0) {
		if (richTextBoxMessageEnter->SelectionStart - 1 >= 0 && richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 1] == '\n') {
			if (richTextBoxMessageEnter->SelectionStart == 1) {
				int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart;
				richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(richTextBoxMessageEnter->SelectionStart - 1, 1);
				richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
				richTextBoxMessageEnter->Enabled = true;
				return;
			}
			else {
				if (richTextBoxMessageEnter->SelectionStart - 2 >= 0) {
					if (richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 2] == '\n') {
						int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart - 1;
						richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(richTextBoxMessageEnter->SelectionStart - 1, 1);
						richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
					}
				}
				if (richTextBoxMessageEnter->SelectionStart < richTextBoxMessageEnter->Text->Length) {
					if (richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart] == '\n') {
						int lineNumber; //номер стоки
						int lineIndexStart; //индекс первого символа в строке
						int lineLength; //длина строки

						lineNumber = richTextBoxMessageEnter->GetLineFromCharIndex(richTextBoxMessageEnter->SelectionStart) + 1; //номер стоки
						if (lineNumber < richTextBoxMessageEnter->Lines->Length) {
							lineIndexStart = richTextBoxMessageEnter->GetFirstCharIndexFromLine(lineNumber); //индекс первого символа в строке
							lineLength = richTextBoxMessageEnter->Lines[lineNumber]->Length; //длина строки
							if (lineIndexStart >= 0 && (lineIndexStart + lineLength) <= richTextBoxMessageEnter->Text->Length) {
								for (int i = lineIndexStart; i < lineIndexStart + lineLength; i++) {
									if (richTextBoxMessageEnter->Text[i] != ' ' && richTextBoxMessageEnter->Text[i] != '\n') {
										richTextBoxMessageEnter->Enabled = true;
										return;
									}
								}
								int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart;
								richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(richTextBoxMessageEnter->SelectionStart - 1, 1);
								richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
							}
						}
					}
				}
			}
		}
		if (!backspace) {
			if (richTextBoxMessageEnter->SelectionStart - 2 >= 0 &&
				richTextBoxMessageEnter->SelectionStart - 1 < richTextBoxMessageEnter->Text->Length &&
				richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 1] == '\n' &&
				richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 2] == ' ')
			{

				int count = 0;
				for (int i = richTextBoxMessageEnter->SelectionStart - 2; i >= 0; i--) {
					if (richTextBoxMessageEnter->Text[i] == ' ' || richTextBoxMessageEnter->Text[i] == '\n') {
						count++;
					}
					else {
						break;
					}
				}
				if (count > 0) {
					int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart - 1;
					richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove((richTextBoxMessageEnter->SelectionStart - 1) - count, count);
					richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
				}
			}
		}
		
		int countPosition = 0;
		int cursorPosition = richTextBoxMessageEnter->SelectionStart - 1;

		if (cursorPosition >= 0 && cursorPosition + 1 < richTextBoxMessageEnter->Text->Length &&
			richTextBoxMessageEnter->Text[cursorPosition] == ' ' && richTextBoxMessageEnter->Text[cursorPosition + 1] == '\n')
		{
			if (cursorPosition + 2 <= richTextBoxMessageEnter->Text->Length) {
				cursorPosition += 2;
			}
		}
		for (int i = 0; i < richTextBoxMessageEnter->Text->Length; i++) {
			if (i + 1 < richTextBoxMessageEnter->Text->Length && richTextBoxMessageEnter->Text[i] == ' ' && richTextBoxMessageEnter->Text[i + 1] == '\n') {
				if (cursorPosition > i) {
					cursorPosition -= 2;
				}
				richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(i, 2);
				countPosition++;
				i--;
			}
		}

		String^ msg = "";
		messageText = "";
		int tempCountLines = 1;
		int countEnter = 1;
		int startIndex = 0;

		if (richTextBoxMessageEnter->Text->Length > 150) {
			int CursorPositionTextIndex = cursorPosition + 1;
			int msgLength = richTextBoxMessageEnter->Text->Length;
			richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(CursorPositionTextIndex - (msgLength - 150), msgLength - 150);
			cursorPosition = CursorPositionTextIndex - (msgLength - 150) - 1;
			if (cursorPosition < 0) {
				cursorPosition = richTextBoxMessageEnter->Text->Length - 1;
			}
			richTextBoxMessageEnter->SelectionStart = cursorPosition;
		}


		for (int i = 0; i < richTextBoxMessageEnter->Text->Length; i++) {
			msg += richTextBoxMessageEnter->Text[i];
			if (richTextBoxMessageEnter->Text[i] == '\n') {
				tempCountLines++;
				msg = "";
			}
			else if (TextRenderer::MeasureText(msg, richTextBoxMessageEnter->Font).Width >= richTextBoxMessageEnter->Width - 40) {
				tempCountLines++;
				msg = "";
			}
			if (tempCountLines > 4) {
				break;
			}
		}
		msg = "";
		for (int i = 0; i < richTextBoxMessageEnter->Text->Length; i++) {

			msg += richTextBoxMessageEnter->Text[i];
			if (richTextBoxMessageEnter->Text[i] == '\n') {
				msg = "";
				countEnter++;
			}
			else if ((tempCountLines <= 4 && TextRenderer::MeasureText(msg, richTextBoxMessageEnter->Font).Width >= richTextBoxMessageEnter->Width - 40) ||
					 (tempCountLines > 4 && TextRenderer::MeasureText(msg, richTextBoxMessageEnter->Font).Width >= richTextBoxMessageEnter->Width - 50))
			{
					if (i + 2 < richTextBoxMessageEnter->Text->Length && richTextBoxMessageEnter->Text[i + 1] == ' ' && richTextBoxMessageEnter->Text[i + 2] == '\n') {
						i++;
						continue;
					}
					if (cursorPosition + 1 == richTextBoxMessageEnter->Text->Length || i + 1 < richTextBoxMessageEnter->Text->Length) {
						if (!(i == richTextBoxMessageEnter->Text->Length - 1 && backspace)) {
							bool foundLineBreak = false;
							int count = 0;
							if (richTextBoxMessageEnter->Text[i] != ' ') {
								for (int j = i; j >= startIndex; j--) {
									if (richTextBoxMessageEnter->Text[j] == ' ') {
										break;
									}
									count++;
								}
								if (count > 0 && count < i - startIndex) {
									i -= count;
									richTextBoxMessageEnter->Text->Remove(i, count);
									foundLineBreak = true;
								}


							}

						
							richTextBoxMessageEnter->SelectionStart = i + 1;
							richTextBoxMessageEnter->SelectedText = " \n";
							if (cursorPosition >= i) {
								cursorPosition += 2;
							}
							if (richTextBoxMessageEnter->SelectionStart + 1 < richTextBoxMessageEnter->Text->Length - 1) {
								richTextBoxMessageEnter->SelectionStart = richTextBoxMessageEnter->SelectionStart + 1;
							}
							if (i + 1 < richTextBoxMessageEnter->Text->Length) {
								startIndex = i + 1;
							}
							msg = "";
							if (foundLineBreak) {
								messageText = messageText->Remove(messageText->Length - (count - 1), count - 1);
								continue;
							}
						}
					}
			}

			if (i == 0) {
				messageText += richTextBoxMessageEnter->Text[i];
			}
			else if (i - 1 >= 0 && richTextBoxMessageEnter->Text[i] == '\n' && richTextBoxMessageEnter->Text[i - 1] == ' ')
			{
				continue;
			}
			else if (i + 1 < richTextBoxMessageEnter->Text->Length && richTextBoxMessageEnter->Text[i] == ' ' && richTextBoxMessageEnter->Text[i + 1] == '\n')
			{
				continue;
			}
			else {
				messageText += richTextBoxMessageEnter->Text[i];
			}
		}
		richTextBoxMessageEnter->SelectionStart = cursorPosition + 1;
		if (richTextBoxMessageEnter->SelectionStart < richTextBoxMessageEnter->Text->Length && richTextBoxMessageEnter->SelectionStart - 1 >= 0) {
			if (richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 1] == ' ' &&
				richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart] == '\n')
			{
				if (backspace) {
					richTextBoxMessageEnter->SelectionStart = richTextBoxMessageEnter->SelectionStart - 1;
				}
				else {
					richTextBoxMessageEnter->SelectionStart = richTextBoxMessageEnter->SelectionStart + 1;
				}
			}
		}
		labelMessageLength->Text = Convert::ToString(150 - messageText->Length);
		if (countEnter <= 4) {
			labelMessageLength->Location = Point(richTextBoxMessageEnter->Location.X + richTextBoxMessageEnter->Width - labelMessageLength->Width - 3, labelMessageLength->Location.Y);
		}
		else {
			labelMessageLength->Location = Point(richTextBoxMessageEnter->Location.X + richTextBoxMessageEnter->Width - labelMessageLength->Width - 18, labelMessageLength->Location.Y);
		}


		if (countEnter <= 1) {
			if (richTextBoxMessageEnter->Height > 25) {
				richTextBoxGetMessage->Height = 198;
				richTextBoxMessageEnter->Location = Point(359, 373);
				richTextBoxMessageEnter->Height = 25;
			}
			
		}
		else if (countEnter == 2) {
			if (richTextBoxMessageEnter->Height != 40) {
				richTextBoxGetMessage->Height = 183;
				richTextBoxMessageEnter->Location = Point(359, 358);
				richTextBoxMessageEnter->Height = 40;
			}
			
		}
		else if (countEnter == 3) {
			if (richTextBoxMessageEnter->Height != 55) {
				richTextBoxGetMessage->Height = 168;
				richTextBoxMessageEnter->Location = Point(359, 343);
				richTextBoxMessageEnter->Height = 55;
			}
			
		}
		else if (countEnter >= 4) {
			if (richTextBoxMessageEnter->Height != 70) {
				richTextBoxGetMessage->Height = 153;
				richTextBoxMessageEnter->Location = Point(359, 328);
				richTextBoxMessageEnter->Height = 70;
			}
			
		}

		if (CtrlV_CtrlZ_CtrlY) {
			int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart;
			richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->TrimEnd('\r', '\n', ' ');
			richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
		}
		else if (richTextBoxMessageEnter->Lines->Length < countLine) {
			int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart;
			richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->TrimEnd('\r', '\n', ' ');
			richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
		}
		
	}
	backspace = false;
	CtrlV_CtrlZ_CtrlY = false;
	countLine = richTextBoxMessageEnter->Lines->Length;
	richTextBoxMessageEnter->Enabled = true;
	richTextBoxMessageEnter->Focus();
}

System::Void SapperGame::Field::RichTextBoxMessageEnter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (messageText->Length >= 150) {
		if (!((e->KeyValue == (char)Keys::Enter && !e->Control) || e->KeyValue == '\b' ||
			e->KeyValue == (char)Keys::Right || e->KeyValue == (char)Keys::Left ||
			e->KeyValue == (char)Keys::Up || e->KeyValue == (char)Keys::Down ||
			(e->Control && e->KeyValue == (char)Keys::C)))
		{
			e->SuppressKeyPress = true;
		}
	}
	if (e->KeyValue == (char)Keys::Enter && !e->Control) {
		buttonEnter->PerformClick();
		e->SuppressKeyPress = true;
	}

	if (e->KeyValue == '\b') {
		if (richTextBoxMessageEnter->SelectionStart - 2 >= 0 &&
			richTextBoxMessageEnter->SelectionStart - 1 < richTextBoxMessageEnter->Text->Length &&
			richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 2] == ' ' &&
			richTextBoxMessageEnter->Text[richTextBoxMessageEnter->SelectionStart - 1] == '\n')
		{
			int CursorPositionTextIndex = richTextBoxMessageEnter->SelectionStart - 2;
			richTextBoxMessageEnter->Text = richTextBoxMessageEnter->Text->Remove(richTextBoxMessageEnter->SelectionStart - 2, 2);
			richTextBoxMessageEnter->SelectionStart = CursorPositionTextIndex;
		}
		backspace = true;
	}
	else {
		backspace = false;
	}
	if ((e->Control && e->KeyValue == (char)Keys::V) || (e->Control && e->KeyValue == (char)Keys::Z) || (e->Control && e->KeyValue == (char)Keys::Y)) {
		if (messageText->Length >= 150) {
			e->SuppressKeyPress = true;
		}
		CtrlV_CtrlZ_CtrlY = true;
	}
	else {
		CtrlV_CtrlZ_CtrlY = false;
	}

}

System::Void SapperGame::Field::RichTextBoxMessageEnter_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	
}

System::Void SapperGame::Field::RichTextBoxGetMessage_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	CursorX = Cursor->Position.X;
	CursorY = Cursor->Position.Y;
	messageScrolling = false;
}

System::Void SapperGame::Field::RichTextBoxGetMessage_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	newCursorX = Cursor->Position.X;
	newCursorY = Cursor->Position.Y;

	if (!StartTimerBetweenClicks) {
		StartTimerBetweenClicks = true;
	}
	else {
		if (Time_Between_Clicks <= 20) {
			Time_Between_Clicks = 0;
			Time_Between_Clicks = 0;
			StartTimerBetweenClicks = false;
		}
	}
}

System::Void SapperGame::Field::RichTextBoxRating_Enter(System::Object^ sender, System::EventArgs^ e) {
	richTextBoxMessageEnter->Focus();
	messageScrolling = false;
}

System::Void SapperGame::Field::Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!gameOver && !victory && FirstTapOnTheField) {
		if (buttonInvitation->Visible) {
			if (NicknameOfTheSecondPlayer == "") {
				buttonInvitation->Visible = false;
			}
		}
		Seconds++;
		if (Seconds == 60) {
			Minutes++;
			Seconds = 0;

			if (Minutes >= 10) {
				for (int i = 0; i < 2; i++) {
					if (i == 0) {
						if (Convert::ToString(Minutes)[i] == '0') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
						}
						else if (Convert::ToString(Minutes)[i] == '1') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
						}
						else if (Convert::ToString(Minutes)[i] == '2') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
						}
						else if (Convert::ToString(Minutes)[i] == '3') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
						}
						else if (Convert::ToString(Minutes)[i] == '4') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
						}
						else if (Convert::ToString(Minutes)[i] == '5') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
						}
						else if (Convert::ToString(Minutes)[i] == '6') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
						}
						else if (Convert::ToString(Minutes)[i] == '7') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
						}
						else if (Convert::ToString(Minutes)[i] == '8') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
						}
						else if (Convert::ToString(Minutes)[i] == '9') {
							labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
						}
					}
					else if (i == 1) {
						if (Convert::ToString(Minutes)[i] == '0') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
						}
						else if (Convert::ToString(Minutes)[i] == '1') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
						}
						else if (Convert::ToString(Minutes)[i] == '2') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
						}
						else if (Convert::ToString(Minutes)[i] == '3') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
						}
						else if (Convert::ToString(Minutes)[i] == '4') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
						}
						else if (Convert::ToString(Minutes)[i] == '5') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
						}
						else if (Convert::ToString(Minutes)[i] == '6') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
						}
						else if (Convert::ToString(Minutes)[i] == '7') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
						}
						else if (Convert::ToString(Minutes)[i] == '8') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
						}
						else if (Convert::ToString(Minutes)[i] == '9') {
							labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
						}
					}
				}
			}
			else {
				labelTimeValue1->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
				if (Convert::ToString(Minutes)[0] == '0') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
				}
				else if (Convert::ToString(Minutes)[0] == '1') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
				}
				else if (Convert::ToString(Minutes)[0] == '2') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
				}
				else if (Convert::ToString(Minutes)[0] == '3') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
				}
				else if (Convert::ToString(Minutes)[0] == '4') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
				}
				else if (Convert::ToString(Minutes)[0] == '5') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
				}
				else if (Convert::ToString(Minutes)[0] == '6') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
				}
				else if (Convert::ToString(Minutes)[0] == '7') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
				}
				else if (Convert::ToString(Minutes)[0] == '8') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
				}
				else if (Convert::ToString(Minutes)[0] == '9') {
					labelTimeValue2->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
				}
			}

		}

		labelDelimiterBetweenMinutesAndSeconds->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[10];
		if (Seconds >= 10) {
			for (int i = 0; i < 2; i++) {
				if (i == 0) {
					if (Convert::ToString(Seconds)[i] == '0') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
					}
					else if (Convert::ToString(Seconds)[i] == '1') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
					}
					else if (Convert::ToString(Seconds)[i] == '2') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
					}
					else if (Convert::ToString(Seconds)[i] == '3') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
					}
					else if (Convert::ToString(Seconds)[i] == '4') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
					}
					else if (Convert::ToString(Seconds)[i] == '5') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
					}
					else if (Convert::ToString(Seconds)[i] == '6') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
					}
					else if (Convert::ToString(Seconds)[i] == '7') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
					}
					else if (Convert::ToString(Seconds)[i] == '8') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
					}
					else if (Convert::ToString(Seconds)[i] == '9') {
						labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
					}
				}
				else if (i == 1) {
					if (Convert::ToString(Seconds)[i] == '0') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
					}
					else if (Convert::ToString(Seconds)[i] == '1') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
					}
					else if (Convert::ToString(Seconds)[i] == '2') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
					}
					else if (Convert::ToString(Seconds)[i] == '3') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
					}
					else if (Convert::ToString(Seconds)[i] == '4') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
					}
					else if (Convert::ToString(Seconds)[i] == '5') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
					}
					else if (Convert::ToString(Seconds)[i] == '6') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
					}
					else if (Convert::ToString(Seconds)[i] == '7') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
					}
					else if (Convert::ToString(Seconds)[i] == '8') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
					}
					else if (Convert::ToString(Seconds)[i] == '9') {
						labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
					}
				}
			}
		}
		else {
			labelTimeValue3->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
			if (Convert::ToString(Seconds)[0] == '0') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[0];
			}
			else if (Convert::ToString(Seconds)[0] == '1') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[1];
			}
			else if (Convert::ToString(Seconds)[0] == '2') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[2];
			}
			else if (Convert::ToString(Seconds)[0] == '3') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[3];
			}
			else if (Convert::ToString(Seconds)[0] == '4') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[4];
			}
			else if (Convert::ToString(Seconds)[0] == '5') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[5];
			}
			else if (Convert::ToString(Seconds)[0] == '6') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[6];
			}
			else if (Convert::ToString(Seconds)[0] == '7') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[7];
			}
			else if (Convert::ToString(Seconds)[0] == '8') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[8];
			}
			else if (Convert::ToString(Seconds)[0] == '9') {
				labelTimeValue4->BackgroundImage = imageList_imagesForTimeAndCountMines->Images[9];
			}
		}
	}
}

System::Void SapperGame::Field::GroupBoxTiles_Enter(System::Object^ sender, System::EventArgs^ e) {
	groupBoxTimeAndRemainingMinesLable->Focus();
}

System::Void SapperGame::Field::ButtonNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	int count = 0;
	if (!found) {
		arrCells = gcnew array<array<String^>^>(10);
		for (int i = 0; i < 10; i++) {
			arrCells[i] = gcnew array<String^>(10);
		}

		BombMark = gcnew array<bool>(100);

		LeftClick = gcnew array<bool>(100);

		ArrayCheckEmptyCell = gcnew array<array<bool>^>(10);
		for (int i = 0; i < 10; i++) {
			ArrayCheckEmptyCell[i] = gcnew array<bool>(10);
		}

		NewGame();
	}
	else {
		if ((found && !MultiplayerGame) || (found && MultiplayerGame && foundConnect && NicknameChange)) {
			if (!gameOver && !victory) {
				MessageForm MF;
				if (MF.ShowDialog("Are you sure you want to start?", "Sapper", "Yes", "No") == "Yes") {
					NewGame();
				}
			}
			else
				NewGame();
		}
	}
	pendingPlayerInvitation = false;
	gameWithTwoPlayersStarted = false;
	buttonInvitation->Visible = true;
	textBoxNickname->Focus();
}

System::Void SapperGame::Field::ButtonNewGame_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBoxNickname->Focus();
}

System::Void SapperGame::Field::Field_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (FormClose) {
		delete BombMark;
		delete LeftClick;
		for (int i = 0; i < 10; i++) {
			delete ArrayCheckEmptyCell[i];
			delete arrCells[i];
		}
		delete ArrayCheckEmptyCell;
		delete arrCells;

		DifficultyLevelSelection^ Form_DifficultyLevelSelection = gcnew DifficultyLevelSelection();
		Form_DifficultyLevelSelection->Visible = true;
	}
	else {
		MessageForm MF;
		if (MF.ShowDialog("Are you sure you want to exit the game?", "Sapper", "Yes", "No") == "Yes") {
			if (foundConnect) {
				char messageSend[2048];
				if (NicknameChange) {
					String^ msg = "<message><nickname><disconnect><true>" + labelNicknameChat->Text + "\r\n\t";
					RussianEncoding(messageSend, msg);
				}
				else {
					String^ msg = "<message><nickname><disconnect><false>\r\n\t";
					RussianEncoding(messageSend, msg);
				}
				send(ConnectionMsgServer, messageSend, sizeof(messageSend), NULL);
			}
			Application::ExitThread();
		}
		else {
			e->Cancel = true;
		}
	}
}

System::Void SapperGame::Field::Field_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Escape) {
		if (NicknameChange && textBoxNickname->Visible) {
			NicknameAdd = false;
			textBoxNickname->Visible = false;
			textBoxNickname->Text = "";

			labelNicknameChat->ForeColor = ForeColor.Blue;
			labelNicknameChat->Text = OldNickname;
			labelNicknameChat->Location = Point(textBoxNickname->Location.X, labelNicknameChat->Location.Y);
			buttonSaveAndChangeNickname->BackgroundImage = imageListSaveAndChange->Images[1];
			buttonSaveAndChangeNickname->Location = Point((labelNicknameChat->Location.X + labelNicknameChat->Size.Width + 5), buttonSaveAndChangeNickname->Location.Y);
			buttonSaveAndChangeNickname->Visible = true;
			textBoxNickname->Focus();
		}
	}
}

System::Void SapperGame::Field::ButtonDifficultyLevelSelection_Click(System::Object^ sender, System::EventArgs^ e) {
	messageScrolling = true;
	if (foundConnect) {
		difficultyLevelSelection = true;
		buttonConnect->PerformClick();
	}
	else {
		FormClose = true;
		Field::Close();
	}
}

System::Void SapperGame::Field::ButtonDifficultyLevelSelection_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBoxNickname->Focus();
}

System::Void SapperGame::Field::Button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button1, 1);
}

System::Void SapperGame::Field::Button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button2, 2);
}

System::Void SapperGame::Field::Button3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button3, 3);
}

System::Void SapperGame::Field::Button4_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button4, 4);
}

System::Void SapperGame::Field::Button5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button5, 5);
}

System::Void SapperGame::Field::Button6_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button6, 6);
}

System::Void SapperGame::Field::Button7_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button7, 7);
}

System::Void SapperGame::Field::Button8_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button8, 8);
}

System::Void SapperGame::Field::Button9_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button9, 9);
}

System::Void SapperGame::Field::Button10_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button10, 10);
}

System::Void SapperGame::Field::Button11_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button11, 11);
}

System::Void SapperGame::Field::Button12_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button12, 12);
}

System::Void SapperGame::Field::Button13_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button13, 13);
}

System::Void SapperGame::Field::Button14_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button14, 14);
}

System::Void SapperGame::Field::Button15_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button15, 15);
}

System::Void SapperGame::Field::Button16_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button16, 16);
}

System::Void SapperGame::Field::Button17_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button17, 17);
}

System::Void SapperGame::Field::Button18_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button18, 18);
}

System::Void SapperGame::Field::Button19_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button19, 19);
}

System::Void SapperGame::Field::Button20_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button20, 20);
}

System::Void SapperGame::Field::Button21_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button21, 21);
}

System::Void SapperGame::Field::Button22_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button22, 22);
}

System::Void SapperGame::Field::Button23_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button23, 23);
}

System::Void SapperGame::Field::Button24_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button24, 24);
}

System::Void SapperGame::Field::Button25_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button25, 25);
}

System::Void SapperGame::Field::Button26_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button26, 26);
}

System::Void SapperGame::Field::Button27_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button27, 27);
}

System::Void SapperGame::Field::Button28_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button28, 28);
}

System::Void SapperGame::Field::Button29_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button29, 29);
}

System::Void SapperGame::Field::Button30_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button30, 30);
}

System::Void SapperGame::Field::Button31_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button31, 31);
}

System::Void SapperGame::Field::Button32_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button32, 32);
}

System::Void SapperGame::Field::Button33_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button33, 33);
}

System::Void SapperGame::Field::Button34_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button34, 34);
}

System::Void SapperGame::Field::Button35_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button35, 35);
}

System::Void SapperGame::Field::Button36_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button36, 36);
}

System::Void SapperGame::Field::Button37_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button37, 37);
}

System::Void SapperGame::Field::Button38_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button38, 38);
}

System::Void SapperGame::Field::Button39_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button39, 39);
}

System::Void SapperGame::Field::Button40_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button40, 40);
}

System::Void SapperGame::Field::Button41_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button41, 41);
}

System::Void SapperGame::Field::Button42_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button42, 42);
}

System::Void SapperGame::Field::Button43_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button43, 43);
}

System::Void SapperGame::Field::Button44_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button44, 44);
}

System::Void SapperGame::Field::Button45_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button45, 45);
}

System::Void SapperGame::Field::Button46_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button46, 46);
}

System::Void SapperGame::Field::Button47_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button47, 47);
}

System::Void SapperGame::Field::Button48_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button48, 48);
}

System::Void SapperGame::Field::Button49_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button49, 49);
}

System::Void SapperGame::Field::Button50_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button50, 50);
}

System::Void SapperGame::Field::Button51_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button51, 51);
}

System::Void SapperGame::Field::Button52_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button52, 52);
}

System::Void SapperGame::Field::Button53_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button53, 53);
}

System::Void SapperGame::Field::Button54_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button54, 54);
}

System::Void SapperGame::Field::Button55_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button55, 55);
}

System::Void SapperGame::Field::Button56_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button56, 56);
}

System::Void SapperGame::Field::Button57_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button57, 57);
}

System::Void SapperGame::Field::Button58_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button58, 58);
}

System::Void SapperGame::Field::Button59_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button59, 59);
}

System::Void SapperGame::Field::Button60_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button60, 60);
}

System::Void SapperGame::Field::Button61_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button61, 61);
}

System::Void SapperGame::Field::Button62_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button62, 62);
}

System::Void SapperGame::Field::Button63_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button63, 63);
}

System::Void SapperGame::Field::Button64_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button64, 64);
}

System::Void SapperGame::Field::Button65_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button65, 65);
}

System::Void SapperGame::Field::Button66_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button66, 66);
}

System::Void SapperGame::Field::Button67_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button67, 67);
}

System::Void SapperGame::Field::Button68_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button68, 68);
}

System::Void SapperGame::Field::Button69_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button69, 69);
}

System::Void SapperGame::Field::Button70_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button70, 70);
}

System::Void SapperGame::Field::Button71_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button71, 71);
}

System::Void SapperGame::Field::Button72_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button72, 72);
}

System::Void SapperGame::Field::Button73_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button73, 73);
}

System::Void SapperGame::Field::Button74_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button74, 74);
}

System::Void SapperGame::Field::Button75_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button75, 75);
}

System::Void SapperGame::Field::Button76_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button76, 76);
}

System::Void SapperGame::Field::Button77_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button77, 77);
}

System::Void SapperGame::Field::Button78_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button78, 78);
}

System::Void SapperGame::Field::Button79_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button79, 79);
}

System::Void SapperGame::Field::Button80_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button80, 80);
}

System::Void SapperGame::Field::Button81_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button81, 81);
}

System::Void SapperGame::Field::Button82_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button82, 82);
}

System::Void SapperGame::Field::Button83_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button83, 83);
}

System::Void SapperGame::Field::Button84_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button84, 84);
}

System::Void SapperGame::Field::Button85_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button85, 85);
}

System::Void SapperGame::Field::Button86_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button86, 86);
}

System::Void SapperGame::Field::Button87_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button87, 87);
}

System::Void SapperGame::Field::Button88_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button88, 88);
}

System::Void SapperGame::Field::Button89_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button89, 89);
}

System::Void SapperGame::Field::Button90_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button90, 90);
}

System::Void SapperGame::Field::Button91_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button91, 91);
}

System::Void SapperGame::Field::Button92_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button92, 92);
}

System::Void SapperGame::Field::Button93_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button93, 93);
}

System::Void SapperGame::Field::Button94_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button94, 94);
}

System::Void SapperGame::Field::Button95_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button95, 95);
}

System::Void SapperGame::Field::Button96_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button96, 96);
}

System::Void SapperGame::Field::Button97_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button97, 97);
}

System::Void SapperGame::Field::Button98_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button98, 98);
}

System::Void SapperGame::Field::Button99_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button99, 99);
}

System::Void SapperGame::Field::Button100_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ButtonClick(sender, e, button100, 100);
}