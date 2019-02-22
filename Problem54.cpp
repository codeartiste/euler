//
//  Problem54.cpp
//  testC
//
//  Created by Sandip Pal on 20/09/12.
//  Copyright (c) 2012 Sandip Pal. All rights reserved.
//


#include "Problem54.h"

static char Hands[1000][21] = {
    
    "8CTSKC9H4S7D2S5D3SAC",
    "5CAD5DAC9C7C5H8DTDKS",
    "3H7H6SKCJSQHTDJC2D8S",
    "TH8H5CQSTC9H4DJCKSJS",
    "7C5HKCQHJDASKH4CAD4S",
    "5HKS9C7D9H8D3S5D5CAH",
    "6H4H5C3H2H3SQH5S6SAS",
    "TD8C4H7CTCKC4C3H7SKS",
    "7C9C6DKD3H4CQSQCACKH",
    "JC6S5H2H2DKD9D7CASJS",
    "ADQHTH9D8HTS6D3SASAC",
    "2H4S5C5STCKCJD6CTS3C",
    "QDAS6HJS2C3D9HKC4H8S",
    "KD8S9S7C2S3S6D6S4HKC",
    "3C8C2D7D4D9S4SQH4HJD",
    "8CKC7STC2DTS8HQDAC5C",
    "3DKHQD6C6SADAS8H2HQS",
    "6S8D4C8S6CQHTC6D7D9D",
    "2S8D8C4CTS9S9D9CAC3D",
    "3CQS2S4HJH3D2DTD8S9H",
    "5HQS8S6D3C8CJDAS7H7D",
    "6HTD9DASJH6CQC9SKDJC",
    "AH8SQS4DTHACTS3C3D5C",
    "5S4DJS3D8H6CTS3SAD8C",
    "6D7C5D5H3S5CJC2H5S3D",
    "5H6H2SKS3D5DJD7HJS8H",
    "KH4HASJSQSQCTC6D7CKS",
    "3DQSTS2HJS4DAS9SJCKD",
    "QD5H4D5DKH7H3DJSKD4H",
    "2C9H6H5C9D6CJC2DTH9S",
    "7D6DASQDJH4DJS7CQS5C",
    "3HKHQDAD8C8H3STH9D5S",
    "AH9S4D9D8S4HJS3CTC8D",
    "2CKS5HQD3STS9HAHAD8S",
    "5C7H5DKD9H4D3D2DKSAD",
    "KSKC9S6D2CQH9D9HTSTC",
    "9C6H5DQH4DAD6DQCJSKH",
    "9S3H9DJD5C4D9HASTCQH",
    "2C6DJC9C3CAD9SKH9D7D",
    "KC9C7CJCJSKD3HAS3C7D",
    "QDKHQS2C3S8S8H9H9CJC",
    "QH8D3CKC4C4H6DAD9H9D",
    "3SKSQS7HKH7D5H5DJDAD",
    "2H2C6HTHTC7D8D4H8CAS",
    "4S2HACQC3S6DTH4D4CKH",
    "4DTCKSAS7C3C6D2D9H6C",
    "8CTD5DQS2C7H4C9C3H9H",
    "5HJHTS7STD6HADQD8H8S",
    "5SAD9C8C7C8D5H9D8S2S",
    "4HKHKS9S2SKC5SAD4S7D",
    "QS9CQD6HJS5DAC8D2SAS",
    "KHACJC3S9D9S3C9C5SJS",
    "AD3C3DKS3S5C9C8CTS4S",
    "JH8D5D6HKDQSQD3D6CKC",
    "8SJD6C3S8CTCQC3CQHJS",
    "KCJC8H2S9H9CJH8S8C9S",
    "8S2HQH4DQC9DKCASTH3C",
    "8S6HTH7C2H6S3C3HAS7S",
    "QH5SJS4H5HTS8HAHACJC",
    "9D8H2S4STCJC3C7H3H5C",
    "3DAD3C3S4CQCAS5DTH8C",
    "6S9D4CJSKHAHTSJD8HAD",
    "4C6S9D7SAC4D3D3STCJD",
    "AD7H6H4HJHKCTDTS7D6S",
    "8HJHTC3S8D8C9S2C5C4D",
    "2C9DKCQHTHQSJC9C4HTS",
    "QS3CQD8HKH4H8DTD8SAC",
    "7C3CTH5S8H8C9CJDTCKD",
    "QCTCJDTS8C3H6HKD7CTD",
    "JHQSKS9C6D6SAS9HKH6H",
    "2H4DAH2DJH6HTD5D4HJD",
    "KD8C9SJHQDJS2CQS5C7C",
    "4STC7H8D2S6H7S9C7CKC",
    "8C5D7H4STDQC8SJS4HKS",
    "AD8SJH6DTDKD7C6C2D7D",
    "JC6H6SJS4HQH9HAH4C3C",
    "6H5HAS7C7S3DKHKC5D5C",
    "JC3DTDAS4D6D6SQHJDKS",
    "8C7S8SQH2SJD5C7HAHQD",
    "8S3C6H6C2C8DTD7D4C4D",
    "5DQHKH7C2S7HJS6DQCQD",
    "AD6C6S7DTH6H2H8HKH4H",
    "KSJSKD5D2DKH7D9C8C3D",
    "9C6DQD3CKS3S7SAHJD2D",
    "AHQHASJC8S8H4CKCTH7D",
    "JC5HTD7C5DKD4CAD8HJS",
    "KC2HACAH7DJHKH5D7S6D",
    "9S5S9C6H8STDJD9H6CAC",
    "7D8S6DTSKD7HAC5S7C5D",
    "AHQCJC4CTC8C2HTS2C7D",
    "KDKC6S3D7D2S8S3H5S5C",
    "8S5D8H4C6HKC3H7C5SKD",
    "JH8C3D3C6CKCTD7H7C4C",
    "JCKC6HTSQSTDKS8H8C9S",
    "6C5S9CQH7DAHKSKC9S2C",
    "4D4S8HTD9C3S7D9DASTH",
    "6S7D3C6H5DKD2C5C9D9C",
    "2HKC3DAD3HQDQS8DJC4S",
    "8C3H9C7CAD5DJC9DJSAS",
    "5D9H5C7H6S6CQCJCQD9S",
    "JCQSJH2C6S9CQC3D4STC",
    "4H5S8D3D4D2SKC2HJS2C",
    "TD3STHKD4D7HJHJSKSAC",
    "7S8C9S2D8S7D5CAD9DAS",
    "8C7H2S6CTH3H4C3S8HAC",
    "KD5HJC8HJD2D4HTDJH5C",
    "3DASQHKS7HJD8S5S6D5H",
    "9S6STCQSJC5C5D9CTH8C",
    "5H3SJH9H2S2C6S7SASKS",
    "8CQDJCQSTCQC4HACKH6C",
    "TC5H7DJH4H2H8DJCKS4D",
    "5S9CKHKD9H5CTS3D7D2D",
    "5HASTC4D8C2CTS9D3H8D",
    "6H8D2D9HJD6C4S5H5S6D",
    "AD9CJC7D6H9S6DJS9H3C",
    "ADJHTCQS4C5D9S7C9CAH",
    "KD6H2HTH8SQDKS9D9HAS",
    "4H8H8D5H6CAH5SASAD8S",
    "QS5D4S2HTDKS5HAC3HJC",
    "9C7DQDKDAC6D5HQH6H5S",
    "KCAHQH2H7DQS3HKS7SJD",
    "6C8S3H6DKSQD5D5C8HTC",
    "9H4D4S6S9DKHQC4H6CJD",
    "TD2DQH4S6HJHKD3CQD8C",
    "4S6H7CQD9DASAH6SAD3C",
    "2CKCTH6H8DAH5C6D8S5D",
    "TDTS7CADJCQD9H3CKC7H",
    "5D4D5S8H4H7D3HJDKD2D",
    "JHTD6HQS4SKD5C8S7D8H",
    "AC3DAS8CTD7HKH5D6CJD",
    "9DKS7C6DQHTCJDKDASKC",
    "JH8S5S7S7DAS2D3DAD2H",
    "2H5DAS3CQDKC6H9H9S2C",
    "9D5DTH4CJH3H8DTC8H9H",
    "6HKD2CTD2H6C9D2DJS8C",
    "KD7S3C7CASQHTSAD8C2S",
    "QS8H6CJS4C9SQCADTDTS",
    "2H7CTSTC8C3C9H2D6DJC",
    "TC2H8DJHKS6D3HTDTH8H",
    "9DTD9HQC5D6C8H8CKCTS",
    "2H8C3DAH4DTHTC7D8HKC",
    "TS5C2D8C6SKHAH5H6HKC",
    "5S5DAHTC4CJD8D6H8C6C",
    "KCQD3D8H2DJC9H4HAD2S",
    "TD6S7DJSKD4HQS2S3S8C",
    "4C9HJHTS3S4HQC5S9S9C",
    "2CKD9HJS9S3HJCTS5DAC",
    "AS2H5DAD5HJC7STDJS4C",
    "2D4S8H3D7D2CADKD9CTS",
    "7HQDJH5HJSAC3DTH4C8H",
    "6DKHKCQD5CAD7C2D4HAC",
    "3D9DTC8SQD2CJC4HJDAH",
    "6CTD5STC8SAH2C5DASAC",
    "TH7S3DAS6C4C7H7D4HAH",
    "5C2HKS6H7S4H5H3D3C7H",
    "3C9SAC7SQH2H3D6S3S3H",
    "2D3HAS2C6HTCJS6S9C6C",
    "QHKDQD6DAC6HKH2CTS8C",
    "8H7D3S9H5D3H4SQC9S5H",
    "2D9D7H6H3C8S5H4D3S4S",
    "KD9S4STC7SQC3S8S2H7H",
    "TC3D8C3H6C2H6HKSKD4D",
    "KC3D9S3HJS4S8H2D6C8S",
    "6HQS6CTCQD9H7D7C5H4D",
    "TD9D8D6S6CTC5DTSJS8H",
    "4HKCJD9HTC2C6S5H8HAS",
    "JS9C5C6S9DJD8HKC4C6D",
    "4D8D8S6C7C6H7H8H5CKC",
    "TC3DJC6DKS9S6H7S9C2C",
    "6C3SKD5HTS7D9H9S6HKH",
    "3DQD4C6HTSAC3S5C2HKD",
    "4CASJS9S7CTS7H9HJCKS",
    "4H8CJD3H6HAD9S4S5SKS",
    "4C2C7D3DAS9C2SQSKC6C",
    "8S5H3D2SAC9D6S3S4DTD",
    "QDTH7STS3DAC7H6C5DQC",
    "TCQDAD9CQS5C8DKD3D3C",
    "9D8HAS3S7C8SJD2D8DKC",
    "4CTHACQHJS8D7D7S9CKH",
    "9D8D4CJH2C2SQDKDTS4H",
    "4D6D5D2DJH3S8S3HTCKH",
    "AD4D2CQS8CKDJHJDAH5C",
    "5C6C5H2HJH4HKS7CTC3H",
    "3C4CQC5DJH9CQDKH8DTC",
    "3H9CJS7HQHAS7C9H5HJC",
    "2D5SQD4S3CKC6S6C5C4C",
    "5DKH2DTS8S9CAS9S7C4C",
    "7CAH8C8D5SKDQHQSJH2C",
    "8C9DAH2HACQC5S8H7H2C",
    "QD9H5SQSQC9C5HJCTH4H",
    "6C6S3H5H3S6HKS8DAC7S",
    "ACQH7H8C4SKC6C3D3STC",
    "9D3DJSTHAC5H3H8S3STC",
    "QDKHJSKS9SQC8DAH3CAC",
    "5H6CKH3S9SJH2DQDAS8C",
    "6C4D7S7H5SJC6S9H4HJH",
    "AH5S6H9SAD3STH2H9D8C",
    "4C8D9H7CQCAD4S9CKC5S",
    "9D6H4DTC4CJH2S5D3SAS",
    "2H6C7CKH5CADQSTHJD8S",
    "3S4S7SAHASKCJS2SADTH",
    "JSKC2S7D8C5C9CTS5H9D",
    "7S9S4DTDJHJSKH6H5D2C",
    "JDJSJCTH2D3DQD8CAC5H",
    "7SKH5S9D5DTD4S6H3C2D",
    "4S5DAC8D4D7CADASAH9C",
    "6STHTSKS2CQCAHAS3C4S",
    "2H8C3SJC5C7C3H3CKHJH",
    "7S3HJC5S6H4C2S4DKC7H",
    "4D7C4H9S8S6SADTC6CJC",
    "KHQS3STC4C8H8SAC3CTS",
    "QDQSTH3CTS7H7DAHTDJC",
    "TDJDQC4D9S7STSAD7DAC",
    "AH7H4S6D7C2H9DKSJCTD",
    "7CAHJD4H6DQSTS2H2C5C",
    "TCKC8C9S4CJS3CJC6SAH",
    "AS7DQC3D5SJCJD9DTDKH",
    "TH3C2S6HAHAC5H5C7S8H",
    "QC2DACQD2S3SJDQS6S8H",
    "KC4H3C9DJS6H3S8SAS8C",
    "7HKC7DJD2HJCQH5S3HQS",
    "9HTD3S8H7SAC5C6CAH7C",
    "8D9HAHJDTDQS7D3S9C8S",
    "AHQH3CJDKC4S5S5DTDKS",
    "9H7H6SJHTH4C7CAD5C2D",
    "7CKD5STC9D6S6C5D2STH",
    "KC9H8D5H7H4HQC3D7CAS",
    "6S8SQCTD4S5CTHQSQD2S",
    "8S5HTHQC9H6SKC7D7C5C",
    "7HKDAH4DKH5C4S2DKCQH",
    "6S2CTDJCAS4D6C8C4H5S",
    "JCTCJD5S6S8DAS9DAD3S",
    "6D6H5D5STC3D7DQS9DQD",
    "4S6C8S3S7SADKS2D7D7C",
    "KCQHJCACQD5D8DQS7H7D",
    "JSAH8S5H3DTD3H4S6CJH",
    "4SQS7DAS9HJSKS6DTC5C",
    "2D5C6HTC4DQH3D9H8S6C",
    "6D7HTCTH5SJD5C9CKSKD",
    "8DTDQH6S4S6C8SKC5CTC",
    "5S3DKSAC4S7DQD4CTH2S",
    "TS8H9S6S7SQH3CAH7H8C",
    "4C8CTSJSQC3D7D5D7SJH",
    "8S7S9DQCAC7C6D2HJHKC",
    "JSKD3C6S4S7CAHQCKS5H",
    "KS6S4HJDQSTC8HKC6HAS",
    "KH7CTC6STDJC5C7DAH3S",
    "3H4C4HTCTH6S7H6D9CQH",
    "7D5H4S8CJS4D3D8SQHKC",
    "3H6SAD7H3SQC8S4S7SJS",
    "3SJDKHTH6HQS9C6C2DQD",
    "4SQH4D5HKC7D6D8DTH5S",
    "TDAD6S7HKDKH9H5SKCJC",
    "3HQCASTS4SQDKS9C7SKC",
    "TS6SQC6CTHTC9D5C5DKD",
    "JS3S4HKD4CQD6D9SJC9D",
    "8SJS6D4HJH6H6S6CKSKH",
    "AC7D5DTC9SKH6SQD6HAS",
    "AS7H6DQH8DTH2SKH5C5H",
    "4C7C3DQCTC4SKH8C2DJS",
    "6H5D7S5H9C9HJH8STH7H",
    "ASJS2SQDKH8H4SAC8D8S",
    "3H4CTDKD8CJC5CQS2DJD",
    "TS7D5D6C2CQS2H3CAHKS",
    "4S7C9C7DJH6C5C8H9DQD",
    "2STD7S6D9C9SQSKHQH5C",
    "JC6S9CQHJH8D7SJSKH2H",
    "8D5HTHKC4D4S3S6S3DQS",
    "2DJD4CTD7C6DTH7SJCAH",
    "QS7S4CTH9DTSAD4D3H6H",
    "2D3H7DJD3DAS2S9CQC8S",
    "4H9H9C2C7SJHKD5C5D6H",
    "TC9H8HJC3C9S8DKSADKC",
    "TS5HJDQSQHQC8D5DKHAH",
    "5DAS8S6S4CAHQCQDTH7H",
    "3H4H7D6S4S9HAS8HJS9D",
    "JD8C2C9D7D5H5S9SJCKD",
    "KD9C4SQDAH7CAD9DACTD",
    "6S4H4S9C8DKSTC9DJH7C",
    "5SJC5H4SQHAC2CJS2S9S",
    "8C5HASQDAD5C7D8SQCTD",
    "JC4C8D5CKHQS4D6H2H2C",
    "TH4S2DKC3HQDAC7HAD9D",
    "KHQDAS8HTHKC8D7SQH8C",
    "JC6C7D8CKHADQS2H6S2D",
    "JCKH2D7DJSQC5H4C5DAD",
    "TS3SAD4STD2DTH6S9HJH",
    "9H2DQS2C4S3DKHASAC9D",
    "KH6S8H4SKD7D9DTSQDQC",
    "JH5HAHKSASADJCQC5SKH",
    "5D7D6DKSKD3D7C4DJD3S",
    "ACJS8D5H9C3H4H4DTS2C",
    "6HKSKH9D7C2S6S8S2H3D",
    "6HACJS7S3STD8H3H4HTH",
    "9HTCQCKC5CKS6H4HAC8S",
    "TC7DQH4SJCTS6D6CACKH",
    "QH7D7CJHQSQDTH3H5DKS",
    "3D5S8DJS4C2CKS7H9C4H",
    "5H8S4HTD2C3SQDQC3HKC",
    "QCJSKD9CAD5S9D7D7HTS",
    "8CJCKH7C7S6CTS2CQDTH",
    "5S9DTH3C7SQH8S9C2H5H",
    "5D9H6H2SJSKH3H7C2H5S",
    "JD5D5S2CTC2S6S6C3C8S",
    "4DKH8H4H2DKS3H5C2S9H",
    "3S2DTD7H8S6HJDKC9C8D",
    "6SQDJH7C9H5H8S8HTHTD",
    "QS7STD7DTSJCKD7C3C2C",
    "3CJD8S4H2D2STDAS4DAC",
    "AHKS6C4C4S7D8C9H6HAS",
    "5S3C9S2CQSKD4D4SAC5D",
    "2DTS2CJSKHQH5D8CASKC",
    "KD3H6CTH8S7SKH6H9SAC",
    "6H7S6CQSAH2S2H4H5D5H",
    "5HJCQD2C2SJDASQC6S7D",
    "6CTCASKD8H9D2C7DJH9S",
    "2H4C6CAH8STD3HTH7CTS",
    "KD4STS6CQH8D9D9CAH7D",
    "6DJS5CQDQC9C5D8C2HKD",
    "3CQHJHAD6SAHKC8S6D6H",
    "3D7C4C7S5S3S6S5HJC3C",
    "QH7C5H3C3S8CTS4CKD9C",
    "QD3S7S5H7HQHJC7C8CKD",
    "3CKDKH2S4CTSAC6S2C7C",
    "2CKH3C4C6H4D5H5S7SQD",
    "4D7C8SQDTS9DKS6HKD3C",
    "QS4DTS7S4C3HQD8D9STC",
    "TSQHAC6S3C9H9DQS8S6H",
    "3S7S5D4SJS2D6CQH6STH",
    "4C4HASJS5D3DTS9CAC8S",
    "6S9C7C3S5CQSADAS6H3C",
    "9S8C7H3H6S7CAS9HJDKH",
    "3D3H7S4D6C7CAC2H9CTH",
    "4H5S3HACTCTH9C9H9S8D",
    "8D9H5H4D6C2HQD6S5D3S",
    "4C5CJDQS4D3HTHACQH8C",
    "QC5S3C7HAD4CKS4HJD6D",
    "QSAH3HKS9H2SJSJH5H2H",
    "2H5STH6STS3SKS3C5HJS",
    "2D9S7H3DKCJH6D7DJSTD",
    "ACJS8H2C8CJHJC2DTH7S",
    "5D9S8H2H3DTCAHJCKD9C",
    "9DQDJC2H6DKHTS9SQHTH",
    "2C8D4SJD5H3HTHTC9CKC",
    "AS3D9H7D4DTHKH2H7S3H",
    "4H7SKS2SJSTS8S2HQD8D",
    "5S6HJHKS8H2SQCAC6S3S",
    "JCASADQS8H6CKH4C4DQD",
    "2S3DTSTD9SKS6SQS5C8D",
    "3C6D4SQCKCJHQDTHKHAD",
    "9HAH4DKS2S8DJHJC7CQS",
    "2D6CTH3C8HQDQH2S3SKS",
    "6H5D9S4CTSTDJSQD9DJD",
    "5H8HKH8SKS7CTDAD4SKD",
    "2C7CJC5SAS6C7D8S5H9C",
    "6SQD9STSKHQS5SQH3CKC",
    "7D3H3CKD5CASJH7H6HJD",
    "9D5C9HKC8HKS4SAD4D2S",
    "3SJDQD8D2S7C5S6S5HTS",
    "6D9SKCTD3S6HQDJD5C8D",
    "5H9DTSKD8D6HTDQC4C7D",
    "6D4SJD9DAH9SASTD9HQD",
    "2D5S2H9C6H9STDQC7DTC",
    "3S2HKSTS2C9C8SJS9D7D",
    "3CKC6D5D6C6H8SAS7SQS",
    "JH9S2H8D4C8H9HADTHKH",
    "QCAS2SJS5C6HKD3H7H2C",
    "QD8H2S8D3S6DAH2CTC5C",
    "JDJSTS8S3H5DTDKCJC6H",
    "6SQSTC3H5DAHJC7C7D4H",
    "7C5D8H9C2H9HJHKH5S2C",
    "9C7H6STH3SQCQD4CACJD",
    "2H5D9S7DKC3SQS2DASKH",
    "2S4S2H7D5CTDTHQH9S4D",
    "6D3STS6H4HKS9D8H5S2D",
    "9HKS4H3S5C5DKH6H6SJS",
    "KCAS8C4CJCKHQCTHQDAH",
    "6SKH9S2C5HTC3C7HJC4D",
    "JD4S6S5S8D7H7S4D4C2H",
    "7H9H5DKH9C7CTSTC7S5H",
    "4C8DQCTS4S9H3DADJS7C",
    "8CQS5C5D3HJSAHKC4S9D",
    "TSJD8SQSTHJHKH2DQDJS",
    "JDQC5D6S9H3S2C8H9STS",
    "2S4CAD7HJC5C2D6D4H3D",
    "7SJS2C4H8CADQD9C3STD",
    "JDTS4C6H9H7DQD6D3CAS",
    "AS7C4C6S5D5S5CJSQC4S",
    "KD6S9S7C3C5S7DJHQDJS",
    "4S7SJH2C8S5D7H3DQHAD",
    "TD6H2H8D4H2D7CADKH5D",
    "TS3S5H2CQDAH2S5CKHTD",
    "KC4D8C5DAS6C2H2S9H7C",
    "KDJSQCTSQSKHJH2C5DAD",
    "3S5HKC6C9H3H2HAD7D7S",
    "7SJSJHKD8S7D2S9H7C2H",
    "9H2D8DQC6SADAS8H5H6C",
    "2S7H6C6D7D8C5D9DJC3C",
    "7C9C7HJD2HKD3SKHAD4S",
    "QHAS9H4DJDKSKDTSKH5H",
    "4C8H5S3S3D7DTDAD7SKC",
    "JS8S5SJC8HTH9C4D5DKC",
    "7C5S9CQD2CQHJS5H8DKH",
    "TD2SKS3DADKC7STC3C5D",
    "4C2SADQS6C9SQDTHQH5C",
    "8CADQS2D2SKCJDKS6CJC",
    "8D4DJS2H5DQD7S7DQHTS",
    "6S7H3S8C8S9DQS8H6C9S",
    "4STC2S5CQD4DQS6DTH6S",
    "3S5C9D6H8D4C7DTC7CTD",
    "AH6SAS7H5SKD3H5HAC4C",
    "8D8SAHKSQS2CAD6H7D5D",
    "6H9H9S2HQS8S9C5D2DKD",
    "TSQC5SJH7D7STH9S9HAC",
    "7H3H6SKC4D6D5C4SQDTS",
    "TD2S7CQD3HJH9D4H7S7H",
    "KS3D4H5HTC2SAS2D6D7D",
    "8H3C7HTD3HADKCTH9CKH",
    "TC4C2C9S9D9C5C2HJD3C",
    "3HACTS5DAD8D6HQC6S8C",
    "2STS3SJD7H8SQH4C5S8D",
    "AC4S6C3CKH3D7C2D8S2H",
    "4H6C8STH2H4S8H9S3H7S",
    "7C4C9C2C5CAS5DKD4DQH",
    "9H4HTSAS7D8D5D9S8C2H",
    "QCKDACAD2H7SAS3S2D9S",
    "2HQC8HTC6DQDQS5DKH3C",
    "THJDQS4C2S5SAD7H3SAS",
    "7HJS3D6C3S6DAS9SACQS",
    "9CTSAS8CTC8S6H9D8D6C",
    "4DJD9CKC7C6DKS3S8CAS",
    "3H6STC8DTS3SKC9S7CAS",
    "8CQC4H4S8S6C3STCAHAC",
    "4D7D5CAS2H6STSQCADTC",
    "QDQC8S4STH3DAHTSJH4H",
    "5C2D9S2C3H3C9DQDQH7D",
    "KC9H6CKD7S3C4DASTC2D",
    "3DJS4D9DKS7DTHQC3H3C",
    "8D5S2H9D3H8C4C4H3CTH",
    "JCTH4S6SJD2D4D6C3D4C",
    "TS3S2D4HAC2C6S2HJH6H",
    "TD8SADTCAHACJH9S6S7S",
    "6CKC4SJD8D9H5S7HQHAH",
    "KD8DTSJH5C5H3HADASJS",
    "2D4H3D6C8C7SAD5D5C8S",
    "TD5D7S9C4S5H6C8C4C8S",
    "JSQH9CAS5CQSJC3DQC7C",
    "JC9CKHJHQSQC2CTS3DAD",
    "5DJHAC5C9STS4CJD8CKS",
    "KCAS2DKH9H2C5S4D3D6H",
    "THAH2D8SJC3D8CQH7S3S",
    "8HQD4HJCASKHKS3C9S6D",
    "9SQH7D9C4SAC7HKH4DKD",
    "AHADTH6D9C9SKDKSQH4H",
    "QD6H9C7CQS6D6S9D5SJH",
    "AH8D5HQD2HJCKS4HKH5S",
    "5C2SJS8D9C8C3DASKCAH",
    "JD9S2HQS8H5S8CTH5C4C",
    "QCQS8C2S2C3S9C4CKSKH",
    "2D5D8SAHADTD2CJSKS8C",
    "TC5S5H8HQC9H6HJD4H9S",
    "3CJH4H9HAH4S2H4C8DAC",
    "8STH4D7D6DQDQS7STC7C",
    "KH6D2DJD5HJSQDJH4H4S",
    "9C7SJH4S3STSQC8CTC4H",
    "QH9D4DJHQS3S2C7C6C2D",
    "4H9SJD5C5HAH9DTS2D4C",
    "KSJHTS5D2DAHJS7HAS8D",
    "JSAH8CADKS5S8H2C6CTH",
    "2H5DADACKS3D8HTS6HQC",
    "6D4HTS9C5HJSJH6SJD4C",
    "JHQH4H2C6D3C5D4CQSKC",
    "6H4H6C7H6S2S8SKHQC8C",
    "3H3D5DKS4HTDAD3S4DTS",
    "5S7C8S7D2CKS7S6C8CJS",
    "5D2H3S7C5CQD5H6D9C9H",
    "JS2SKD9S8DTDTSAC8C9D",
    "5HQD2SAC8C9HKS7C4S3C",
    "KHAS3H8S9CJSQS4SAD4D",
    "AS2STDAD4D9HJC4C5HQS",
    "5D7C4HTC2D6CJS4SKC3S",
    "4C2C5DAC9H3DJD8SQSQH",
    "2C8S6H3CQH6DTCKDACAH",
    "QC6C3SQS4SAC8D5CADKH",
    "5S4CACKHASQC2C5C8D9C",
    "8HJD3CKH8D5C9CQDQH9D",
    "7HTS2C8C4STDJC9C5HQH",
    "JS4S2C7CTH6CASKS7SJD",
    "JH7C9H7HTC5H3D6D5D4D",
    "2CQDJH2H9D5S3DTDADKS",
    "JDQH3S4DTH7D6SQSKS4H",
    "TCKS5S8D8HAD2S2D4CJH",
    "5SJHTC3S2DQS9D4CKD9S",
    "ACKH3HAS9DKC9HQD6C6S",
    "9H7S3D5C7DKCTD8H4H6S",
    "3C7H8HTCQD4D7S6SQH6C",
    "6DAD4CQD6C5D7D9DKSTS",
    "JH2HJD9S7STSKH8D5D8H",
    "2D9S4C7D9D5HQD6DAC6S",
    "7S6DJCQDJH4C6SQS2H7D",
    "8CTDJHKD2H5CQS2CJS7S",
    "TC5H4HJHQD3S5S5D8SKH",
    "KSKH7C2C5DJH6S9C6DJC",
    "5HAHJD9CJSKC2H6H4D5S",
    "AS3CTHQC6H9C8S8CTD7C",
    "KC2CQD9CKH4D7S3CTS9H",
    "9CQC2STS8CTD9SQD3S3C",
    "4D9DTHJHAH6S2SJDQHJS",
    "QD9H6CKD7D7H5D6S8HAH",
    "8H3C4S2H5HQSQH7S4HAC",
    "QS3C7S9S4H3SAHKS9D7C",
    "AD5S6S2H2D5HTC4S3C8C",
    "QHTS6S4DJSKSJHAS8S6D",
    "2C8S2STD5HASTCTS6CKC",
    "KCTS8H2H3H7C4C5STHTD",
    "KDADKH7H7S5D5H5S2D9C",
    "AD9S3D7S8CQC7C9CKDKS",
    "3CQC9S8C4D5CASQD6C2C",
    "2HKC8SJD7SAC8D5C2S4D",
    "9DQH3D2STC3SKS3C9HTD",
    "KD6SAC2C7H5H3S6C6H8C",
    "QHTC8S6SKHTH4H5DTS4D",
    "8CJS4H6H2C2H7DACQD3D",
    "QSKC6S2D5S4HTD3HJH4C",
    "7S5H7H8HKH6HQSTHKD7D",
    "5HADKD7CKH5STD6D3C6C",
    "8C9C5HJD7CKCKH7H2H3S",
    "7S4HAD4D8SQSTH3D7H5S",
    "8DTCKSKD9S6DADJD5C2S",
    "7H8H6CQD2H6H9DTC9S7C",
    "8D6D4C7C6C3CTHKHJSJH",
    "5S3S8SJS9HASAD8H7SKD",
    "JH7C2CKC5HASAD9C9SJS",
    "ADAC2C6SQD7C3HTHKSKD",
    "9DJD4H8H4CKH7STS8CKC",
    "3S5S2H7S6H7DKS5C6DAD",
    "5S8C9HQS7H7S2H6C7DTD",
    "QS5STDAC9DKC3DTC2D4D",
    "TD2H7DJDQD4C7H5DKC3D",
    "4C3H8SKDQH5SQC9HTC5H",
    "9CQDTH5HTS5C9HAHQH2C",
    "4D6S3CAC6C3D2C2HTDTH",
    "AC9C5DQC4DAD8D6D8CKC",
    "AD3C4HAC8D8H7S9STDJC",
    "4H9HQHJS2DTHTDTCKDKS",
    "5S6S9S8DTHASKH5H5C8S",
    "JD2S9S6S5S8S5D7S7H9D",
    "5D8C4C9DADTS2C7DKDTC",
    "8SQS4DKC5C8D4SKHJDKD",
    "AS5CADQH7D2H9S7H7CTC",
    "2S8SJDKH7S6C6DAD5DQC",
    "9H6H3S8C8HAHTC4HJSTD",
    "2CTS4D7H2DQC9C5DTH7C",
    "6C8HQC5DTSJH5C5H9H4S",
    "2DQC7HASJS8S2H4C4H8D",
    "JS6SACKD3D3C4S7HTHKC",
    "QHKH6SQS5S4H3CQD3S3H",
    "7HASKH8C4H9C5S3D6STS",
    "9C7C3H5SQD2C3DADAC5H",
    "JHTD2D4CTS3HKHAD3S7S",
    "AS4C5H4D6SKDJC3C6H2D",
    "3H6S8C2DTH4SAHQHAD5H",
    "7C2S9H7HKC5C6D5S3HJC",
    "3CTC9C4HQDTDJH6D9H5S",
    "7C6S5C5D6C4S7H9H6HAH",
    "AD2H7DKC2C4C2S9S7H3S",
    "TH4C8S6S3SADKSASJHTD",
    "5CTD4S4DAD6S5DTC9C7D",
    "8H3S4D4S5S6H5CAC3H3D",
    "9H3CAC4SQS8S9DQH5H4D",
    "JC6C5HTSAC9CJD8C7CQD",
    "8S8H9CJD2DQCQH6H3C8D",
    "KSJS2H6H5HQHQS3H7C6D",
    "TC3H4S7HQC2H3S8CJSKH",
    "AH8H5S4C9HJD3H7SJCAC",
    "3C2D4C5S6C4SQS3SJD3D",
    "5H2DTCAHKS6D7HAD8C6H",
    "6C7S3CJD7C8HKSKHAH6D",
    "AH7D3H8H8S7HQS5H9D2D",
    "JDAC4H7S8S9SKSAS9DQH",
    "7S2C8S5SJHQSJCAHKD4C",
    "AH2S9H4H8DTSTD6HQHJD",
    "4HJC3HQS6D7S9C8S9D8D",
    "5HTD4S9S4C8C8D7H3H3D",
    "QSKH3S2C2S3C7STD4SQD",
    "7CTD4D5SKHACAS7H4C6C",
    "2S5H6DJD9HQS8S2C2HTD",
    "2STS6H9H7S4HJC4C5D5S",
    "2C5H7D4H3SQHJCJS6D8H",
    "4CQH7CQD3SADTH8S5STS",
    "9HTC2STDJC7D3S3DTHQH",
    "7D4C8S5CJH8H6S3SKC3H",
    "JC3HKHTCQHTH6H2CAC5H",
    "QS2H9D2CAS6S6C2S8C8S",
    "9H7DQCTH4HKDQSAC7S3C",
    "4DJH6S5S8HKS9SQC3SAS",
    "JD2D6S7STC9HKC3H7DKD",
    "2HKH7C4D4S3HJSQD7DKC",
    "4CJCAS9D3CJS6C8HQD4D",
    "AHJS3S6C4C3DJH6D9C9H",
    "9H2D8C7H5SKS6H9C2STC",
    "6C8CAD7H6H3DKHAS5DTH",
    "KS8C3STS8S4D5S9S6C4H",
    "9H4S4H5C7DKC2D2H9DJH",
    "5CJSTC9D9H5H7SKHJC6S",
    "7C9H8H4DJCKHJD2HTDTC",
    "8H6C2H2CKH6H9DQSQH5H",
    "AC7D2S3DQDJC2D8DJDJH",
    "2HJC2D7H2C3C8DKDTD4H",
    "3S4H6D8DTS3HTD3D6HTH",
    "JHJC3SACQH9H7H8SQC2C",
    "7HTDQS4S8S9C2S5D4D2H",
    "3DTS3H2SQC8H6HKCJCKS",
    "5DJD7DTC8C6C9S3D8DAC",
    "8H6HJH6C5D8D8S4HAD2C",
    "9D4H2D2C3STSASTC3C5D",
    "4DTH5HKSQS6C4S2H3DAD",
    "5CKC6H2C5S3C4D2D9H9S",
    "JD4C3HTHQH9H5SAH8SAC",
    "7D9S6S2HTD9C4H8HQS4C",
    "3C6H5D4H8C9CKC6SQDQS",
    "3S9HKDTC2DJS8C6S4H4S",
    "2S4C8SQS6HKH3HTH8C5D",
    "2CKH5S3S7S7H6C9DQD8D",
    "8HKSAC2DKHTS6CJSKC7H",
    "9CKS5CTDQCAH6C5H9S7C",
    "5D4D3H4H6S7C7SAHQDTD",
    "2H7DQC6STCTSAH7S9D3H",
    "TH5HQD9SKS7S7C6H8CTD",
    "TH2D4DQC5C7DJDAH9C4H",
    "4H3HAH8D6HQCQH9H2H2C",
    "2DAD4CTS6H7STH4HQSTD",
    "3CKD2H3HQSJDTCQC5D8H",
    "KSJCQDTH9SKD8D8C2D9C",
    "3CQDKD6D4D8DAHADQC8S",
    "8H3S9D2S3HKS6H4C7CKC",
    "TH9S5C3D7D6HAC7S4D2C",
    "5C3DJD4D2D6D5H9H4CKH",
    "AS7HTD6C2H3DQDKS4C4S",
    "JC3CAC7CJDJS8H9SQC5D",
    "JD6S5S2HAS8C7D5HJH3D",
    "8DTC5S9S8S3HJC5H7SAS",
    "5CTD3D7D4H8D7H4D5DJS",
    "QS9CKSTD2S8S5C2H4HAS",
    "TH7S4H7D3HJDKD5D2SKC",
    "JD7H4S8H4CJS6HQH5S4H",
    "2CQS8C5S3HQC2S6CQDAD",
    "8C3DJDTC4H2HAD5SAC2S",
    "5D2CJS2DAD9D3D4C4SJH",
    "8D5H5D6H7S4DKS9DTDJD",
    "3D6D9C2SAS7D5S5C8HJD",
    "7C8S3S6S5HJDTCAD7H7S",
    "2S9DTS4DAC8D6CQDJD3H",
    "9SKH2C3CAC3D5H6H8D5D",
    "KS3D2D6SAS4C2S7C7HKH",
    "AC2H3SJC5CQH4D2D5H7S",
    "TSASJD8C6HJC8S5S2C5D",
    "7SQH7H6CQC8H2D7CJD2S",
    "2CQD2S2HJC9C5D2DJDJH",
    "7C5C9C8S7D6D8D6C9SJH",
    "2CAD6S5H3SKS7S9DKH4C",
    "7H6C2C5CTH9D8D3SQCAH",
    "5SKC6HTC5H8STH6D3CAH",
    "9CKD4HADTD9S4S7D6H5D",
    "7H5C5H6DAS4CKDKH4H9D",
    "3C2S5C6CJDQS2H9D7D3H",
    "AC2S6S7SJSQD5CQS6HAD",
    "5HTHQC7HTC3S7C6DKC3D",
    "4H3DQC9S8H2C3SJCKS5C",
    "4S6S2C6H8S3S3D9H3HJS",
    "4S8C4D2D8H9H7D9DAHTS",
    "9S2C9H4C8DAS7D3D6D5S",
    "6S4C7H8C3H5HJCAH9D9C",
    "2S7C5SJD8C3S3D4D7D6S",
    "3CKC4S5D7D3DJD7H3H4H",
    "9C9H4H4DTH6DQD8S9S7S",
    "2HAC8S4SAD8C2CAH7DTC",
    "TS9H3CADKSTC3D8C8HJD",
    "QC8D2C3C7D7CJD9H9C6C",
    "AH6SJSJH5DASQC2CJDTD",
    "9HKD2H5D2D3S7DTCAHTS",
    "TD8HAS5DAHQCAC6STC5H",
    "KS4S7H4D8D9CTC2H6H3H",
    "3HKD4SQDQH3D8H8CTD7S",
    "8SJDTCAHJSQS2DKHKS4D",
    "3CADJCKDJSKH4STH9H2C",
    "QC5SJS9SKSAS7CQD2SJD",
    "KC5SQS3S2DAC5D9H8HKS",
    "6H9CTCAD2C6D5SJD6C7C",
    "QSKHTDQD2C3H8S2SQCAH",
    "9D9HJHTCQH3C2SJS5C7H",
    "6C3S3D2S4SQD2DTH5D2C",
    "2D6H6D2SJCQHAS7H4HKH",
    "5H6SKSADTCTS7CAC4S4H",
    "AD3C4HQS8C9DKS2H2D4D",
    "4S9D6C6D9CAC8D3H7HKD",
    "JCAH6CTSJD6DAD3S5DQD",
    "JCJHJD3S7S8SJSQC3H4S",
    "JDTH5C2CADJS7H9S2H7S",
    "8D3SJH4DQCASJD2CKC6H",
    "2CAC5HKD5S7HQDJHAH2D",
    "JCQH8D8STC5H5CAH8C6C",
    "3HJS8SQDJH3C4H6D5C3S",
    "6D4S4CAH5H5S3HJD7C8D",
    "8HAH2H3HJS3C7DQC4HKD",
    "6S2HKD5H8H2D3C8S7SQD",
    "2S7SKCQCAHTCQS6D4C8D",
    "5S9H2C3SQD7S6C2H7C9D",
    "3C6C5C5SJDJCKS3S5DTS",
    "7CKS6S5S2S2DTC2H5HQS",
    "AS7H6STS5H9S9D3CKD2H",
    "4SJSQS3S4H7C2SAC6S9D",
    "8CJH2H5H7C5DQHQSKHQC",
    "3STD3H7CKC8D5H8SKH8C",
    "4HKHJDTS3C7HASQCJS5S",
    "AH9D2C8D4D2D6H6CKC6S",
    "2S6H9D3S7H4DKH8HKD3D",
    "9CTCACJHKH4DJD5HTD3S",
    "7S4H9DAS4C7DQS9S2SKH",
    "3S8D8SKS8CJC5CKH2H5D",
    "8SQH2C4DKCJSQC9DAC6H",
    "8S8C7CJSJD6S4C9CAC4S",
    "QH5D2C7DJC8S2DJSJH4C",
    "JS4C7STSJHKCKH5HQD4S",
    "QD8C8D2D6STD9DACQH5S",
    "QHQCJS3D3C5C4HKH8S7H",
    "7C2C5SJC8S3HQC5D2HKC",
    "5S8DKD6H4HQDQH6DAH3D",
    "7SKS6C2S4DACQS5HTSJD",
    "7C2DTC5DQSACJSQC6CKC",
    "2CKS4D3HTS8SAD4H7S9S",
    "QD9HQH5H4H4DKH3SJCAD",
    "4DACKC8D6D4C2DKH2CJD",
    "2C9H2DAH3H6D9C7DTCKS",
    "8C3HKD7C5C2S4S5HASAH",
    "THJD4HKD3HTC5C3SACKH",
    "6D7HAH7SQC6H2DTDJDAS",
    "JH5D7HTC9S7DJCAS5SKH",
    "2H8CADTH6HQDKD9H6S6C",
    "QHKC9D4D3SJSJH4H2C9H",
    "TC7HKH4HJC7D9S3HQS7S",
    "AD7DJH6C7H4H3S3H4DQH",
    "JD2H5CAS6CQC4D3CTCJH",
    "ACJD3H6H4CJCAD7D7H9H",
    "4HTCTS2C8C6SKS2HJD9S",
    "4C3HQSQC9S9H6DKC9D9C",
    "5CAD8C2CQHTHQDJC8D8H",
    "QC2C2SQD9C4D3S8DJHQS",
    "9D3S2C7S7CJCTD3CTC9H",
    "3CTS8H5C4C2C6S8D7C4H",
    "KS7H2HTC4H2C3SASAHQS",
    "8C2D2H2C4S4C6S7D5S3S",
    "THQC5DTD3CQSKDKCKSAS",
    "4DAHKD9HKS5C4C6HJC7S",
    "KC4H5CQSTC2HJC9SAHQH",
    "4S9H3H5H3CQD2HQCJH8H",
    "5DAS7H2C3DJH6H4C6S7D",
    "9CJD9HAHJS8SQH3HKS8H",
    "3SACQCTS4DAD3DAH8S9H",
    "7H3HQS9C9S5HJHJSAHAC",
    "8D3CJD2HAC9C7H5S4D8H",
    "7CJH9H6CJS9S7H8C9D4H",
    "2DAS9S6H4DJSJH9HADQD",
    "6H7SJHKHAH7HTD5S6S2C",
    "8HJH6S5H5S9DTC4CQC9S",
    "7D2CKD3H5HASQD7HJS4D",
    "TSQH6C8HTH5H3C3H9C9D",
    "ADKHJS5D3HASAC9S5CKC",
    "2CKH8CJCQS6DAH2DKCTC",
    "9D3H2S7C4D6DKHKS8D7D",
    "9H2STCJHACQC3H5S3S8H",
    "3SASKD8H4C3H7CJHQHTS",
    "7S6D7H9DJH4C3D3S6CAS",
    "4S2H2C4C8S5HKC8CQCQD",
    "3H3S6CQSQC2D6S5D2C9D",
    "2H8DJH2S3H2D6C5C7SAD",
    "9HJS5DQH8STS2H7S6SAD",
    "6DQC9S7H5H5C7DKCJD4H",
    "QC5S9H9C4D6SKS2S4C7C",
    "9H7C4H8D3S6H5C8HJS7S",
    "2D6HJSTD4H4DJCTH5HKC",
    "AC7C8DTH3H9S2D4CKC4D",
    "KDQS9C7S3DKSADTS4C4H",
    "QH9C8H2S7DKS7H5DKD4C",
    "9C2S2HJC6S6CTCQCJH5C",
    "7SAC8HKC8S6HQSJC3D6S",
    "JS2DJH8C4S6H8H6D5DAD",
    "6H7D2S4H9H7CASAC8H5S",
    "3CJS4S6D5H2SQH6S9C2C",
    "3D5S6S9S4CQS8DQD8STC",
    "9C3DAH9H5S2C7DADJC3S",
    "7HTCAS3C6S6D7SKHKC9H",
    "3STC8H6S5HJH8C7DAC2S",
    "QD9D9C3SJC8CKS8H5D4D",
    "JSAHJD6D9D8C9H9S8H3H",
    "2D6S4C4D8SAD4STCAH9H",
    "TSACQCTHKC6D4H7S8C2H",
    "3CQDJS9D5SJCAH2HTS9H",
    "3H4DQH5D9C5H7D4SJC3S",
    "8STH3H7C2HJDJSTSAC8D",
    "9C2HTDKCJD2S8C5SAD2C",
    "3DKD7C5H4DQHQDTC6H7D",
    "7H2CKC5SKD6HAHQC7SQH",
    "6H5CAC5H2C9C2D7CTD2S",
    "4D9DAH3D7CJD4H8C4CKS",
    "TH3CJSQH8H4CAS3DQSQC",
    "4D7S5HJH6D7D6HJSKH3C",
    "QD8S7D2H2C7CJC2S5H8C",
    "QH8S9DTC2HAD7C8DQD6S",
    "3S7CAD9H2H9SJDTS4C2D",
    "3SAS4HQC2C8H8S7STDTC",
    "JHTHTD3S4D4H5S5DQS2C",
    "8CQDQHTC6D4S9S9D4HQC",
    "8CJS9D6HJD3HAD6STDQC",
    "KC8S3D7CTD7D8D9H4S3S",
    "6C4S3D9DKDTCKCKSAC5S",
    "7C6SQH3DJSKD6H6D2D8C",
    "JD2S5S4H8SAC2D6STS5C",
    "5H8C5S3C4S3D7C8DAS3H",
    "ASTS7C3HAD7DJCQS6C6H",
    "3S9S4CACQH5H5D9HTS4H",
    "6C5C7H7STDADJD5S2H2S",
    "7D6CKC3SJD8D8STSQSKH",
    "8SQS8D6CTHACAH2C8H9S",
    "7HTDKHQH8S3D4DAHJDAS",
    "TS3D2HJC2SJHKH6CQCJS",
    "KCTH2D6H7S2STC8C9DQS",
    "3C9D6SKH8H6D5DTH2C2H",
    "6HTC7DAD4D8STS9HTD7S",
    "JS6DJDJC2HAC6C3DKH8D",
    "KHJD9S5D4H4C3H7SQS5C",
    "4HJD5D3S3C4DKHQHQS7S",
    "JDTS8SQDAH4C6H3S5S2C",
    "QS3DJDAS8DTH7C6SQCKS",
    "7S2H8CQC7HAC6D2DTHKH",
    "5S6C7HKH7DAH8C5C7S3D",
    "3CKDAD7D6C4DKS2D8C4S",
    "7C8D5S2D2SAHAD2C9DTD",
    "3CAD4SKSJH7C5C8C9CTH",
    "ASTD4D7CJD8CQH3C5H9S",
    "3H9C8S9S6SQDKSAH5HJH",
    "QC9C5S4H2HTD7DAS8C9D",
    "8C2C9DKDTC7S3DKHQC3C",
    "4DAS4CQS5S9D6SJDQHKS",
    "6DAH6C4C5HTS9H7D3D5S",
    "QSJD7C8D9CAC3S6S6CKH",
    "8HJH5D9S6DAS6S3SQC7H",
    "QDAD5CJH2HAH4HASKC2C",
    "JH9C2C6H2DJS5D9HKC6D",
    "7D9DKDTH3HAS6SQC6HAD",
    "JD4H7DKC3HJS3CTH3DQS",
    "4C3H8CQD5H6HAS8HADJD",
    "TH8SKD5DQC7DJS5S5HTS",
    "7DKC9DQS3H3C6DTS7SAH",
    "7C4H7HAHQCAC4D5D6DTH",
    "3C4H2SKD8H5HJHTC6CJD",
    "4S8C3D4HJSTD7SJHQSKD",
    "7CQCKD4D7H6SADTDTCKH",
    "5H9HKC3H4D3DAD6SQD6H",
    "TH7C6HTSQH5S2CKCTD6S",
    "7C4D5SJDJH7DACKDKH4H",
    "7D6C8D8H5CJH8SQDTHJD",
    "8D7D6C7C9DKDAS5CQHJH",
    "9S2C8C3C4CKSJH2D8D4H",
    "7S6CJHKH8H3H9D2DAH6D",
    "4DTC9C8D7HTDKSTHKD3C",
    "JD9H8DQDASKD9D2C2S9C",
    "8D3H5C7HKS5HQH2D8C9H",
    "2DTH6DQD6CKC3H3SAD4C",
    "4H3HJS9D3CTC5HQHQCJC",
    "3D5C6H3S3CJC5S7S2SQH",
    "AC5C8C4D5D4H2SQD3C3H",
    "2CTDAH9CKDJS6SQD4CQC",
    "QS8C3S4HTCJS3H7CJCAD",
    "5H4D9CKSJCTD9STS8S9H",
    "QDTS7DASAC2CTD6H8HAH",
    "6SAD8C4S9H8D9DKH8S3C",
    "QS4D2D7SKHJSJCAD4C3C",
    "QS9S7HKCTDTH5HJSACJH",
    "6DAC2SQS7CASKS6SKH5S",
    "6D8HKH3CQS2H5C9C9D6C",
    "JS2C4C6H7DJCACQDTD3H",
    "4HQC8HJD4CKDKS5CKC7S",
    "6D2D3H2SQD5S7HASTH6S",
    "AS6D8D2C8STD8HQDJCAH",
    "9C9H2DTDQH2H5CTC3D8H",
    "KC8S3DKH2STSTC6S4DJH",
    "9H9DQSACKC6H5D4D8DAH",
    "9S5CQS4H7C7D2H8SADJS",
    "3DAC9SAS2C2D2H3HJCKH",
    "7HQHKHJDTCKS5S8H4C8D",
    "2H7H3S2S5HQS3CAS9HKD",
    "AD3DJD6H5S9C6DAC9S3S",
    "3D5D9C2DAC4S2SAD6C6S",
    "QC4C2D3H6SKCQHQD2HJH",
    "QC3C8S4D9S2H5C8HQSQD",
    "6DKD6S7H3SKH2H5CJC6C",
    "3S9STC6S8H2DAD7S8STS",
    "3C6H9C3H5CJC8HQHTDQD",
    "3CJSQD5DTD2CKH9HTHAS",
    "9STCJD3D5C5HADQH9HKC",
    "TC7H4H8H3HTD6SAC7C2S",
    "QS9D5D3CJCKS4D6CJH2S",
    "9S6S3C7HTS4CKD6D3D9C",
    "2D9HAHAC7H2SJH3S7CQC",
    "QD9H3C2HACAS8SKD8CKH",
    "2D7STDTH6DJD8D4D2H5S",
    "8SQHKDJDQSJH4DKC5H3S",
    "3CKHQC6D8H3SAH7DTD2D",
    "5S9HQH4S6S6C6DTSTH7S",
    "6C4C6DQSJS9CTS3H8D8S",
    "JS5C7SAS2CAH2HAD5STC",
    "KD6C9C9DTS2SJC4H2CQD",
    "QS9HTC3HKCKS4H3CADTH",
    "KH9C2HKD9DTC7SKCJH2D",
    "7C3SKCAS8C5D9C9SQH3H",
    "2D8CTD4C2HQC5DTC2C7D",
    "KS4D6CQHTDKH5D7CAD8D",
    "2S9S8S4C8C3D6HQD7C7H",
    "6C8SQH5HTS5C3C4S2S2H",
    "8S6S2HJC3S3H9D8C2S7H",
    "QC2C8H9CACJD4C4H6S3S",
    "3H3S7D4C9S5H8HJC3DTC",
    "QH2S2D9SKDQD9HAD6D9C",
    "8D2DKS9SJC4CJDKC4STH",
    "KHTS6D4D5CKD5HAS9HAD",
    "QDJS7C6D5D5CTH5HQHQS",
    "9DQHKH5HJH4C4DTCTH6C",
    "KHASTS9DKD9C7S4D8H5S",
    "KHAS2S7D9D4CTSTHAH7C",
    "KS4DAC8S9S8DTHQH9D5C",
    "5D5C8CQSTC4C3D3S2C8D",
    "9DKS2D3CKC4S8CKH6CJC",
    "8HAH6H7D7SQD3C4C6CKC",
    "3H2CQH8HAS7D4C8C4HKC",
    "QD5S4H2CTDAHJHQH4C8S",
    "3HQS5SJS8H2S9H9C3S2C",
    "6HTS7SJCQDACTDKC5S3H",
    "QHASQS7DJCKC2C4C5C5S",
    "QH3DASJS4H8D7HJC2S9C",
    "5D4D2S4S9D9C2DQS8H7H",
    "6D7H3HJSTSAC2DJH7C8S",
    "JH5HKC3CTC5S9H4C8H9D",
    "8SKC5H9HADKS9DKH8DAH",
    "JC2H9HKS6S3HQC5HAH9C",
    "5CKH5SAD6CJC9HQC9CTD",
    "5S5DJCQH2DKS8HQS2HTS",
    "JH5H5SAH7H3C8SASTDKH",
    "6H3DJD2C4CKC7SAH6CJH",
    "4CKS9DAD7SKC7D8H3S9C",
    "7H5C5H3C8HQC3DKH6DJC",
    "2D4H5D7DQCADAH9HQH8H",
    "KD8CJS9D3S3C2H5D6D2S",
    "8S6STS3C6H8D5S3HTD6C",
    "KS3DJH9C7C9SQS5S4H6H",
    "7S6STH4SKCKD3SJCJHKS",
    "7C3C2S6DQH2C7S5H8HAH",
    "KC8DQD6DKH5C7H9D3D9C",
    "6H2D8SJS9S2S6DKC7CTC",
    "KD9CJH7HKC8S2S7S3D6H",
    "4H9H2D4C8H7H5S8S2H8D",
    "AD7C3C7S5S4D9H3DJCKH",
    "5DAS7D6D9CJC4CQHQSKH",
    "KDJD7D3DQSQC8S6DJSQD",
    "6S8C5SQHTH9HASAC2CJD",
    "QCKSQH7S3C4C5CKC5DAH",
    "6C4H9DAH2C3HKD3DTS5C",
    "TD8SQSASJS3HKDAC4HKS",
    "7D5DTS9H4H4C9C2H8CQC",
    "2C7D9H4DKS4CQHADKDJS",
    "QDADAHKH9DJS9HJCKDJD",
    "8S3C4STS7S4D5C2S6H7C",
    "JS7S5CKD6DQH8STD2H6S",
    "QH6CTC6HTD4C9D2HQC8H",
    "3DTS4D2H6H6S2C7H8S6C",
    "9H9DJDJH3SAH2C6S3H8S",
    "2CQS8C5S3H2S7D3CAD4S",
    "5CQCQHASTS4S6S4C5HJS",
    "JH5CTD4C6HJSKDKHQS4H",
    "TCKHJC4D9H9D8DKC3C8H",
    "2HTC8SAD9S4HTS7H2C5C",
    "4H2S6C5SKSAH9C7C8HKD",
    "TSQHTDQS3CJHAH2C8D7D",
    "5DKC3H5SAC4S7HQS4C2H",
    "3D7DQCKHJH6D6CTDTHKD",
    "5S8DTH6C9D7DKH8C9S6D",
    "JDQS7SQC2SQHJC4SKS8D",
    "7S5S9SJDKD9CJCAD2D7C",
    "4S5HAHJH9C5DTD7C2D6S",
    "KC6C7H6S9CQD5S4HKSTD",
    "6S8DKS2DTHTD9HJDTS3S",
    "KHJS4H5D9DTCTDQCJDTS",
    "QSQDACAD4C6S2DAS3HKC",
    "4C7C3CTDQS9CKCAS8DAD",
    "KC7HQC6D8H6S5SAH7S8C",
    "3SAD9HJC6DJDASKH6SJH",
    "AD3DTSKS7HJH2DJSQDAC",
    "9CJD7C6DTC6H6CJC3D3S",
    "QCKC3SJCKD2C8DAHQSTS",
    "ASKD3DJD8H7C8C5CQD6C"
} ;




#define TOT_CARDS  13
enum CARD{
    
    TWO   = 0,
    THREE = 1,
    FOUR  = 2,
    FIVE  = 3,
    SIX   = 4,
    SEVEN = 5,
    EIGHT = 6,
    NINE  = 7,
    TEN   = 8,
    JACK  = 9,
    QUEEN = 10,
    KING  = 11,
    ACE   = 12,
    ERR   = 13
        
};

CARD GetCard(char *t)
{
    switch(t[0])
    {
        case 'A':
            return ACE ;
            break;
        case 'K':
            return KING ;
            break;
        case 'Q':
            return QUEEN ;
            break;
        case 'J':
            return JACK ;
            break;
        case 'T':
            return TEN;
            break;
        case '9':
            return NINE ;
            break;
        case '8':
            return EIGHT ;
            break;
        case '7':
            return SEVEN ;
            break;
        case '6':
            return SIX ;
            break;
        case '5':
            return FIVE ;
            break;
        case '4':
            return FOUR;
            break;
        case '3':
            return THREE ;
            break;
        case '2':
            return TWO ;
            break;
        default:
            break;
            
            
    }
    return ERR;
}


void SolveProblem54()
{
    
    int player1Win = 0;
    int i;
    bool RF[2],SF[2],FOUROFKIND[2],FULLHS[2],FLUSH[2], STRAIGHT[2],THREEOFKIND[2], TPAIRS[2], ONEPAIR[2], HIGHCARD[2];
    bool Spade[2][TOT_CARDS], Heart[2][TOT_CARDS], Diamond[2][TOT_CARDS], Club[2][TOT_CARDS]  ;

    
    
    
    for( int j = 0 ; j < 1000 ; j++)
    {
        printf("HAND =   %s\n", Hands[j]);
        //initialize
        for(i = 0 ; i< 13 ; i++)
        {
            Spade[0][i] = Heart[0][i] = Diamond[0][i] = Club[0][i] = false;
            Spade[1][i] = Heart[1][i] = Diamond[1][i] = Club[1][i] = false;
        }
        for(i = 0 ; i < 5 ; i++) // Fill up player 1
        {
            CARD g = GetCard(& (Hands[j][2*i]) ) ;
            switch(Hands[j][2*i+1])
            {
                case 'S':
                    Spade[0][g] = true ;
                    break;
                case 'H':
                    Heart[0][g] = true ;
                    break;
                case 'D':
                    Diamond[0][g] = true ;
                    break;
                case 'C':
                    Club[0][g] = true ;
                    break;
            }
            
        }
        for(i = 5 ; i < 10 ; i++) // Fill up player 2
        {
            CARD g = GetCard(& (Hands[j][2*i]) ) ;
            switch(Hands[j][2*i +1])
            {
                case 'S':
                    Spade[1][g] = true ;
                    break;
                case 'H':
                    Heart[1][g] = true ;
                    break;
                case 'D':
                    Diamond[1][g] = true ;
                    break;
                case 'C':
                    Club[1][g] = true ;
                    break;
            }

        }
        
   
    
    }
    
 
    
    
}

