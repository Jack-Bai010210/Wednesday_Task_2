#include<stdio.h>
#include<stdlib.h>
/*
��1��
1011+0101 = 16
110100+11011 = 79
1011 + 110011 = 62
*/
/*
��2��
FF+FF = 510
ed+10 = 253
563 + cd = 1584
*/
/*
��3��
char   = 1�o�C�g(-128~127)
int    = 4�o�C�g(-21474483648~21474483647)
float  = 4�o�C�g(3.4E-38~3.4E+38)
double = 8�o�C�g(1.7E-308~1.7E+308)
*/
/*
��4��
�@
*/
/*
��5��
34
*/
/*
��6��
20
*/
/*
��7��
20
*/
/*
��8��
20
*/
/*
��9��
int
*/
/*
��10��
*/
/*
int distance_calculation(int player_position,int enemy_position)
{
	return player_position-enemy_position;
}
int main()
{
	printf("�����̍���%d�ł�\n", distance_calculation(5, 3));
}
*/
/*
��11��
�J�[�h�\���̂��쐬���Ă��������B
���̃J�[�h�̓g�����v�̃J�[�h�̂��Ƃł��B
���Ƃ��āA�Ȃ�̃J�[�h�Ȃ̂��������Ă��Ă��������B
�X�y�[�h��7�ł���A�n�[�g��13�ł���ȂǁB
���̍\���̂ɂ͌��݂̎����̏���ݒ肷�鏈���ƁA
���݂̎����̏����J�����鏈��������Ă��������B
*/
/*
struct Playing_Cards
{
public:
	int GetCard_num() { return card_num; }
	int GetCard_pattern() { return card_pattern; }
	void SetCardNum(int set_num);
	void SetCardPattern(int set_pattern);
private:
	int card_pattern;
	int card_num;
};
int main()
{
	Playing_Cards playing_cards;
	int cardnum, cardpattern;
	printf("�D���ȃg�����v�J�[�h�̖͗l�̃C�j�V��������͂��Ă�������\n");
	scanf_s("%c", &cardpattern);
	printf("�D���ȃg�����v�J�[�h�̐�������͂��Ă�������\n");
	scanf_s("%d", &cardnum);
	playing_cards.SetCardPattern(cardpattern);
	playing_cards.SetCardNum(cardnum);
	printf_s("���Ȃ����D���ȃg�����v�J�[�h�� %c �� %d �ł�", playing_cards.GetCard_pattern(), playing_cards.GetCard_num());
}
void Playing_Cards::SetCardNum(int set_num)
{
	card_num = set_num;
}
void Playing_Cards::SetCardPattern(int set_pattern)
{
	card_pattern = set_pattern;
}
*/
/*
��11��
�g�����v�̎R�D�̍\���̂��쐬���Ă��������B
���̍ۃJ�[�h�ɂ͐�قǍ�����\���̂��g�p���Ă��������B
�ȉ��̏����𖞂����Ă������ƁB
�g�����v�̖�����53��(1 �` 13 * 4 + �W���[�J�[1)
Card card[53];
*/
/*
struct Playing_Cards
{
public:
	int GetCard_num() { return card_num; }
	int GetCard_pattern() { return card_pattern; }
	void SetCardNum(int set_num);
	void SetCardPattern(int set_pattern);
private:
	int card_pattern;
	int card_num;
	int card_card[53];
};
*/
/*
��11��
�V���b�t���@�\����������B
card[53]�Ƀ����_���ɃJ�[�h����t�^���Ă��������B
card[0]���N���u��6�Acard[1]���n�[�g��5�Ƃ������悤�ɁB
���̍ۓ����J�[�h�͑��݂��Ȃ��悤�ɂ��Ă��������B
*/
/*
struct  Playing_Cards
{
public:
	void shuffle(int Deck[53], int card_num);
	int GetDeck() { return card_card[53]; };
private:
	int card_card[];
};
int main(void)
{
	Playing_Cards playing_Cards;
	int playing_Cards_Deck[53];
	for (int i = 0; i < 53; i++)
	{
		playing_Cards_Deck[i] = i;
	}
	if(getchar() == 'a')
	playing_Cards.shuffle(playing_Cards_Deck, 53);
	for (int i = 0; i < 53; i++)
	{
		playing_Cards_Deck[i] == playing_Cards.GetDeck();
		if (playing_Cards_Deck[i] < 13)
			printf("�}�[�N��H�Ő�����%d�ł�\n", playing_Cards_Deck[i] + 1);
		else if (playing_Cards_Deck[i] < 26)
			printf("�}�[�N��D�Ő�����%d�ł�\n", playing_Cards_Deck[i] - 12);
		else if (playing_Cards_Deck[i] < 39)
			printf("�}�[�N��C�Ő�����%d�ł�\n", playing_Cards_Deck[i] - 25);
		else if (playing_Cards_Deck[i] < 52)
			printf("�}�[�N��S�Ő�����%d�ł�\n", playing_Cards_Deck[i] - 38);
		else
			printf("�W���[�J�[�����\n");
		printf("\n");
	}
}
void Playing_Cards::shuffle(int Deck[], int card_num)
{
	for (int i = 0; i < card_num; i++)
	{
		int shuffle = rand() % card_num;
		int boxnumber = Deck[i];
		Deck[i] = Deck[shuffle];
		Deck[shuffle] = boxnumber;
	}
	Deck = card_card;
}
*/