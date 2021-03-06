#include "Character.h"

void Character::CreateNewChar() {

	string sTempName;

	while (true) {
		system("cls");
		cout << "캐릭터의 이름을 입력해주세요. : ";

		cin >> sTempName;

		if (sTempName.length() < 2 || sTempName.length() > 10) {
			cout << "이름이 너무 짧거나 깁니다. 2자에서 10자 이내로 입력해주세요." << endl;
		}
		else {
			cout << "캐릭터의 이름을 " << sTempName << " 으로 정하시겠습니까?(y/n)" << endl;
			char cConfirm = 0;
			cin >> cConfirm;
			switch (cConfirm) {
			case 'y': {
				this->iMaxHp = 500;
				this->sName = sTempName;
				this->iHp = 500;
				this->iMaxMp = 100;
				this->iMp = 100;
				this->iLevel = 1;
				this->iRqExp = 100;
				this->iExp = 0;
				this->iGold = 0;
				this->iMaxAtt = 20;
				this->iMinAtt = 5;
				this->iStr = 5;
				this->iDex = 5;
				this->iInt = 5;
				this->iDef = 0;
				this->iDodge = 0;
				cout << "캐릭터 생성이 완료되었습니다." << endl;
				return;
			}
					  break;
			case 'n':
				break;
			default:
				break;
			}
		}
	}
}

void Character::ShowCharStats() const {
	cout << "---------------------------------" << endl;
	cout << "이름 : " << this->sName << endl;
	cout << "HP : " << this->iHp << " / " << this->iMaxHp << endl;
	cout << "MP : " << this->iMp << " / " << this->iMaxMp << endl;
	cout << "공격력 : " << this->iMinAtt << " - " << this->iMaxAtt << endl;
	cout << "방어력 : " << this->iDef << endl;
	cout << "경험치 : " << this->iExp << " / " << this->iRqExp << endl;
	cout << "소지금 : " << this->iGold << "G" << endl;
	cout << "힘 : " << this->iStr << endl << "민첩 : " << this->iDex << endl << "지능 : " << this->iInt << endl;
	cout << "---------------------------------" << endl;
	cout << "1. 장비창 보기" << endl << "2. 돌아가기" << endl;

	int iChoice = 0;

	while (iChoice != 1 && iChoice != 2) {
		cout << endl << "선택하세요 : "; cin >> iChoice;
	}

	//if (iChoice == 1) /*Character::ShowEquipment()*/;

	return;
}