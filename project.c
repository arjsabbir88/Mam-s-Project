#include<stdio.h>

int Booklist()
{    printf("\n");
    printf("1. Story\n");
    printf("2. English Literature\n");
    printf("3. Bangla Literature\n");
    printf("4. Programming Book.\n");
    printf("5. Ethical Hacking.\n");
}
int StoryBook()
{    printf("\n");
    printf("1.Beloved.\n");
    printf("2.Emma.\n");
    printf("3.Jane.\n");
    printf("4.A Fine Balance.\n");
    printf("5.Blood Meridian.\n");
}
int EnglishLiteratureBook()
{        printf("\n");
        printf("1.Oliver Twist.\n");
        printf("2.An Experiment In Criticism.\n");
        printf("3.Northange Abbey.\n");
        printf("4.Sense and Sensibility.\n");
}
int BanglaLiteratureBook()
{    printf("\n");
    printf("1.Gitanjali.\n");
    printf("2.Bengali Novels.\n");
    printf("3.Nondito Noroke.\n");
    printf("4.Lalsalu.\n");
    printf("5. srikanta.\n");
    printf("6.Shesher Kabita.\n");
}
int ProgrammingBook()
{    printf("\n");
    printf("1.Python Programming fo the Absolute Beginner.\n");
    printf("2.C++.\n");
    printf("3.Effective Java.\n");
    printf("4.Introduction to Algorithms.\n");
    printf("5.Eloquent JavaScript.\n");
    printf("6.Structure Programming Language C.\n");
}
int EthecalHakingBook()
{    printf("\n");
    printf("1.Gray Hat Hacking.\n");
    printf("2.Ethical Hacking.\n");
    printf("3.Social Engineering.\n");
    printf("4.Penetration Testin.\n");
    printf("5.RTFM.\n");
}

int AboutBeloved()
{    printf("\n");
    printf("Book Name   : Beloved.\n");
    printf("Writer      : Toni Morrison.\n");
    printf("About       : Set in the period after the American Civil War.\n");
    printf("            : Beloved is a 1987 novel by American novelist Toni Morrison.\n");
    printf("            : the novel tells the story of a dysfunctional family of formerly\n");
    printf("            : enslaved people whose Cincinnati home is haunted by a malevolent spirit.\n");
    printf("Book price  : 360 Taka.\n");
}
int AboutEmma()
{    printf("\n");
    printf("Book Name   : Emma.\n");
    printf("Writer      : Jane Austen.\n");
    printf("About       : Emma is a novel written by English author Jane Austen.\n");
    printf("            : It is set in the fictional country village of Highbury and \n");
    printf("            : the surrounding estates of Hartfield,Randalls and Donwell Abbey,\n");
    printf("            : Nand involves the relationships among people from a small number of families.\n");
    printf("Book Price  : 250 Taka Only.\n");
}
int AboutJane()
{    printf("\n");
    printf("Book Name   : Jane.\n");
    printf("Writer      : Charlotte Brontë.\n");
    printf("About Book  : It was published under her pen name 'Currer Bell' on 19 October 1847 by Smith, Elder & Co. of London.\n");
    printf("            : The first American edition was published the following year by Harper & Brothers of New York.\n");
    printf("Book Price  : 220 Taka only.\n");
}
int AboutAFineBlance()
{    printf("\n");
    printf("Book Name   : A Fine Blance.\n");
    printf("Writer      : Rohinton Mistry.\n");
    printf("Book Price  : 260 Taka Only.\n");
}
int BloodMeridian()
{    printf("\n");
    printf("Book Name   : Blood Meridian.\n");
    printf("Writer      : Cormac McCarthy.\n");
    printf("About Book  : In this book West is a 1985 epic historical novel by American author Cormac McCarthy.\n");
    printf("            : classified under the Western, or sometimes the anti-Western, genre. McCarthy's fifth book.\n");
    printf("            : was published by Random House.\n");
    printf("Book Pirce  : 220 Taka Only.\n");
}
struct book{
    char StoryBookName[20];
    int BookNumber[20];
    char BookWriter[20];
    char EnglishLiterature[20];
    char BanglaLiterature[20];
    char Programming[20];
    char EthecalHaking[20];

}book;
struct AboutStoryBook
{
    char About1[5];

}StoryAbout;
struct AboutEnglishLiteratureBook
{
    char About[5];
}EnglishLiteratureBookAbout;

int AboutOliverTwist()
{    printf("\n");
    printf("Book Name    : Oliver Twist.\n");
    printf("Writer       : Charles Dickens.\n");
    printf("Book Price   : 160 Taka only.\n");
}
int AboutAnExperimentInCriticism()
{    printf("\n");
    printf("Book Name   : An Experiment In Criticism.\n");
    printf("Writer      : C. S.\n");
    printf("About Book  : This is An Experiment in Criticism is a 1961 book.\n");
    printf("            : Lewis in which he proposes that the quality of books should be\n");
    printf("            : measured not by how they are written, but by how often they are re-read.\n");
    printf("            : To do this, the author describes two kinds of readers.\n");
    printf("Book Price  : 350 Taka Only. \n");
}
int AboutNorthangeAbbey()
{    printf("\n");
    printf("Book Name   : Nortanger Abbey.\n");
    printf("Writer      : Jane Austen.\n");
    printf("About Book  : Northanger Abbey is a coming-of-age novel and a satire of Gothic novels\n");
    printf("            : written by the English author Jane Austen.\n");
    printf("            : Although the title page is dated 1818 and it was published posthumously in 1817 with Persuasion,\n");
    printf("            : Northanger Abbey was completed in 1803,\n");
    printf("            : making it the  first of Austen's novels to be completed in full.\n");
    printf("Book Price  : 350 Taka Only.\n");
}
int AboutSenseandSensibility()
{    printf("\n");
    printf("Book Name   : Sense And Sensibility.\n");
    printf("Writer      : Jane Austen.");
    printf("About Book  : Sense and Sensibility is the first novel by the English author Jane Austen, published in 1811.\n");
    printf("            : It was published anonymously; By A Lady appears on the title page where the\n");
    printf("            : author's name might have been. It tells the story of the Dashwood sisters.\n");
    printf("            : Elinor and Marianne as they come of age.\n");
    printf("Book Price  : 220 Taka Only.\n");
}
struct AboutBangla
{
    char About[5];
}BanglaLiteratureBookAbout;

int Gitanjali()
{    printf("\n");
    printf("Book Name   : Gitanjali.\n");
    printf("Writer      : Rabindranath Tagore.\n");
    printf("About Book  : A total of 157 poems have been compiled in this book.\n");
    printf("            : The poems are Brahma-bhavapanna devotional works. Rabindranath in most of its poems\n");
    printf("            : He composed himself. These poems were published in various magazines in 1908-09.\n");
    printf("Book Prize  : 350 Taka Only.\n");
}
int BengaliNovels()
{    printf("\n");
    printf("Book Name   : Bengali Novels\n");
    printf("About Book  : Bengali novel writing started in the mid-nineteenth century\n");
    printf("            : But it quickly became an important aspect of Bengali literature.\n");
    printf("            : Written by a non-Bengali and published in 1852 AD, Phul Mani Karuna Abharsa.\n");
    printf("            : is regarded as the first novel in the Bengali language.\n");
    printf("Book Prize  : 320 Taka Only.\n");
}
int NonditoNoroke()
{    printf("\n");
    printf("Book Nmae   : Nandit Narake.\n");
    printf("Writer      : Humayun Ahemed.\n");
    printf("About Book  : It is the first novel of Bangladeshi fiction writer Humayun Ahmed.\n");
    printf("            : It was written in 1970 and published in 1972.\n");
    printf("            : Humayun Ahmed wrote the novel while studying in the chemistry department of Dhaka University.\n");
    printf("            : At that time he was a resident student of Haji Muhammad Mohsin Hall of Dhaka University.\n");
    printf("Book Prize  : 450 Taka.\n");
}
int Lalsalu()
{    printf("\n");
    printf("Book Name   : Lalsalu\n");
    printf("Writer      : is the debut novel written by Bengali writer Syed Waliullah.\n");
    printf("About Book  : The novel written and published in 1948 is considered as a classical work of Bengali literature.\n");
    printf("            : Although its background is the rural society of Bangladesh in the 1940s or 1950s, its influence or spread is black.\n");
    printf("Book Prize  : 250 Taka Only.\n");
}
int srikanta()
{    printf("\n");
    printf("Book Name   : Srikanto.\n");
    printf("About Book  : A biographical novel Book by Srikanth Saratchandra Chatterjee.\n");
    printf("Writer      : Srikanth Saratchandra Chatterjee.\n");
    printf("Book Prize  : 150 Taka Only.\n");
}
int ShesherKabita()
{    printf("\n");
    printf("Book Name   : Shesher Kobita.\n");
    printf("Writer      : Rabindranath Tagore.\n");
    printf("            : This is the second novel of Rabindranath's painting stage.\n");
    printf("            : From 1927 to 1928, the work was published continuously in Pravasi.\n");
    printf("Book Prize  : 350 Taka Only.\n");
}
struct ProgrammingBook
{
   char About[6];

}ProgrammingBookAbout;

    int PythonProgrammingfotheAbsoluteBeginner()
    {    printf("\n");
        printf("Book Name   : Python Programming For The Absolute Beginner(Third Edition).\n");
        printf("Writer      : Michael Bawson (Research)\n");
        printf("              Professor University of California.\n");
        printf("Boor Prize  : 350 Taka Only.\n");
    }
    int CPlus()
    {    printf("\n");
        printf("Book Name   : C++ Teach Yourself (Third Edition).\n");
        printf("Writer      : Herbrt Schildt\n");
        printf("              Master Degree in Computer Science From University off Illinois.\n");
        printf("Book Prize  : 200 Taka Only.\n");
    }
    int EffectiveJava()
    {    printf("\n");
        printf("Book Name   : Effective Jave(Second Edition)\n");
        printf("Writer      : Joshua Bloch.\n");
        printf("Education   : Columbia University in Computer Science.\n");
        printf("            : Google Software Enigineer.\n");
        printf("Book Prize  : 360 Taka Only.\n");
    }
    int IntroductionToAlgorithms()
    {    printf("\n");
        printf("Book Name   : Introduction To Algorithms.\n");
        printf("Writer      : Ronald Rivest.\n");
        printf("            : Cryptographer and computer scientist.\n");
        printf("Book Prize  : 350 Taka Only.\n");
    }
    int EloquentJavaScript()
   {     printf("\n");
        printf("Book Name   : Eloquent JavaScript.\n");
        printf("Writer      : Marijn Haverbeke.\n");
        printf("            : Expert in JavaScript.\n");
        printf("Book Prize  : 400 Taka Only.\n");
   }
    int StructureProgrammingLanguageC()
    {    printf("\n");
        printf("Book Name   : Structure Programming Language C.\n");
        printf("Writer      : Muhammad Muktadir.\n");
        printf("Book Prize  : 150 Taka Only.\n");
    }
struct EathicalHacking
{
    char About[5];
}AboutEathicalhacking;
    int GrayHatHacking()
    {   printf("\n");
        printf("Book Name   : Gray Hat Hacking.\n");
        printf("Writer      : Shon Harris.\n");
        printf("Book Prize  : 260 Taka Only.\n");
    }
    int EathicalHacking ()
    {   printf("\n");
        printf("Book Name   : Ethical Hacking 'A Hands-on Introduction to Breaking In'.\n");
        printf("Writer      : Deniel G. Graham.\n");
        printf("Book Prize  : 420 Taka Only.\n");
    }
    int SocialEngineering()
    {
        printf("\n");
        printf("Book Name   : Social Engineering 'The Science of Human Hacking'.\n");
        printf("Writer      : Christopher J. Handagy.\n");
        printf("Book Prize  : 280 Taka Only.\n");
    }
    int PenetrationTestin()
    {
         printf("\n");
        printf("Book Name   : Penetration Testting.\n");
        printf("Writer      : Georgia Weidman.\n");
        printf("Book Prize  : 390 Taka Only.\n");
    }
    int RTFM()
    {   printf("\n");
        printf("Book Name   : RTFM 'Red Team Field Manual'.\n");
        printf("Writer      : Ben Clark.\n");
        printf("Book Prize  : 450 Taka Only.\n");
    }
int main()
{
    char c,c2,c3,c4;
     int ch,ch2,ch3,ch4,ch5;
    int choice;
    char f1,f2,f3,f4,f5;
    printf("\t\t\tWelcome To Our Book Store.\n\n");
    printf("*********************************Welcome***************************");
    printf("\n \n \n \n");

    do
    {
    printf("Which Type of book you want??\n");
        Booklist();

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
         do
         {
            printf("\n\n\n");
           book.StoryBookName[20]=StoryBook();
            printf("What books do you want to know about press number : ");
            scanf("%d",&ch);

             switch (ch)
            {
            case 1:
                StoryAbout.About1[0]= AboutBeloved();
                break;
            case 2:
               StoryAbout.About1[1]= AboutEmma();
                break;
            case 3:
               StoryAbout.About1[2]= AboutJane();
                break;
            case 4:
               StoryAbout.About1[3]= AboutAFineBlance();
                break;
            case 5:
               StoryAbout.About1[4]= BloodMeridian();
                break;

            default:
                printf("Your choice is invalid.");
                break;
            }
            printf("Do you want to contiune Press (y/n) : ");
                scanf("%c",&f1);
                scanf("%c",&f1);
         } while (f1=='y');


            break;
        case 2:
         do
         {
            printf("\n\n\n");
             book.EnglishLiterature[20]=EnglishLiteratureBook();
          printf("What books do you want to know about press number : ");
          scanf("%d",&ch2);
          switch (ch2)
          {
          case 1:
            EnglishLiteratureBookAbout.About[0]=AboutOliverTwist();
            break;

          case 2:
            EnglishLiteratureBookAbout.About[1]= AboutAnExperimentInCriticism();
            break;

          case 3:
            EnglishLiteratureBookAbout.About[2]=AboutNorthangeAbbey();
            break;

          case 4:
            EnglishLiteratureBookAbout.About[3]=AboutSenseandSensibility();
            break;

          default:
            printf("Invalid number !!");
            break;
          }
          printf("Do you want to contiune Press (y/n) : ");
                scanf("%c",&f2);
                scanf("%c",&f2);
         } while (f2=='y');



            break;
        case 3:
            do
            {
            printf("\n\n\n");
            book.BanglaLiterature[20]=BanglaLiteratureBook();
            printf("What books do you want to know about press number : ");
            scanf("%d",&ch3);
            switch (ch3)
            {
            case 1:
            BanglaLiteratureBookAbout.About[0]=Gitanjali();
                break;
            case 2:
            BanglaLiteratureBookAbout.About[1]=BengaliNovels();
                break;

            case 3:
            BanglaLiteratureBookAbout.About[2]=NonditoNoroke();
                 break;

            case 4:
            BanglaLiteratureBookAbout.About[3]=Lalsalu();
                break;

            case 5:
            BanglaLiteratureBookAbout.About[4]=srikanta();
                break;
            case 6:
            BanglaLiteratureBookAbout.About[5]= ShesherKabita();
                break;

            default:
            printf("Your number is invalid.");
                break;
            }
            printf("Do you want to contiune Press (y/n) : ");
                scanf("%c",&f3);
                scanf("%c",&f3);
            } while (f3=='y');


            break;
        case 4:
            do
            {
                printf("\n\n\n");
               book.Programming[20]=ProgrammingBook();
            printf("What books do you want to know about press number: ");
            scanf("%d",&ch4);

            switch (ch4)
            {
            case 1:
                ProgrammingBookAbout.About[0]=PythonProgrammingfotheAbsoluteBeginner();
                break;

            case 2:
                ProgrammingBookAbout.About[1]=CPlus();
                break;
                ProgrammingBookAbout.About[2]= EffectiveJava();
                case 3:
                ProgrammingBookAbout.About[3]= IntroductionToAlgorithms();
                break;
               case 4:
                ProgrammingBookAbout.About[4]=  EloquentJavaScript();
                break;
                case 5:
                ProgrammingBookAbout.About[5]= StructureProgrammingLanguageC();
                break;

                default:
                printf("Invalid choice.");
                break;
            }
                printf("Do you want to contiune Press (y/n) : ");
                scanf("%c",&f4);
                scanf("%c",&f4);
            } while (f4=='y');
            break;
        case 5:
          do
          {
            printf("\n\n\n");
                book.EthecalHaking[20]=EthecalHakingBook();
            printf("What books do you want to know about press number : ");
            scanf("%d",&ch5);
            switch (ch5)
            {
            case 1:
                AboutEathicalhacking.About[0]= GrayHatHacking();
                break;
            case 2:
                AboutEathicalhacking.About[1]= EathicalHacking();
                break;
            case 3:
                AboutEathicalhacking.About[2]= SocialEngineering();
                break;
            case 4:
                AboutEathicalhacking.About[3]= PenetrationTestin();
                break;
            case 5:
                AboutEathicalhacking.About[4]= RTFM();
                break;

            default:
                printf("\nInvalid choice.\n");
                break;


            }
            printf("Do you want to contiune Press (y/n) : ");
                scanf("%c",&f5);
                scanf("%c",&f5);
          } while (f5=='y');



            default:
            printf("\nYour choice Is Invalid.\nPlease choice Correct one.\n");
            break;
        }

        printf("\n\nDo you want closed the program??(y/n): ");
        scanf("%c",&c);
        scanf("%c",&c);
        printf("\n***************************************\n");
    } while (c=='n');

    printf("****************Thank You*******************");
}
