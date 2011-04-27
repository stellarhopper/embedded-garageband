#include "myproject.h"

char drum_piano_guitar=0;
char real_virtual = 0;
char drum_piano_guitar_rv=0;
char piano_type=0;
char guitar_type=0;
char audio_termination=0;
char record_notes = FALSE;
char play_recorded_notes=FALSE;

char rv_loop = FALSE;
char wrv_loop = FALSE;
char piano_loop = FALSE;
char guitar_loop = FALSE;
char audio_loop = FALSE;
char record_loop = FALSE;

void print_welcome_message(void)
{
	printf("\n\r***********************************************************************\n\r");
	printf("************  EMBEDDED SYSTEMS DESIGN : SPRING 2011 :      ************\n\r");
	printf("************  Project Embedded Garageband                  ************\n\r");
	printf("************  Maulik Kapuria, Niket Shah & Vishal Verma    ************\n\r");
	printf("***********************************************************************\n\r\n\n\r");
}

void print_rv_screen(void)
{
	printf("\n\r--------------------------------------------------------------");
	printf("\n\rPlease select from one of the following options below:\n\n\n\r");
	printf("1. Play Real Instrument\n\r");
	printf("2. Play Virtual Instrument\n\n\r");
}

void print_sel_real_screen(void)
{
	printf("\n\r--------------------------------------------------------------");
	printf("\n\rYou have Selected Real Instruments. The following Real instruments are supported\n\rPlease select from one of the following options below:\n\r\n\n\r");
	printf("1. Play Drums\n\r");
	printf("2. Play Piano\n\n\r");
}

void print_sel_virtual_screen(void)
{
	printf("\n\r--------------------------------------------------------------");
	printf("\n\rYou have Selected Virtual Instruments. The following Virtual instruments are supported\n\rPlease select from one of the following options below:\n\n\n\r");

	printf("1. Play Drums\n\r");
	printf("2. Play Piano\n\r");
	printf("3. Play Guitar\n\n\r");
}


void print_sel_piano_types(void)
{
	printf("\n\r--------------------------------------------------------------");

	printf("\n\rThe following Piano Types are supported\n\rPlease select from one of the following options below:\n\n\n\r");

	printf("1. Play Acoustic Grand Piano\n\r");
	printf("2. Play Bright Acoustic Piano\n\r");
	printf("3. Play Electric Grand Piano\n\r");
	printf("4. Play Honky Tonky Piano\n\r");
	printf("5. Play Electric Piano 1\n\r");
	printf("6. Play Electric Piano 2\n\n\r");
}


void print_sel_guitar_types(void)
{
	printf("\n\r--------------------------------------------------------------\n\r");
	printf("The following Guitar Types are supported\n\rPlease select from one of the following options below:\n\r");

	printf("1. Play Acoustic Guitar (Nylon)\n\r");
	printf("2. Play Acoustic Guitar (Steel)\n\r");
	printf("3. Play Electric Guitar (Jazz)\n\r");
	printf("4. Play Electric Guitar (Clean)\n\r");
	printf("5. Play Electric Guitar (Muted)\n\r");
	printf("6. Play Overdriven Guitar\n\r");
	printf("7. Play Distortion Guitar\n\r");
	printf("8. Play Guitar Harmonics\n\n\r");
}

void print_audio_termination_screen(void)
{
	printf("\n\r--------------------------------------------------------------");
	printf("\n\rWhere do you Want to play your MIDI notes?????\n\n\r\n\r");
	printf("Please select from one of the following options below:\n\r\n\r");
	printf("1. Play on computer (using MIDI synthesizer software in it)\n\r");
	printf("2. Play on attached speaker (using VS1053 MIDI Decoder)\n\n\r");
}

void print_record_screen(void)
{
	printf("\n\r--------------------------------------------------------------");
	printf("\n\rWould you like to record your music?????\n\n\r\n\r");
	printf("Please select from one of the following options below:\n\r\n\r");
	printf("1. Play & Record on SD Card\n\r");
	printf("2. Play without recording on SD card\n\r");
	printf("3. PlayBack my previously stored Music\n\n\r");
}

char expect_value(char max_number)
{
	char bufsize_ascii[5];
	char bufsize={0};
	char mybuf[2]={0};

	bzero(mybuf,2);

	printf("Please Enter one of the options, VALID [1-");
	sprintf(mybuf,"%d",max_number);

	printf("%s",mybuf);

	printf("]:");

	bzero(bufsize_ascii,5);																		//zero out buffer

	gets(bufsize_ascii);																		//wait for string from user
	bufsize = atoi(bufsize_ascii);																//convert to int

	clear_screen();

	if(bufsize > 0 && bufsize <=max_number)
	{
		//clear_screen();
		//printf("Valid Input\n\r");
		return bufsize;
	}
	else
	{
		//clear_screen();
		//printf("Invalid Input\n\r");
		//printf("Press any key to continue...\n\r");
		//gets(bufsize_ascii);
		//clear_screen();
		return 0;
	}

}


void get_audio_termination(void)
{
	char mybuf[4];
	char user_data=0;

	while(audio_loop == TRUE)
	{
		print_audio_termination_screen();
		user_data = expect_value(2);

		if( user_data != 0)
		{	//Goes here if data is valid;
			bzero(mybuf,4);
			sprintf(mybuf,"%d",user_data);
			if(user_data == 1)
			{
				printf("\n\n\rPC will be used as Audio Termination. Please start a MIDI Software in the PC\n\r");
				printf("Please be aware that the only way to come out of this MODE is RESET. \n\r");
				audio_termination = PC;
			}
			else
			{
				printf("VS1053 will be used as Audio Termination. Attach Headphones/Speaker to the audio jack on VS1053\n\r");
				audio_termination = VS1053;
			}
			break;	//break out of while loop
		}
		else
		{
			printf("INVALID DATA\n\r");
			//halMcuWaitMs(1000);
			clear_screen();
		}
	}
}


void get_record_option(void)
{
	char mybuf[4];
	char user_data=0;

	while(record_loop == TRUE)
	{
		print_record_screen();
		user_data = expect_value(3);

		if( user_data != 0)
		{	//Goes here if data is valid;
			bzero(mybuf,4);
			sprintf(mybuf,"%d",user_data);
			if(user_data == 1)
			{
				printf("\n\n\rNotes will be recorded on SDCARD\n\r");
				record_notes = TRUE;
			}
			else if(user_data == 2)
			{
				printf("\n\n\rNotes will NOT be recorded on SDCARD\n\r");
				record_notes = FALSE;


			}
			else
			{
				play_recorded_notes = TRUE;

				rv_loop = FALSE;
				wrv_loop= FALSE;
				guitar_loop=FALSE;
				piano_loop = FALSE;
				audio_loop=FALSE;
				record_loop=FALSE;
			}

			break;	//break out of while loop
		}
		else
		{
			printf("INVALID DATA\n\r");
			//halMcuWaitMs(1000);
			clear_screen();
		}
	}
}


void get_real_virtual(void)
{
	char mybuf[4];
	char user_data=0;

	while(rv_loop == TRUE)
	{
		print_rv_screen();
		user_data = expect_value(2);

		if( user_data != 0)
		{	//Goes here if data is valid;
			bzero(mybuf,4);
			sprintf(mybuf,"%d",user_data);
			//printf("User pressed");
			//printf("%s",mybuf);
			//printf("\n\r");

			switch(user_data)
			{
				case 1:
				{
					printf("\n\rReal Instruments Selected***\n\r");
					real_virtual = REAL_INSTRUMENT;
					break;
				}

				case 2:
				{
					printf("\n\r***Virtual Instruments Selected***\n\r");
					real_virtual = VIRTUAL_INSTRUMENT;
					break;
				}

				default:
					break;
			}

			break;	//break out of while loop
		}
		else
		{
			printf("INVALID DATA\n\r");
			//halMcuWaitMs(1000);
			clear_screen();
		}
	}
}


void select_within_real_virtual(void)
{

	char mybuf[4];
	char user_data=0;


	if(real_virtual == REAL_INSTRUMENT)
	{
		while(wrv_loop == TRUE)
		{
			print_sel_real_screen();
			user_data = expect_value(2);

				if( user_data != 0)
				{
					bzero(mybuf,4);
					sprintf(mybuf,"%d",user_data);
					//printf("User pressed");
					//printf("%s",mybuf);

					switch(user_data)
					{
						case 1:
						{
							printf("\n\r***Drum is the selected Instrument***\n\r");
							drum_piano_guitar_rv = DRUM_REAL_INSTRUMENT;
							drum_piano_guitar = DRUM;
							break;
						}

						case 2:
						{
							printf("***\n\rPiano is the selected Instrument***\n\r");
							drum_piano_guitar_rv = PIANO_REAL_INSTRUMENT;
							drum_piano_guitar = PIANO;
							break;
						}

						default:
							break;
					}

					break;
				}
				else
				{
					printf("INVALID DATA\n\r");
					//halMcuWaitMs(1000);
					clear_screen();
				}
		}
	}
	else if(real_virtual == VIRTUAL_INSTRUMENT) 	//Virtual Instrument
	{
		while(wrv_loop == TRUE)
		{
			print_sel_virtual_screen();
			user_data = expect_value(3);

				if( user_data != 0)
				{
					bzero(mybuf,4);
					sprintf(mybuf,"%d",user_data);
					//printf("User pressed");
					//printf("%s",mybuf);

					switch(user_data)
					{
						case 1:
						{
							printf("\n\r***Drum is the selected Virtual Instrument***\n\r");
							drum_piano_guitar_rv = DRUM_VIRTUAL_INSTRUMENT;
							drum_piano_guitar = DRUM;
							break;
						}

						case 2:
						{
							printf("\n\r***Piano is the selected Virtual Instrument***\n\r");
							drum_piano_guitar_rv = PIANO_VIRTUAL_INSTRUMENT;
							drum_piano_guitar = PIANO;
							break;
						}

						case 3:
						{
							printf("\n\r***Guitar is the selected Virtual Instrument***\n\r");
							drum_piano_guitar_rv = GUITAR_VIRTUAL_INSTRUMENT;
							drum_piano_guitar = GUITAR;
							break;
						}

						default:
							break;
					}


					break;
				}
				else
				{
					printf("INVALID DATA\n\r");
					//halMcuWaitMs(1000);
					clear_screen();
				}

		}
	}

}


void select_sub_instruments(void)
{
	if(drum_piano_guitar == DRUM)
	{
		printf("No suboptions for Drums available\n\r");
	}
	else
	{
		//printf("Suboptions for PIANO/GUITAR available\n\r");
		switch(drum_piano_guitar)
		{
			case PIANO:
			{
				select_piano_type();
				break;
			}

			case GUITAR:
			{
				select_guitar_type();
				break;
			}

			default:
				break;
		}
	}
}


void select_piano_type(void)
{

	char mybuf[4];
	char user_data=0;

	while(piano_loop == TRUE)
			{
				print_sel_piano_types();
				user_data = expect_value(6);

					if( user_data != 0)
					{
						bzero(mybuf,4);
						sprintf(mybuf,"%d",user_data);
						//printf("User pressed");
						//printf("%s",mybuf);

						switch(user_data)
						{
							case 1:
							{
								printf("\n\r***Acoustic Grand Piano is the selected Instrument***\n\n\r");
								piano_type = ACOUSTIC_GRAND_PIANO;
								break;
							}
							case 2:
							{
								printf("\n\r***Bright Acoustic Piano is the selected Instrument***\n\r");
								piano_type = BRIGHT_ACOUSTIC_PIANO;
								break;
							}
							case 3:
							{
								printf("\n\r***Electric Grand Piano is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_GRAND_PIANO;
								break;
							}
							case 4:
							{
								printf("\n\r***Honky Tonky Piano is the selected Instrument***\n\n\r");
								piano_type = HONKY_TONKY_PIANO;
								break;
							}
							case 5:
							{
								printf("\n\r***Electric Piano 1 is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_PIANO_1;
								break;
							}
							case 6:
							{
								printf("\n\r***Electric Piano 2 is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_PIANO_2;
								break;
							}

							default:
								break;
						}

						break;
					}
					else
					{
						printf("INVALID DATA\n\r");
						//halMcuWaitMs(1000);
						clear_screen();
					}
			}
}

void select_guitar_type(void)
{

	char mybuf[4];
	char user_data=0;

	while(guitar_loop == TRUE)
			{
				print_sel_guitar_types();
				user_data = expect_value(8);

					if( user_data != 0)
					{
						bzero(mybuf,4);
						sprintf(mybuf,"%d",user_data);
						//printf("User pressed");
						//printf("%s",mybuf);

						switch(user_data)
						{
							case 1:
							{
								printf("\n\r***Acoustic Guitar (Nylon) is the selected Instrument***\n\n\r");
								piano_type = ACOUSTIC_GUITAR_NYLON;
								break;
							}

							case 2:
							{
								printf("\n\r***Acoustic Guitar (Steel) is the selected Instrument***\n\n\r");
								piano_type = ACOUSTIC_GUITAR_STEEL;
								break;
							}


							case 3:
							{
								printf("\n\r***Electric Guitar (Jazz) is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_GUITAR_JAZZ;
								break;
							}



							case 4:
							{
								printf("\n\r***Electric Guitar (Clean) is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_GUITAR_CLEAN;
								break;
							}


							case 5:
							{
								printf("\n\r***Electric Guitar (Muted) is the selected Instrument***\n\n\r");
								piano_type = ELECTRIC_GUITAR_MUTED;
								break;
							}


							case 6:
							{
								printf("\n\r***Overdriven Guitar is the selected Instrument***\n\n\r");
								piano_type = OVERDRIVEN_GUITAR;
								break;
							}


							case 7:
							{
								printf("\n\r***Distortion Guitar is the selected Instrument***\n\n\r");
								piano_type = DISTORTION_GUITAR;
								break;
							}


							case 8:
							{
								printf("\n\r***Guitar Harmonics is the selected Instrument***\n\n\r");
								piano_type = GUITAR_HARMONICS;
								break;
							}

							default:
								break;
						}

						break;
					}
					else
					{
						printf("INVALID DATA\n\r");
						//halMcuWaitMs(1000);
						clear_screen();
					}
			}
}


void start_my_menu(void)
{

	drum_piano_guitar=0;
	real_virtual=0;
	piano_type=0;
	guitar_type=0;
	drum_piano_guitar_rv=0;
	audio_termination=VS1053;
	record_notes=FALSE;
	play_recorded_notes=FALSE;

	rv_loop = TRUE;
	wrv_loop= TRUE;
	guitar_loop=TRUE;
	piano_loop = TRUE;
	audio_loop=TRUE;
	record_loop=TRUE;

	clear_screen();
	print_welcome_message();

	get_audio_termination();
	get_record_option();

	get_real_virtual();

	select_within_real_virtual();


	select_sub_instruments();

	//clear_screen();
	printf("\n\r**************************************");
	printf("\n\rAll the initialization is now complete");
	printf("\n\r**************************************");
}



void clear_screen(void)
{
	int i=0;
	printf("\033c");			//Reset Terminal
	for(i=0;i<2000;i++)
		{
			__asm
			NOP
			__endasm;
		}

	printf("\033[2J");			//Clear Screen
	for(i=0;i<2000;i++)
	{
		__asm
		NOP
		__endasm;
	}
}

