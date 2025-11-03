
#include <stdio.h>
int x, y, z, a, b, c, d;


int unitMember(int z){
	
	switch(z){
	case 1:
		printf("\nMembers:\nS2 Jeong HyeRin\nS5 Kim YooYeon\nS7 Kim NaKyoung\nS8 Gong YuBin");
		break;
	
	case 2:
		printf("\nMembers:\nS1 Yoon SeoYeon\nS3 Lee JiWoo\nS4 Kim CheoYeon \nS5 Kim SooMin");
		break;
		
	case 3:
		printf("\nMembers:\nS1 Yoon SeoYeon\nS2 Jeong HyeRin\nS3 Lee JiWoo\nS4 Kim ChaeYeon\nS5 Kim YooYeon\nS6 Kim SooMin\nS7 Kim NaKyoung\nS8 Gong YuBin");
		break;
		
	case 4:
		printf("\nMembers:\nS1 Yoon SeoYeon\nS2 Jeong HyeRin\nS8 Gong YuBin\nS9 Kaede\nS10 Seo DaHyuyn\nS13 Nien\nS14 Park SoHyun\nS15 Xinyu");
		break;
		
	case 5:
		printf("\nMembers:\nS3 Lee JiWoo\nS4 Kim ChaeYeon\nS5 Kim YooYeon\nS6 Kim SooMin\nS7 Kim NaKyoung\nS11 Kotone\nS12 Kwak YeonJi\nS16 Mayu");
		break;
		
	case 6:
		printf("\nMembers:\nS17 Lynn\nS18 JooBin\nS19 Jeong HaYeon\nS20 Park ShiOn");
		break;
		
	case 7:
		printf("\nMembers:\nS3 Lee JiWoo\nS4 Kim ChaeYeon\nS9 Kaede\nS10 Seo DaHyun\nS13 Nien");
		break;
		
	case 8:
		printf("\nMembers:\nS21 Kim ChaeWon\nS22 Sullin\nS23 SeoAh\nS24 JiYeon");
		break;
	
	case 9:
		printf("\nMembers:\nS1 Yoon Seoyeon\nS2 Jeong HyeRin\nS3 Lee JiWoo\nS4 Kim ChaeYeon\nS5 Kim YooYeon\nS6 Kim SooMin\nS7 Kim NaKyoung\nS8 Gong YuBin\nS9 Kaede\nS10 Seo Dahyun");
		break;
		
	case 10:
		printf("\nMembers:\nS1 Yoon SeoYeon\nS2 Jeong HyeRin\nS3 Lee JiWoo\nS4 Kim CheoYeon\nS5 Kim YooYeon\nS6 Kim SooMin\nS7 Kim Nakyoung\nS8 Gong Yubin\nS9 Kaede\nS10 Seo DahYun\nS11 Kotone\nS12 Kwak YeonJi\nS13 Nien\nS14 Park SoHyun\nS15 Xinyu\nS16 Mayu\nS17 Lynn\nS18 JooBin\nS19 Jeong HaYeon\nS20 Park ShiOn\nS21 Kim ChaeWon\nS22 Sullin\nS23 SeoAh\nS24 JiYeon");
		break;
		
	case 11:
		printf("\nMembers:\nS2 Jeong HyeRin\nS5 Kim YooYeon\nS7 Kim NaKyoung\nS8 gong YuBin\nS9 Kaede\nS11 Kotone\nS12 Kwak YeonJi\nS13 Nien\nS14 Park SoHyun\nS15 Xinyu\nS17 Lynn\nS24 YeonJi");
		break;
		
	case 12:
		printf("\nMembers:\nS3 Lee JiWoo\nS4 Kim ChaeYeon\nS5 Kim YooYeon\nS6 Kim SooMin\nS11 Kotone\nS16 Mayu\nS20 Park ShiOn\nS21 Kim ChaeWon");
		break;
	
	case 13:
		printf("\nMembers:\nS7 Kim NaKyoung\nS16 Mayu\nS20 Park ShiOn\nS21 Kim ChaeWon");
		break;
	}
	
return z;
}

int unitSong(int a){
	
switch(a){
	case 1:
		printf("\nAlbum: Access\nSongs\n1. Access\n2. Generation\n3. Rolex\n4. Charla\n5. Dimension (AAA Ver.)\n6. +(82)");
		break;
		
	case 2:
		printf("\nAlbum: Aesthetic\nSongs\n1. Cherry 100%\n2. Cherry Talk\n3. Touch\n4. Hide & Seek\n5. Deja-vu\n6. Dimension (KRE Ver.)");
		break;
		
	case 3:
		printf("\nAlbum: Cherry Gene\nSongs\n1. Cherry Gene 'Baddest Remix'\n2. Cherry Gene 'Hy-Fluid Mix'\n3. Cherry Gene 'Testarossa Mix'");
		break;
		
	case 4:
		printf("\nAlbum: Muhan\nSongs\n1. Muhan\n2. Girl's Capitalism\n3. Complexity\n4. Black Soul Dress\n5. Seoul Sonyo Sound\n6. Cry Baby\n7. Speed Love\n8. Number 8");
		break;
		
	case 5:
		printf("\nAlbum: Mujuk\nSongs\n1. Mujuk\n2. Invincible\n3. Rhodanthe\n4. Heavy Metal Wings\n5. Mild Fever 37.5\n6. Moto Princess\n7. Oui\n8. Enhanced Flower");
		break;
		
	case 6:
		printf("\nAlbum: Just Do It\nSongs\n1. Just Do It");
		break;
		
	case 7:
		printf("\nAlbum: Structure of Sadness\nSongs\n1. Door\n2. Farewell My First");
		break;
		
	case 8:
		printf("\nAlbum: Inner Dance\nSongs\n1. Inner Dance");
		break;
		
	case 9:
		printf("\nAlbum: Performante\nSongs\n1. Visual Virtue\n2. Hit The Floor\n3. Choom\n4. Eclair\n5. Love Soseol\n6. Atmosphere (VV Ver.)\n7. 12 Rings\n8. Vision (VV Ver.)\n9. Bionic Power\n10. Visionary Vision");
		break;
		
	case 10:
		printf("\nAlbum: Untitled\nSongs\n1. Untitled\n2. ### (Hatchi Ver.)\n3. ###");
		break;
		
	case 11:
		printf("\nSongs\n1. Beam\n2. Before the Rise\n3. Rising\n4. Colorful\n5. The Baddest\n6. New Look\n7. Chowall");
		break;
		
	case 12:
		printf("\nSongs\n1. S\n2. Girls Never Die\n3. Heart Raider\n4. Midnight Flower\n5. White Soul Sneakers\n6. Chiyu\n7. 24\n8. Beyond the Beyond\n9. Non Scale\n10. Dimension");
		break;
		
	case 13:
		printf("\nSongs\n1. Polaroid");
		break;
		
	default:
		printf("Please follow the stipulated numbers!");
		break;
}
	
return a;
}

int pickUnit(){
	
	switch(y){
		case 1:
			printf("\nYou have entered 'Acid Angel from Asia'");	
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(1);
					break;
					
				case 2:
					unitSong(1);
					break;
				}
			break;
			
		case 2:
			printf("\nYou have entered '+(KR)ystal Eyes'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(2);
					break;
					
					
				case 2:
					unitSong(2);
					break;
				}
			break;
			
		case 3:
			printf("\nYou have entered 'Acid Eyes'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(3);
					break;
					
					
				case 2:
					unitSong(3);
					break;
				}
			break;
			
		case 4:
			printf("\nYou have entered 'LOVElution'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(4);
					break;
					
					
				case 2:
					unitSong(4);
					break;
				}
			break;
			
		case 5:
			printf("\nYou have entered 'EVOLution'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(5);
					break;
					
					
				case 2:
					unitSong(5);
					break;
				}
			break;
			
		case 6:
			printf("\nYou have entered 'NXT'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(6);
					break;
					
					
				case 2:
					unitSong(6);
					break;
				}
			break;
			
		case 7:
			printf("\nYou have entered 'Aria'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(7);
					break;
					
					
				case 2:
					unitSong(7);
					break;
				}
			break;
			
		case 8:
			printf("\nYou have entered 'GLOW'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(8);
					break;
					
					
				case 2:
					unitSong(8);
					break;
				}
			break;
			
		case 11:
			printf("You have entered 'Assemble'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(9);
					break;
					
					
				case 2:
					unitSong(11);
					break;
				}
			break;
			
		case 12:
			printf("\nYou have entered 'Assemble 24'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(10);
					break;
					
					
					
				case 2:
					unitSong(12);
					break;
				}
			break;
			
		case 9:
			printf("\nYou have entered 'Visionary Vision'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);

			
			switch(z){
				case 1:
					unitMember(11);
					break;
					
					
				case 2:
					unitSong(9);
					break;
				}
			break;
			
		case 10:
			printf("\nYou have entered 'Hatchi!'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);
			
			switch(z){
				case 1:
					unitMember(12);
					break;
					
					
					
				case 2:
					unitSong(10);
					break;
				}
			break;
			
			case 13:
			printf("\nYou have entered 'Other Featured Songs'");
			printf("\n\n[1]Members\n[2]Songs\n");
			printf("\nEnter: ");
			scanf("%d", &z);
			
			switch(z){
				case 1:
					unitMember(13);
					break;
					
					
					
				case 2:
					unitSong(13);
					break;
				}
			break;
			
		default:
			printf("\nPlease pick according to the given numbers");
			break;
	}
	
return y;
}


int memberInfo(int b){
	
switch(b){
	case 1:
		printf("\nBirth Name: Yoon Seo Yeon\nPosition: Vocalist\nBirthday: August 6, 2003\nZodiac Sign: Leo\nHeight: 160 cm\nWeight: N/A\nBlood Type: B\nMBTI Type: ISFP\nNationality: Korean\nRepresentative Emoji: Puppy\nRepresentative Color: Dodger Blue (#1E90FF)\nDebut Subunit and Album: ASSEBMLE");
		break;
		
	case 2:
		printf("\nBirth Name: Jeong Hye Rin\nPosition: Main Danceer\nBirthday: April 12, 2007\nZodiac Sign: Aries\nHeight: 161 cm\nWeight: N/A\nBlood Type: B\nMBTI Type: ESTP\nNationality: Korean\nRepresentative Emoji: Cat\nRepresentative Color: Electric Purple (#BF00FF)\nDebut Subunit and Album: Acid Angel from Asia, ACCESS");
		break;
		
	case 3:
		printf("\nBirth Name: Lee JiWoo\nPosition: Main Vocalist\nBirthday: October 24, 2005\nZodiac Sign: Scorpio\nHeight: 172 cm\nWeight: 48 kg\nBlood Type: O\nMBTI Type: INTP\nNationality: Korean\nRepresentative Emoji: Bear\nRepresentative Color: Lemon Yellow (#FAFA33)\nDebut Subunit and Album: ASSEMBLE");
		break;
		
	case 4:
		printf("\nBirth Name: Kim Cheo Yeon\nPosition: N/A\nBirthday: December 4, 2004\nZodiac Sign: Sagittaruis\nHeight: 170 cm\nWeight: 52 kg\nBlood Type: B\nMBTI Type: ESFP-A\nNationality: Korean\nRepresentative Emoji: Peach\nRepresentative Color: Atlantic Green (#66CC33)\nDebut Subunit and Album: ASSEMBLE");
		break;
		
	case 5:
		printf("\nBirth Name: Kim Yoo Yeon\nPosition: Leader, Visual\nBirthday: February 9, 2001\nZodiac Sign: Aquarius\nHeight: 165 cm\nWeight: 46 kg\nBlood Type: B\nMBTI Type: INTP\nNationality: Korean\nRepresentative Emoji: Rabbit\nRepresentative Color: Opera Pink (#EC118F)\nDebut Subunit and Album: Acid Angel from Asia, ACCESS");
		break;
		
	case 6:
		printf("\nBirth Name: Kim Soo Min\nPosition: Vocalist\nBirthday: October 3, 2007\nZodiac Sign: Libra\nHeight: 160 cm\nWeight: N/A\nBlood Type: AB\nMBTI Type: ENTP\nNationality: Korean\nRepresentative Emoji: Squirrel\nRepresentative Color: Mauvelous (!EF98AA)\nDebut Subunit and Album: ASSEMBLE");
		break;
		
	case 7:
		printf("\nBirth Name: Kim Jun Seo\nPosition: Vocalist, Rapper, Dancer\nBirthday: October 13, 2002\nZodiac Sign: Libra\nHeight: 166 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: INFP\nNationality: Korean\nRepresentative Emoji: Black Cat\nRepresentative Color: Cadet Blue (#5F9EA0)\nDebut Subunit and Album: Acid Angel from Asia, ACCESS");
		break;
		
	case 8:
		printf("\nBirth Name: Gong Yu Bin\nPosition: Main Dancer, Vocalist, Visual\nBirthday: February 3, 2005\nZodiac Sign: Aquarius\nHeight: 164 cm\nWeight: N/A\nBlood Type: B\nMBTI Type: ISTP\nNationality: Korean\nRepresentative Emoji: Tiger\nRepresentative Color: Misty Rose (#FFE4E1)\nDebut Subunit and Album: Acid Angel from Asia, ACCESS");
		break;
		
	case 9:
		printf("\nBirth Name: Yamada Kaede\nPosition: Main Dancer, Vocalist, Rapper, Visual\nBirthday: December 20, 2005\nZodiac Sign: Sagittarius\nHeight: 160 cm\nWeight: N/A\nBlood Type: A\nMBTI Type: INFP\nNationality: Japanese\nRepresentative Emoji: Maple Leaf\nRepresentative Color: Sunglow Yellow (#FFCC33)\nDebut Subunit and Album: ASSEMBLE");
		break;
		
	case 10:
		printf("\nBirth Name: Seo Da Hyun\nPosition: Main Vocalist\nBirthday: January 8, 2003\nZodiac Sign: Capricorn\nHeight: 160,1 cm\nWeight: N/A\nBlood Type: A\nMBTI Type: ISFP\nNationality: Korean\nRepresentative Emoji: Cherry\nRepresentative Color: Lavender Rose (#FBA0E3)\nDebut Subunit and Album: ASSEMBLE");
		break;
		
	case 11:
		printf("\nBirth Name: Kamimito Kotone\nPosition: Main Dancer, Rapper\nBirthday: March 10, 2004\nZodiac Sign: Pisces\nHeight: 161.5 cm\nWeight: N/A\nBlood Type: AB\nMBTI Type: ENFP\nNationality: Japanese\nRepresentative Emoji: Seal\nRepresentative Color: Golden Yellow (#FFDF00)\nDebut Subunit and Album: EVOLution, MUJUK");
		break;
		
	case 12:
		printf("\nBirth Name: Kwak Yeon Ji\nPosition: N/A\nBirthday: January 8, 2008\nZodiac Sign: Capricorn\nHeight: 162.3 cm\nWeight: N/A\nBlood Type: A\nMBTI Type: ENFP\nNationality: Korean\nRepresentative Emoji: Teddy Bear\nRepresentative Color: Royal Blue (#4169E1)\nDebut Subunit and Album: EVOLution, MUJUK");
		break;
		
	case 13:
		printf("\nBirth Name: Hsu Nien\nPosition: Rapper\nBirthday: June 2, 2003\nZodiac Sign: Gemini\nHeight: 169 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: ESFP\nNationality: Taiwanese\nRepresentative Emoji: Strawberry\nRepresentative Color: Neon Carrot (#FFA343)\nDebut Subunit and Album: LOVElution, MUHAN");
		break;
		
	case 14:
		printf("\nBirth Name: Park So Hyun\nPosition: Vocalist, Rapper, Dancer\nBirthday: October 1, 2002\nZodiac Sign: Libra\nHeight: 167 cm - 168 cm\nWeight: N/A\nBlood Type: B\nMBTI Type: INTJ\nNationality: Korean\nRepresentative Emoji: Wolf\nRepresentative Color: Egyptian Blue (#1034A6)\nDebut Subunit and Album: LOVElution, MUHAN");
		break;
		
	case 15:
		printf("\nBirth Name: Zhou Xin Yu\nPosition: Visual\nBirthday: May 25, 2002\nZodiac Sign: Gemini\nHeight: 174 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: ENTP\nNationality: Chinese\nRepresentative Emoji: Fox\nRepresentative Color: Venetian red (#C80815)\nDebut Subunit and Album: LOVElution, MUHAN");
		break;
		
	case 16:
		printf("\nBirth Name: Koma Mayu\nPosition: N/A\nBirthday: May 12, 2002\nZodiac Sign: Taurus\nHeight: N/A\nWeight: N/A\nBlood Type: B\nMBTI Type: ENFJ\nNationality: Japanese\nRepresentative Emoji: Bunny\nRepresentative Color: Vivid Tangerine (#FFA089)\nDebut Subunit and Album: EVOLution, MUJUK");
		break;
		
	case 17:
		printf("\nBirth Name: Kawakami Lynn\nPosition: Main Dancer\nBirthday: April 12, 2006\nZodiac Sign: Aries\nHeight: 171 cm - 172 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: ISFP\nNationality: Japanese\nRepresentative Emoji: Shark\nRepresentative Color: Violet Blue (#AB62B4)\nDebut Subunit and Album: NXT, Just Do It");
		break;
		
	case 18:
		printf("\nBirth Name: Joo Bin\nPosition: Visual\nBirthday: January 16, 2009\nZodiac Sign: Capricorn\nHeight: 166 cm - 167 cm\nWeight: N/A\nBlood Type: B\nMBTI Type: ISFJ\nNationality: Korean\nRepresentative Emoji: Chick\nRepresentative Color: Conifer (#B7F54A)\nDebut Subunit and Album: NXT, Just Do It");
		break;
		
	case 19:
		printf("\nBirth Name: Jeong Ha Yeon\nPosition: Dancer, Vocalist\nBirthday: August 1, 2007\nZodiac Sign: Leo\nHeight: 166 cm\nWeight: N/A\nBlood Type: A\nMBTI Type: ENTP\nNationality: Korean\nRepresentative Emoji: Hedgehog\nRepresentative Color: Madium Turqoise (#52D9BB)\nDebut Subunit and Album: NXT, Just Do It");
		break;
		
	case 20:
		printf("\nBirth Name: Park Shi ON\nPosition: Main Vocalist\nBirthday: April 3, 2006\nZodiac Sign: Aries\nHeight: N/A\nWeight: N/A\nBlood Type: A\nMBTI Type: ESFP\nNationality: Korean\nRepresentative Emoji: Bread\nRepresentative Color: Violet Red (#FF428A)\nDebut Subunit and Album: NXT, Just Do It");
		break;
		
	case 21:
		printf("\nBirth Name: kim Chae Won\nPosition: N/A\nBirthday: May 2, 2007\nZodiac Sign: Taurus\nHeight: N/A\nWeight: N/A\nBlood Type: AB\nMBTI Type: INTP\nNationality: Korean\nRepresentative Emoji: Pink Bow\nRepresentative Color: Light Wisteria (#C7A3DF)\nDebut Subunit and Album: ASSEMBLE 24");
		break;
		
	case 22:
		printf("\nBirth Name: Bunraksa Pirada\nPosition: N/A\nBirthday: November 30, 2006\nZodiac Sign: Sagittarius\nHeight: 168 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: INFJ\nNationality: Thai\nRepresentative Emoji: Snowman\nRepresentative Color: Dark Sea Green (#7BBA8D)\nDebut Subunit and Album: ASSEMBLE 24");
		break;
		
	case 23:
		printf("\nBirth Name: Jeong Hae Rin\nPosition: Maknae\nBirthday: June 11, 2010\nZodiac Sign: Gemini\nHeight: N/A\nWeight: N/A\nBlood Type: O\nMBTI Type: ESTP\nNationality: Korean\nRepresentative Emoji: Sun\nRepresentative Color: Light Cyan (#CFF4FF)\nDebut Subunit and Album: ASSEMBLE 24");
		break;
		
	case 24:
		printf("\nBirth Name: Ji Suh Yeon\nPosition: Dancer\nBirthday: February 13, 2004\nZodiac Sign: Aquarius\nHeight: 167 cm\nWeight: N/A\nBlood Type: O\nMBTI Type: ISTP\nNationality: Korean\nRepresentative Emoji: Swan\nRepresentative Color: Rajah Orange (#FEAA61)\nDebut Subunit and Album: ASSEMBLE 24");
				
}
	
return b;
}

int subUnit(int c){
	
	switch(c){
		
	case 1:
		printf("\nSub Units\n\n1.+(KR)ystal Eyes\n2.ACID EYES\n3. LOVElution");
		break;
		
	case 2:
		printf("\nSub Units\n\n1. Acid Angel from Asia\n2. ACID EYES\n3. LOVElution\n4. Visionary Vision");
		break;
		
	case 3:
		printf("\nSub Units\n\n1. +(KR)ystal Eyes\n2. ACID EYES\n3. EVOLution\n4. Aria\n5. Hatchi!");
		break;
		
	case 4: 
		printf("\nSub Units\n\n1. +(KR)ystal Eyes\n2. ACID EYES\n3. EVOLution\n4. Aria\n5. Hatchi!");
		break;
		
	case 5:
		printf("\nSub Untis\n\n1. Acid Angel from Asia\n2. ACID EYES\n3. EVOlution\n4. Visionay Vision\n5. Hatchi!");
		break;
		
	case 6:
		printf("\nSub Units\n\n1. +(KR)ystal Eyes\n2. ACID EYES\n3. EVOLution\n4. Hatchi!");
		break;
		
	case 7:
		printf("\nSub Units\n\n1. Acid Angel foomr Asia\n2. ACID EYES\n3. EVOLution\n4. Visionary Vision");
		break;
		
	case 8:
		printf("\nSub Units\n\n1. Acid Angel foomr Asia\n2. ACID EYES\n3. EVOLution\n4. Visionary Vision");
		break;
		
	case 9:
		printf("\nSub Units\n\n1. LOVElution\n2. Aria\n3. Visionary Vision");
		break;
		
	 case 10:
	 	printf("\nSub Units\n\n1. LOVElution\n2. Aria");
	 	break;
	 	
	case 11:
		printf("\nSub Units\n\n1. EVOLution\n2. Visionary Vision\n3. Hatchi!");
		break;
		
	case 12:
		printf("\nSub Units\n\n1. EVOLution\n2. Visionary Vision");
		break;
		
	case 13:
		printf("\nSub Units\n\n1. LOVElution\n2. Aria\n3. Visionary Vision");
		break;
		
	case 14:
		printf("\nSub Units\n\n1. LOVElution\n2. Visionary Vision");
		break;
		
	case 15:
		printf("\nSub Units\n\n1. LOVElution\n2. Visionary Vision");
		break;
		
	case 16:
		printf("\nSub Units\n\n1. EVOLution\n2. Hatchi!");
		break;
		
	case 17:
		printf("\nSub Units\n\n1. NXT\n2. Visionary Vision");
		break;
		
	case 18:
		printf("\nSub Units\n\n1. NXT");
		break;
		
	case 19:
		printf("\nSub Units\n\n1. NXT");
		break;
		
	case 20:
		printf("\nSub Units\n\n1. NXT\n2. Hatchi!");
		break;
		
	case 21:
		printf("\nSub Units\n\n1. Glow\n2. Hatchi!");
		break;
		
	case 22:
		printf("\nSub Units\n\n1. Glow");
		break;
		
	case 23:
		printf("\nSub Units\n\n1. Glow");
		break;
		
	case 24:
		printf("\nSub Units\n\n1. Glow\n2/ Visionary Vision");
		break;
		
	}
	
return c;
}


int hausHistory(int d){
	
	switch(d){
		
	case 1:
		printf("\nHAUS History\n\n1. HAUS 1\n2. Seongsu HAUS\n3. MODU HAUS\n4. MODU HAUS");
		break;
		
	case 2:
		printf("\nHAUS History\n\n1.H AUS 1\n2. HAUS 2\n3. Seongsu HAUS\n4. Namsan HAUS\n5. MOD Forest HAUS\n6. Individual Acoomodation");
		break;
		
	case 3:
		printf("\nHAUS History\n\n1. HAUS 1\n2. Namsan HAUS\n3. MODU HAUS\n4. Individual Accomodation");
		break;
		
	case 4: 
		printf("\nHAUS History\n\n1. HAUS 1\n2. HAUS 2\n3. Seongsu HAUS\n4. Namsan HAUS\n5. Mod Forest HAUS\n6. Cookie HAUS");
		break;
		
	case 5:
		printf("\nHAUS History\n\n1. HAUS 1\n2. Seongsu HAUS\n3. Yeouido HAUS\n4. Namsan HAUS\n5. Cookie HAUS\n6. Individual Accomodation");
		break;
		
	case 6:
		printf("\nHAUS History\n\n1. HAUS 2\n2. Seongsu HAUS\n3. Namsan HAUS\n4. MODU HAUS");
		break;
		
	case 7:
		printf("\nHAUS History\n\n1. HAUS 2\n2. Seongsu HAUS\n3. Yeouido HAUS\n4. Namsan HAUS\n5. MOD Forest HAUS");
		break;
		
	case 8:
		printf("\nHAUS History\n\n1. HAUS 1\n2. Seongsu HAUS\n3. Yeouido HAUS\n4. Namsan HAUS\n5. MOD Forest HAUS\n6. Cookie HAUS");
		break;
		
	case 9:
		printf("\nHAUS History\n\n1. Seongsu HAUS\n2. Namsan HAUS\n3. Cookie HAUS");
		break;
		
	 case 10:
		printf("\nHAUS History\n\n1. Seongsu HAUS\n2. Namsan HAUS\n3. MODU HAUS\n4. MODU HAUS");
		break;
	 	
	case 11:
		printf("\nHAUS History\n\n1. Tokyo HAUS\n2. Yeouido HAUS\n3. Namsan HAUS\n4. MOD Forest HAUS");
		break;
		
	case 12:
		printf("\nHAUS History\n\n1. Tokyo HAUS\n2. Yeouido HAUS\n3. Seongsu HAUS\n4. Namsan HAUS\n5. Cookie HAUS\n6. Cookie HAUS");
		break;
		
	case 13:
		printf("\nHAUS History\n\n1. Yeouido HAUS\n2. Namsan HAUS\n3. Cookie HAUS");
		break;
		
	case 14:
		printf("\nHAUS History\n\n1. Yeouido HAUS\n2. Namsan HAUS\n3. Cookie HAUS\n4. Individual Accomodation");
		break;
		
	case 15:
		printf("\nHAUS History\n\n1. MODU HAUS");
		break;
		
	case 16:
		printf("\nHAUS History\n\n1. Cookie HAUS");
		break;
		
	case 17:
		printf("\nHAUS History\n\n1. Cookie HAUS\n2. MOD Forest HAUS");
		break;
		
	case 18:
		printf("\nHAUS History\n\n1. MODU HAUS");
		break;
		
	case 19:
		printf("\nHAUS History\n\n1. MOD Forest HAUS");
		break;
		
	case 20:
		printf("\nHAUS History\n\n1. MODU HAUS\n2. MOD Forest HAUS");
		break;
		
	case 21:
		printf("\nHAUS History\n\n1. Cookie HAUS");
		break;
		
	case 22:
		printf("\nHAUS History\n\n1. MODU HAUS");
		break;
		
	case 23:
		printf("\nHAUS History\n\n1. MOD Forest HAUS");
		break;
		
	case 24:
		printf("\nHAUS History\n\n1. MODU HAUS");
		break;
		
	}

return d;
	
}


int pickMember(){
	
switch(y){
	case 1:
		printf("\nYou have entered S1 Yoon SeoYeon");
		printf("\nSelect what you want to learn about S1 SeoYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(1);
				break;
				
			case 2:
				subUnit(1);
				break;
				
			case 3:
				hausHistory(1);
				break;
				
			default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 2:
		printf("\nYou have entered S2 Jeong HyeRin");
		printf("\nSelect what you want to learn about S2 HyeRin\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(2);
				break;
				
			case 2:
				subUnit(2);
				break;
				
			case 3:
				hausHistory(2);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 3:
		printf("\nYou have entered S3 Lee JiWoo");
		printf("\nSelect what you want to learn about S3 JiWoo\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(3);
				break;
				
			case 2:
				subUnit(3);
				break;
				
			case 3:
				hausHistory(3);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 4:
		printf("\nYou have entered S4 Kim ChaeYeon");
		printf("\nSelect what you want to learn about S4 ChaeYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(4);
				break;
				
			case 2:
				subUnit(4);
				break;
				
			case 3:
				hausHistory(4);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 5:
		printf("\nYou have entered S5 Kim YooYeon");
		printf("\nSelect what you want to learn about S4 YooYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(5);
				break;
				
			case 2:
				subUnit(5);
				break;
				
			case 3:
				hausHistory(5);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 6:
		printf("\nYou have entered S6 Kim SooMin");
		printf("\nSelect what you want to learn about S6 SooMin\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(6);
				break;
				
			case 2:
				subUnit(6);
				break;
				
			case 3:
				hausHistory(6);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 7:
		printf("\nYou have entered S7 Kim NaKyoung");
		printf("\nSelect what you want to learn about S7 NaKyoung\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(7);
				break;
				
			case 2:
				subUnit(7);
				break;
				
			case 3:
				hausHistory(7);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 8:
		printf("\nYou have entered S8 Gong YuBin");
		printf("\nSelect what you want to learn about S8 YooBin\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(8);
				break;
				
			case 2:
				subUnit(8);
				break;
				
			case 3:
				hausHistory(8);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 9:
		printf("\nYou have entered S9 Kaede");
		printf("\nSelect what you want to learn about S9 Kaede\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(9);
				break;
				
			case 2:
				subUnit(9);
				break;
				
			case 3:
				hausHistory(9);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 10:
		printf("\nYou have entered S10 Seo DaHyun");
		printf("\nSelect what you want to learn about S10 DahYun\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(10);
				break;
				
			case 2:
				subUnit(10);
				break;
				
			case 3:
				hausHistory(10);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 11:
		printf("\nYou have entered S11 Kotone");
		printf("\nSelect what you want to learn about S11 Kotone\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(11);
				break;
				
			case 2:
				subUnit(11);
				break;
				
			case 3:
				hausHistory(11);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 12:
		printf("\nYou have entered S12 Kwak YeonJi");
		printf("\nSelect what you want to learn about S12 YeonJi\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(12);
				break;
				
			case 2:
				subUnit(12);
				break;
				
			case 3:
				hausHistory(12);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 13:
		printf("\nYou have entered S13 Nien");
		printf("\nSelect what you want to learn about S13 Nien\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(13);
				break;
				
			case 2:
				subUnit(13);
				break;
				
			case 3:
				hausHistory(13);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 14:
		printf("\nYou have entered S14 Park SoHyun");
		printf("\nSelect what you want to learn about S1 SeoYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(14);
				break;
				
			case 2:
				subUnit(14);
				break;
				
			case 3:
				hausHistory(14);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 15:
		printf("\nYou have entered S15 Xinyu");
		printf("\nSelect what you want to learn about S15 Xinyu\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(15);
				break;
				
			case 2:
				subUnit(15);
				break;
				
			case 3:
				hausHistory(15);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 16:
		printf("\nYou have entered S16 Mayu");
		printf("\nSelect what you want to learn about S16 Mayu\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(16);
				break;
				
			case 2:
				subUnit(16);
				break;
				
			case 3:
				hausHistory(16);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 17:
		printf("\nYou have entered S17 Lynn");
		printf("\nSelect what you want to learn about S17 Lynn\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(17);
				break;
				
			case 2:
				subUnit(17);
				break;
				
			case 3:
				hausHistory(17);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 18:
		printf("\nYou have entered S18 JooBin");
		printf("\nSelect what you want to learn about S18 JooBin\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(18);
				break;
				
			case 2:
				subUnit(18);
				break;
				
			case 3:
				hausHistory(18);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 19:
		printf("\nYou have entered S19 Jeong HaYeon");
		printf("\nSelect what you want to learn about S9 HaYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(19);
				break;
				
			case 2:
				subUnit(19);
				break;
				
			case 3:
				hausHistory(19);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 20:
		printf("\nYou have entered S20 Park ShiOn");
		printf("\nSelect what you want to learn about S20 ShiOn\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(20);
				break;
				
			case 2:
				subUnit(20);
				break;
				
			case 3:
				hausHistory(20);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 21:
		printf("\nYou have entered S21 Kim ChaeWon");
		printf("\nSelect what you want to learn about S21 ChaeWon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(21);
				break;
				
			case 2:
				subUnit(21);
				break;
				
			case 3:
				hausHistory(21);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	case 22:
		printf("\nYou have entered S22 Sullin");
		printf("\nSelect what you want to learn about S22 Sullin\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(22);
				break;
				
			case 2:
				subUnit(22);
				break;
				
			case 3:
				hausHistory(22);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	 case 23:
	 	printf("\nYou have entered S23 SeoAh");
		printf("\nSelect what you want to learn about S23 SeoAh\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(23);
				break;
				
			case 2:
				subUnit(23);
				break;
				
			case 3:
				hausHistory(23);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
	 	break;
	 	
	case 24:
		printf("\nYou have entered S24 JiYeon");
		printf("\nSelect what you want to learn about S24 JiYeon\n");
		printf("\n[1]Basic Information\n[2]Sub Units\n[3]Haus History");
		printf("\n\nEnter: ");
		scanf("%d", &b);
		
		switch(b){
			case 1:
				memberInfo(24);
				break;
				
			case 2:
				subUnit(24);
				break;
				
			case 3:
				hausHistory(24);
				break;
				
						default:
				printf("\nPlease Follow Instructions!");
		}
		break;
		
	default:
		printf("\ntripleS only has 24 members!");
		break;
		
}
return y;
}

void info(){

    printf("\ntripleS (Social Sonyo Seoul) is an innovative K-pop girl group that has been making waves in the industry "
           "with their unique approach and captivating artistry. Formed by the entertainment company MODHAUS, "
           "tripleS debuted with a vision that redefines traditional girl group dynamics. Their name reflects a "
           "commitment to social connection and a strong sense of community, with \"Social\" emphasizing their "
           "interactive engagement with fans.\n\n"
           
           "What sets tripleS apart is their groundbreaking member selection process, which invites fans to have a say "
           "in shaping the group�s lineup and concepts. This participatory model creates a sense of ownership and "
           "connection, allowing fans to feel directly involved in the group's journey. Each member brings her own "
           "distinctive talents and personalities, contributing to a diverse and dynamic collective that showcases a "
           "wide range of musical styles and performance abilities.\n\n"
           
           "Musically, tripleS blends various genres, including pop, R&B, and electronic, producing catchy tracks that "
           "resonate with listeners. Their debut songs are characterized by powerful choreography, infectious melodies, "
           "and thought-provoking lyrics, all of which reflect the group's youthful energy and artistic ambition.\n\n"
           
           "Visually, tripleS captivates with striking aesthetics and fashion-forward concepts, continually evolving "
           "their image with each comeback. Their music videos are known for their high production values, combining "
           "storytelling with stunning visuals that enhance the overall experience.\n\n"
           
           "As they continue to explore new artistic directions and push the boundaries of the K-pop genre, tripleS "
           "is quickly establishing itself as a trailblazer in the industry. With a growing fanbase and a commitment "
           "to authenticity and innovation, tripleS is poised to become a significant force in the world of K-pop, "
           "captivating hearts and minds both in South Korea and globally.\n");
           
}

void modHaus(){
	
    printf("\nMODHAUS is a cutting-edge entertainment company at the forefront of the K-pop industry, "
           "known for its innovative approach to talent management and artist development. Founded with "
           "a vision to challenge conventional norms, MODHAUS emphasizes creativity, collaboration, and "
           "fan engagement in its operations.\n\n"
           
           "One of the company�s standout features is its participatory model, which allows fans to actively "
           "influence the direction of their artists. This unique approach is exemplified by the formation of "
           "groups like TripleS, where fans play a pivotal role in member selection and concept creation. This "
           "level of engagement fosters a strong sense of community and loyalty, bridging the gap between artists "
           "and their supporters.\n\n"
           
           "MODHAUS is dedicated to nurturing individual talents within its roster, encouraging each artist to "
           "express their unique identity while contributing to the collective dynamic of the group. With a focus "
           "on high-quality production values, MODHAUS aims to create visually stunning content that resonates with "
           "audiences on multiple levels.\n\n"
           
           "The company is committed to innovation, not just in music, but also in the overall entertainment experience. "
           "By embracing new technologies and trends, MODHAUS is reshaping the landscape of K-pop, paving the way for "
           "a new generation of artists who are not only performers but also active participants in their creative journeys.\n\n"
           
           "With a mission to redefine the standards of the entertainment industry, MODHAUS is poised to make a "
           "significant impact, creating a lasting legacy while bringing fresh talent and innovative ideas to the "
           "forefront of K-pop.\n");
	
}

int main(){
	
int continueloop = 1;
int e = 1;


while(continueloop){
    
switch(e){

case 1:
printf("Welcome to the tripleS information system where you can see information from the Albums, Subunits, and from the Members!");
printf("\nPlease pick what you want to learn about\n\n[1]About tripleS\n[2]Subunits and Albums\n[3]Members\n[4]About MODHAUS\n[5]Exit\n");
printf("\nEnter: ");
scanf("%d", &x);    
continueloop=0;

switch(x){
	
	case 1:
		info();
		continueloop=1;
		break;
		
	case 2:
		printf("\ntripleS has 10 Subunits (Acid Angel from Asia, +(KR)ystal Eyes, Acid Eyes, LOVElution, EVOLution, NXT, Aria, GLOW, Visionary Vision, and Hatchi!) and 2 Albums (Assemble and Assemble 24), Pleasse pick which Album or Subunit you would want to know more about\n\nSubunits\n[1]Acid Angel from Asia\n[2]+(KR)ystal Eyes\n[3]Acid Eyes\n[4]LOVElution\n[5]EVOLution\n[6]NXT\n[7]Aria\n[8]GLOW\n[9]Visionary Vision\n[10]Hatchi!\n\nAlbums\n[11]Assemble\n[12]Assemble 24\n[13]Other Featured Songs");
		printf("\n\nEnter: ");
		scanf("%d", &y);
		pickUnit();
		continueloop=1;
		break;
		
	case 3:
		printf("\nPlease pick members according to their S assignments\n\n[1]S1 Yoon SeoYeon\n[2]S2 Jeong HyeRin\n[3]S3 Lee JiWoo\n[4]S4 Kim ChaeYeon\n[5]S5 Kim YooYeon\n[6]S6 Kim SooMin\n[7]S7 Kim NaKyoung\n[8]S8 Gong YuBin\n[9]S9 Kaede\n[10]S10 Seo DaHyun\n[11]S11 Kotone\n[12]S12 Kwak YeonJi\n[13]S13 Nien\n[14]S14 Park SoHyun\n[15]S15 Xinyu\n[16]S16 Mayu\n[17]S17 Lynn\n[18]S18 JooBin\n[19]S19 Jeong HaYeon\n[20]S20 Park ShiOn\n[21]S21 Kim ChaeWon\n[22]S22 Sullin\n[23]S23 SeoAh\n[24]S24 JiYeon");
		printf("\n\nEnter: ");
		scanf("%d", &y);
		pickMember();
		continueloop=1;
		break;
		
	case 4:
		modHaus();
		continueloop=1;
		break;
		
	case 5:
	    printf("\nExiting the program!");
	    continueloop=0;
	    break;
		
	default:
		printf("\nPlease follow instructions! Or Else Sir Tasic Will Visit you at 3 AM to teach you Calculus and Research");
		continueloop=1;
		break;
}       

        
    if(continueloop){
        int goBack;
        printf("\n\nDo you want to go back to the main menu?\n[1]Yes\n[2]No");
        printf("\n\nEnter: ");
        scanf("%d", &goBack);
        printf("\n");
        printf("\n");
                
        if(goBack==2){
        	printf("\nExiting the Program!");
            continueloop = 0; 
            
        }
        }
    
}


}

return 0;
}
