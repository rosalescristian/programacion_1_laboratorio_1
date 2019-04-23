#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libOrdenamiento.h"
#define LEN 60
#define CHARLEN 51

int main()
{
    char mails[LEN][CHARLEN] = {"edruhan0@wufoo.com","ascotney1@creativecommons.org","rmableson2@ucoz.ru","ksibbs3@boston.com","bharfoot4@myspace.com","spetras5@ibm.com","lboribal6@hexun.com","dhannabuss7@amazon.de","eskottle8@i2i.jp","acaroll9@about.me","hbillitteria@delicious.com","gbowndb@unblog.fr","eamossc@xrea.com","mjackd@engadget.com","treascee@ning.com","sbewsyf@admin.ch","bbowermang@surveymonkey.com","thugoninh@dedecms.com","pocanavani@netlog.com","cboyerj@lulu.com","jhindsbergk@omniture.com","fnicel@biblegateway.com","lsmeem@princeton.edu","gduguen@360.cn","tdeathridgeo@bizjournals.com","lbrashawp@jalbum.net","hfindonq@mtv.com","rcaccavaler@biglobe.ne.jp","risaksens@nps.gov","mwyldboret@hud.gov","alundbergu@desdev.cn","cmicklewiczv@ask.com","rnovelliw@tiny.cc","mmccahillx@devhub.com","prheubottomy@oakley.com","trainsz@4shared.com","alomasna10@amazonaws.com","nwanklyn11@google.com.br","gclibbery12@msn.com","bhechlin13@abc.net.au","cbirdwhistle14@mtv.com","bcoat15@dot.gov","ashowers16@bbc.co.uk","kgeibel17@sogou.com","kewbanche18@aol.com","calbion19@a8.net","krao1a@ucoz.com","frisby1b@ftc.gov","echeer1c@google.com.au","obellfield1d@marriott.com"};
    int primerIndiceLibre = 50,i;
    printf("Ingrese un mail: ");

    if(!getEmail(mails[primerIndiceLibre]))
    {
        primerIndiceLibre++;
        insertionSortStr(mails,51);
        for (i=0; i<LEN; i++)
        {
            printf("\n%s", mails[i]);
        }
    }
    else
    {
        printf("Error!\n");
    }


    return 0;
}

