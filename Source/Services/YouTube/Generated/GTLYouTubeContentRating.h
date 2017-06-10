<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2016 Google Inc.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeContentRating.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
<<<<<<< HEAD
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeContentRating (0 custom class methods, 63 custom properties)
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeContentRating (0 custom class methods, 66 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLYouTubeContentRating
//

// Ratings schemes. The country-specific ratings are mostly for movies and
<<<<<<< HEAD
// shows.

@interface GTLYouTubeContentRating : GTLObject

// Rating system in Australia - Australian Classification Board
@property (copy) NSString *acbRating;

// Rating system for Italy - Autorit� per le Garanzie nelle Comunicazioni
@property (copy) NSString *agcomRating;

// Rating system for Chile - Asociaci�n Nacional de Televisi�n
@property (copy) NSString *anatelRating;

// British Board of Film Classification
@property (copy) NSString *bbfcRating;

// Rating system for Thailand - Board of Filmand Video Censors
@property (copy) NSString *bfvcRating;

// Rating system for Austria - Bundesministeriums f�r Unterricht, Kunst und
// Kultur!
@property (copy) NSString *bmukkRating;

// Rating system for French Canadian TV - Regie du cinema
@property (copy) NSString *catvfrRating;

// Rating system for Canadian TV - Canadian TV Classification System
@property (copy) NSString *catvRating;

// Rating system in India - Central Board of Film Certification
@property (copy) NSString *cbfcRating;

// Rating system for Chile - Consejo de Calificaci�n Cinematogr�fica
@property (copy) NSString *cccRating;

// Rating system for Portugal - Comiss�o de Classifica��o de Espect�culos
@property (copy) NSString *cceRating;

// Rating system for Switzerland - Switzerland Rating System
@property (copy) NSString *chfilmRating;

// Canadian Home Video Rating System
@property (copy) NSString *chvrsRating;

// Rating system for Belgium - Belgium Rating System
@property (copy) NSString *cicfRating;

// Rating system for Romania - CONSILIUL NATIONAL AL AUDIOVIZUALULUI - CNA
@property (copy) NSString *cnaRating;

// Rating system for France - Conseil sup�rieur de l?audiovisuel
@property (copy) NSString *csaRating;

// Rating system for Luxembourg - Commission de surveillance de la
// classification des films
@property (copy) NSString *cscfRating;

// Rating system for Czech republic - Czech republic Rating System
@property (copy) NSString *czfilmRating;

// Rating system in Brazil - Department of Justice, Rating, Titles and
// Qualification
@property (copy) NSString *djctqRating;

// Rating system for Estonia - Estonia Rating System
@property (copy) NSString *eefilmRating;

// Rating system for Egypt - Egypt Rating System
@property (copy) NSString *egfilmRating;

// Rating system in Japan - Eiga Rinri Kanri Iinkai
@property (copy) NSString *eirinRating;

// Rating system for Malaysia - Film Censorship Board of Malaysia
@property (copy) NSString *fcbmRating;

// Rating system for Hong kong - Office for Film, Newspaper and Article
// Administration
@property (copy) NSString *fcoRating;

// Rating system in France - French Minister of Culture
@property (copy) NSString *fmocRating;

// Rating system for South africa - Film & Publication Board
@property (copy) NSString *fpbRating;

// Rating system in Germany - Voluntary Self Regulation of the Movie Industry
@property (copy) NSString *fskRating;

// Rating system for Greece - Greece Rating System
@property (copy) NSString *grfilmRating;

// Rating system in Spain - Instituto de Cinematografia y de las Artes
// Audiovisuales
@property (copy) NSString *icaaRating;

// Rating system in Ireland - Irish Film Classification Office
@property (copy) NSString *ifcoRating;

// Rating system for Israel - Israel Rating System
@property (copy) NSString *ilfilmRating;

// Rating system for Argentina - Instituto Nacional de Cine y Artes
// Audiovisuales
@property (copy) NSString *incaaRating;

// Rating system for Kenya - Kenya Film Classification Board
@property (copy) NSString *kfcbRating;

// Rating system for Netherlands - Nederlands Instituut voor de Classificatie
// van Audiovisuele Media
@property (copy) NSString *kijkwijzerRating;

// Rating system in South Korea - Korea Media Rating Board
@property (copy) NSString *kmrbRating;

// Rating system for Indonesia - Lembaga Sensor Film
@property (copy) NSString *lsfRating;

// Rating system for Malta - Film Age-Classification Board
@property (copy) NSString *mccaaRating;

// Rating system for Denmark - The Media Council for Children and Young People
@property (copy) NSString *mccypRating;

// Rating system for Singapore - Media Development Authority
@property (copy) NSString *mdaRating;

// Rating system for Norway - Medietilsynet
@property (copy) NSString *medietilsynetRating;

// Rating system for Finland - Finnish Centre for Media Education and
// Audiovisual Media
@property (copy) NSString *mekuRating;

// Rating system in Italy - Ministero dei Beni e delle Attivita Culturali e del
// Turismo
@property (copy) NSString *mibacRating;

// Rating system for Colombia - MoC
@property (copy) NSString *mocRating;

// Rating system for Taiwan - Ministry of Culture - Tawan
@property (copy) NSString *moctwRating;

// Motion Picture Association of America rating for the content.
@property (copy) NSString *mpaaRating;

// Rating system for Philippines - MOVIE AND TELEVISION REVIEW AND
// CLASSIFICATION BOARD
@property (copy) NSString *mtrcbRating;

// Rating system for Poland - National Broadcasting Council
@property (copy) NSString *nbcplRating;

// Rating system for Maldives - National Bureau of Classification
@property (copy) NSString *nbcRating;

// Rating system for Bulgaria - National Film Centre
@property (copy) NSString *nfrcRating;

// Rating system for Nigeria - National Film and Video Censors Board
@property (copy) NSString *nfvcbRating;

// Rating system for Latvia - National Film Center of Latvia
@property (copy) NSString *nkclvRating;

// Rating system in New Zealand - Office of Film and Literature Classification
@property (copy) NSString *oflcRating;

// Rating system for Peru - Peru Rating System
@property (copy) NSString *pefilmRating;

// Rating system for Hungary - Rating Committee of the National Office of Film
@property (copy) NSString *rcnofRating;

// Rating system for Venezuela - SiBCI
@property (copy) NSString *resorteviolenciaRating;

// Rating system in Mexico - General Directorate of Radio, Television and
// Cinematography
@property (copy) NSString *rtcRating;

// Rating system for Ireland - Raidi� Teilif�s �ireann
@property (copy) NSString *rteRating;

// Rating system in Russia
@property (copy) NSString *russiaRating;

// Rating system for Slovakia - Slovakia Rating System
@property (copy) NSString *skfilmRating;

// Rating system for Iceland - SMAIS
@property (copy) NSString *smaisRating;

// Rating system for Sweden - Statens medier�d (National Media Council)
@property (copy) NSString *smsaRating;

// TV Parental Guidelines rating of the content.
@property (copy) NSString *tvpgRating;

// Internal YouTube rating.
@property (copy) NSString *ytRating;
=======
// shows. NEXT_ID: 67

@interface GTLYouTubeContentRating : GTLObject

// The video's Australian Classification Board (ACB) or Australian
// Communications and Media Authority (ACMA) rating. ACMA ratings are used to
// classify children's television programming.
@property (nonatomic, copy) NSString *acbRating;

// The video's rating from Italy's Autorità per le Garanzie nelle Comunicazioni
// (AGCOM).
@property (nonatomic, copy) NSString *agcomRating;

// The video's Anatel (Asociación Nacional de Televisión) rating for Chilean
// television.
@property (nonatomic, copy) NSString *anatelRating;

// The video's British Board of Film Classification (BBFC) rating.
@property (nonatomic, copy) NSString *bbfcRating;

// The video's rating from Thailand's Board of Film and Video Censors.
@property (nonatomic, copy) NSString *bfvcRating;

// The video's rating from the Austrian Board of Media Classification
// (Bundesministerium für Unterricht, Kunst und Kultur).
@property (nonatomic, copy) NSString *bmukkRating;

// The video's rating from the Canadian Radio-Television and Telecommunications
// Commission (CRTC) for Canadian French-language broadcasts. For more
// information, see the Canadian Broadcast Standards Council website.
@property (nonatomic, copy) NSString *catvfrRating;

// Rating system for Canadian TV - Canadian TV Classification System The video's
// rating from the Canadian Radio-Television and Telecommunications Commission
// (CRTC) for Canadian English-language broadcasts. For more information, see
// the Canadian Broadcast Standards Council website.
@property (nonatomic, copy) NSString *catvRating;

// The video's Central Board of Film Certification (CBFC - India) rating.
@property (nonatomic, copy) NSString *cbfcRating;

// The video's Consejo de Calificación Cinematográfica (Chile) rating.
@property (nonatomic, copy) NSString *cccRating;

// The video's rating from Portugal's Comissão de Classificação de Espect´culos.
@property (nonatomic, copy) NSString *cceRating;

// The video's rating in Switzerland.
@property (nonatomic, copy) NSString *chfilmRating;

// The video's Canadian Home Video Rating System (CHVRS) rating.
@property (nonatomic, copy) NSString *chvrsRating;

// The video's rating from the Commission de Contrôle des Films (Belgium).
@property (nonatomic, copy) NSString *cicfRating;

// The video's rating from Romania's CONSILIUL NATIONAL AL AUDIOVIZUALULUI
// (CNA).
@property (nonatomic, copy) NSString *cnaRating;

// Rating system in France - Commission de classification cinematographique
@property (nonatomic, copy) NSString *cncRating;

// The video's rating from France's Conseil supérieur de l?audiovisuel, which
// rates broadcast content.
@property (nonatomic, copy) NSString *csaRating;

// The video's rating from Luxembourg's Commission de surveillance de la
// classification des films (CSCF).
@property (nonatomic, copy) NSString *cscfRating;

// The video's rating in the Czech Republic.
@property (nonatomic, copy) NSString *czfilmRating;

// The video's Departamento de Justiça, Classificação, Qualificação e Títulos
// (DJCQT - Brazil) rating.
@property (nonatomic, copy) NSString *djctqRating;

// Reasons that explain why the video received its DJCQT (Brazil) rating.
@property (nonatomic, retain) NSArray *djctqRatingReasons;  // of NSString

// Rating system in Turkey - Evaluation and Classification Board of the Ministry
// of Culture and Tourism
@property (nonatomic, copy) NSString *ecbmctRating;

// The video's rating in Estonia.
@property (nonatomic, copy) NSString *eefilmRating;

// The video's rating in Egypt.
@property (nonatomic, copy) NSString *egfilmRating;

// The video's Eirin (映倫) rating. Eirin is the Japanese rating system.
@property (nonatomic, copy) NSString *eirinRating;

// The video's rating from Malaysia's Film Censorship Board.
@property (nonatomic, copy) NSString *fcbmRating;

// The video's rating from Hong Kong's Office for Film, Newspaper and Article
// Administration.
@property (nonatomic, copy) NSString *fcoRating;

// This property has been deprecated. Use the
// contentDetails.contentRating.cncRating instead.
@property (nonatomic, copy) NSString *fmocRating;

// The video's rating from South Africa's Film and Publication Board.
@property (nonatomic, copy) NSString *fpbRating;

// The video's Freiwillige Selbstkontrolle der Filmwirtschaft (FSK - Germany)
// rating.
@property (nonatomic, copy) NSString *fskRating;

// The video's rating in Greece.
@property (nonatomic, copy) NSString *grfilmRating;

// The video's Instituto de la Cinematografía y de las Artes Audiovisuales (ICAA
// - Spain) rating.
@property (nonatomic, copy) NSString *icaaRating;

// The video's Irish Film Classification Office (IFCO - Ireland) rating. See the
// IFCO website for more information.
@property (nonatomic, copy) NSString *ifcoRating;

// The video's rating in Israel.
@property (nonatomic, copy) NSString *ilfilmRating;

// The video's INCAA (Instituto Nacional de Cine y Artes Audiovisuales -
// Argentina) rating.
@property (nonatomic, copy) NSString *incaaRating;

// The video's rating from the Kenya Film Classification Board.
@property (nonatomic, copy) NSString *kfcbRating;

// voor de Classificatie van Audiovisuele Media (Netherlands).
@property (nonatomic, copy) NSString *kijkwijzerRating;

// The video's Korea Media Rating Board (영상물등급위원회) rating. The KMRB rates videos
// in South Korea.
@property (nonatomic, copy) NSString *kmrbRating;

// The video's rating from Indonesia's Lembaga Sensor Film.
@property (nonatomic, copy) NSString *lsfRating;

// The video's rating from Malta's Film Age-Classification Board.
@property (nonatomic, copy) NSString *mccaaRating;

// The video's rating from the Danish Film Institute's (Det Danske Filminstitut)
// Media Council for Children and Young People.
@property (nonatomic, copy) NSString *mccypRating;

// The video's rating from Singapore's Media Development Authority (MDA) and,
// specifically, it's Board of Film Censors (BFC).
@property (nonatomic, copy) NSString *mdaRating;

// The video's rating from Medietilsynet, the Norwegian Media Authority.
@property (nonatomic, copy) NSString *medietilsynetRating;

// The video's rating from Finland's Kansallinen Audiovisuaalinen Instituutti
// (National Audiovisual Institute).
@property (nonatomic, copy) NSString *mekuRating;

// The video's rating from the Ministero dei Beni e delle Attività Culturali e
// del Turismo (Italy).
@property (nonatomic, copy) NSString *mibacRating;

// The video's Ministerio de Cultura (Colombia) rating.
@property (nonatomic, copy) NSString *mocRating;

// The video's rating from Taiwan's Ministry of Culture (文化部).
@property (nonatomic, copy) NSString *moctwRating;

// The video's Motion Picture Association of America (MPAA) rating.
@property (nonatomic, copy) NSString *mpaaRating;

// The video's rating from the Movie and Television Review and Classification
// Board (Philippines).
@property (nonatomic, copy) NSString *mtrcbRating;

// The video's rating in Poland.
@property (nonatomic, copy) NSString *nbcplRating;

// The video's rating from the Maldives National Bureau of Classification.
@property (nonatomic, copy) NSString *nbcRating;

// The video's rating from the Bulgarian National Film Center.
@property (nonatomic, copy) NSString *nfrcRating;

// The video's rating from Nigeria's National Film and Video Censors Board.
@property (nonatomic, copy) NSString *nfvcbRating;

// The video's rating from the Nacionãlais Kino centrs (National Film Centre of
// Latvia).
@property (nonatomic, copy) NSString *nkclvRating;

// The video's Office of Film and Literature Classification (OFLC - New Zealand)
// rating.
@property (nonatomic, copy) NSString *oflcRating;

// The video's rating in Peru.
@property (nonatomic, copy) NSString *pefilmRating;

// The video's rating from the Hungarian Nemzeti Filmiroda, the Rating Committee
// of the National Office of Film.
@property (nonatomic, copy) NSString *rcnofRating;

// The video's rating in Venezuela.
@property (nonatomic, copy) NSString *resorteviolenciaRating;

// The video's General Directorate of Radio, Television and Cinematography
// (Mexico) rating.
@property (nonatomic, copy) NSString *rtcRating;

// The video's rating from Ireland's Raidió Teilifís Éireann.
@property (nonatomic, copy) NSString *rteRating;

// The video's National Film Registry of the Russian Federation (MKRF - Russia)
// rating.
@property (nonatomic, copy) NSString *russiaRating;

// The video's rating in Slovakia.
@property (nonatomic, copy) NSString *skfilmRating;

// The video's rating in Iceland.
@property (nonatomic, copy) NSString *smaisRating;

// The video's rating from Statens medieråd (Sweden's National Media Council).
@property (nonatomic, copy) NSString *smsaRating;

// The video's TV Parental Guidelines (TVPG) rating.
@property (nonatomic, copy) NSString *tvpgRating;

// A rating that YouTube uses to identify age-restricted content.
@property (nonatomic, copy) NSString *ytRating;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
