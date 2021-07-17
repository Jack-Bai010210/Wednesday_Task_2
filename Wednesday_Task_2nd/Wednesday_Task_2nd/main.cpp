#include<stdio.h>
#include<stdlib.h>
/*
第1問
1011+0101 = 16
110100+11011 = 79
1011 + 110011 = 62
*/
/*
第2問
FF+FF = 510
ed+10 = 253
563 + cd = 1584
*/
/*
第3問
char   = 1バイト(-128~127)
int    = 4バイト(-21474483648~21474483647)
float  = 4バイト(3.4E-38~3.4E+38)
double = 8バイト(1.7E-308~1.7E+308)
*/
/*
第4問
①
*/
/*
第5問
34
*/
/*
第6問
20
*/
/*
第7問
20
*/
/*
第8問
20
*/
/*
第9問
int
*/
/*
第10問
*/
/*
int distance_calculation(int player_position,int enemy_position)
{
	return player_position-enemy_position;
}
int main()
{
	printf("距離の差は%dです\n", distance_calculation(5, 3));
}
*/
/*
第11問
カード構造体を作成してください。
このカードはトランプのカードのことです。
情報として、なんのカードなのかを持っていてください。
スペードの7である、ハートの13であるなど。
この構造体には現在の自分の情報を設定する処理と、
現在の自分の情報を開示する処理を作ってください。
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
	printf("好きなトランプカードの模様のイニシャルを入力してください\n");
	scanf_s("%c", &cardpattern);
	printf("好きなトランプカードの数字を入力してください\n");
	scanf_s("%d", &cardnum);
	playing_cards.SetCardPattern(cardpattern);
	playing_cards.SetCardNum(cardnum);
	printf_s("あなたが好きなトランプカードは %c の %d です", playing_cards.GetCard_pattern(), playing_cards.GetCard_num());
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
第11問
トランプの山札の構造体を作成してください。
その際カードには先ほど作った構造体を使用してください。
以下の条件を満たしておくこと。
トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
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
第11問
シャッフル機能を実装する。
card[53]にランダムにカード情報を付与してください。
card[0]がクラブの6、card[1]がハートの5といったように。
その際同じカードは存在しないようにしてください。
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
			printf("マークはHで数字は%dです\n", playing_Cards_Deck[i] + 1);
		else if (playing_Cards_Deck[i] < 26)
			printf("マークはDで数字は%dです\n", playing_Cards_Deck[i] - 12);
		else if (playing_Cards_Deck[i] < 39)
			printf("マークはCで数字は%dです\n", playing_Cards_Deck[i] - 25);
		else if (playing_Cards_Deck[i] < 52)
			printf("マークはSで数字は%dです\n", playing_Cards_Deck[i] - 38);
		else
			printf("ジョーカーだよん\n");
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