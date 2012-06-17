/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

/* This file is autogenerated from the Unicode 6.1 database. Do not edit */

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of internal files.  This header file may change from version to version
// without notice, or even be removed.
//
// We mean it.
//

#ifndef QUNICODETABLES_P_H
#define QUNICODETABLES_P_H

#include <QtCore/qchar.h>

QT_BEGIN_NAMESPACE

#define UNICODE_DATA_VERSION QChar::Unicode_6_1

namespace QUnicodeTables {

struct Properties {
    ushort category            : 8; /* 5 used */
    ushort direction           : 8; /* 5 used */
    ushort combiningClass      : 8;
    ushort joining             : 2;
    signed short digitValue    : 6; /* 5 used */
    signed short mirrorDiff    : 16;
    signed short lowerCaseDiff : 16;
    signed short upperCaseDiff : 16;
    signed short titleCaseDiff : 16;
    signed short caseFoldDiff  : 16;
    ushort lowerCaseSpecial    : 1;
    ushort upperCaseSpecial    : 1;
    ushort titleCaseSpecial    : 1;
    ushort caseFoldSpecial     : 1;
    ushort unicodeVersion      : 4;
    ushort graphemeBreak       : 8; /* 4 used */
    ushort wordBreak           : 8; /* 4 used */
    ushort sentenceBreak       : 8; /* 4 used */
    ushort line_break_class    : 8; /* 6 used */
    ushort script              : 8; /* 5 used */
};

Q_CORE_EXPORT const Properties * QT_FASTCALL properties(uint ucs4);
Q_CORE_EXPORT const Properties * QT_FASTCALL properties(ushort ucs2);

// See http://www.unicode.org/reports/tr24/tr24-5.html
enum Script {
    Common,
    Greek,
    Cyrillic,
    Armenian,
    Hebrew,
    Arabic,
    Syriac,
    Thaana,
    Devanagari,
    Bengali,
    Gurmukhi,
    Gujarati,
    Oriya,
    Tamil,
    Telugu,
    Kannada,
    Malayalam,
    Sinhala,
    Thai,
    Lao,
    Tibetan,
    Myanmar,
    Georgian,
    Hangul,
    Ogham,
    Runic,
    Khmer,
    Nko,
    Inherited,
    ScriptCount = Inherited,
    Latin = Common,
    Ethiopic = Common,
    Cherokee = Common,
    CanadianAboriginal = Common,
    Mongolian = Common,
    Hiragana = Common,
    Katakana = Common,
    Bopomofo = Common,
    Han = Common,
    Yi = Common,
    OldItalic = Common,
    Gothic = Common,
    Deseret = Common,
    Tagalog = Common,
    Hanunoo = Common,
    Buhid = Common,
    Tagbanwa = Common,
    Limbu = Common,
    TaiLe = Common,
    LinearB = Common,
    Ugaritic = Common,
    Shavian = Common,
    Osmanya = Common,
    Cypriot = Common,
    Braille = Common,
    Buginese = Common,
    Coptic = Common,
    NewTaiLue = Common,
    Glagolitic = Common,
    Tifinagh = Common,
    SylotiNagri = Common,
    OldPersian = Common,
    Kharoshthi = Common,
    Balinese = Common,
    Cuneiform = Common,
    Phoenician = Common,
    PhagsPa = Common,
    Sundanese = Common,
    Lepcha = Common,
    OlChiki = Common,
    Vai = Common,
    Saurashtra = Common,
    KayahLi = Common,
    Rejang = Common,
    Lycian = Common,
    Carian = Common,
    Lydian = Common,
    Cham = Common,
    TaiTham = Common,
    TaiViet = Common,
    Avestan = Common,
    EgyptianHieroglyphs = Common,
    Samaritan = Common,
    Lisu = Common,
    Bamum = Common,
    Javanese = Common,
    MeeteiMayek = Common,
    ImperialAramaic = Common,
    OldSouthArabian = Common,
    InscriptionalParthian = Common,
    InscriptionalPahlavi = Common,
    OldTurkic = Common,
    Kaithi = Common,
    Batak = Common,
    Brahmi = Common,
    Mandaic = Common,
    Chakma = Common,
    MeroiticCursive = Common,
    MeroiticHieroglyphs = Common,
    Miao = Common,
    Sharada = Common,
    SoraSompeng = Common,
    Takri = Common
};

enum GraphemeBreak {
    GraphemeBreakOther,
    GraphemeBreakCR,
    GraphemeBreakLF,
    GraphemeBreakControl,
    GraphemeBreakExtend,
    GraphemeBreakPrepend,
    GraphemeBreakSpacingMark,
    GraphemeBreakL,
    GraphemeBreakV,
    GraphemeBreakT,
    GraphemeBreakLV,
    GraphemeBreakLVT
};

enum WordBreak {
    WordBreakOther,
    WordBreakCR,
    WordBreakLF,
    WordBreakNewline,
    WordBreakFormat,
    WordBreakKatakana,
    WordBreakALetter,
    WordBreakMidNumLet,
    WordBreakMidLetter,
    WordBreakMidNum,
    WordBreakNumeric,
    WordBreakExtendNumLet
};

enum SentenceBreak {
    SentenceBreakOther,
    SentenceBreakCR,
    SentenceBreakLF,
    SentenceBreakSep,
    SentenceBreakFormat,
    SentenceBreakSp,
    SentenceBreakLower,
    SentenceBreakUpper,
    SentenceBreakOLetter,
    SentenceBreakNumeric,
    SentenceBreakATerm,
    SentenceBreakSContinue,
    SentenceBreakSTerm,
    SentenceBreakClose
};

// see http://www.unicode.org/reports/tr14/tr14-28.html
// we don't use the XX and AI classes and map them to AL instead.
enum LineBreakClass {
    LineBreak_OP, LineBreak_CL, LineBreak_CP, LineBreak_QU, LineBreak_GL,
    LineBreak_NS, LineBreak_EX, LineBreak_SY, LineBreak_IS, LineBreak_PR,
    LineBreak_PO, LineBreak_NU, LineBreak_AL, LineBreak_HL, LineBreak_ID,
    LineBreak_IN, LineBreak_HY, LineBreak_BA, LineBreak_BB, LineBreak_B2,
    LineBreak_ZW, LineBreak_CM, LineBreak_WJ, LineBreak_H2, LineBreak_H3,
    LineBreak_JL, LineBreak_JV, LineBreak_JT, LineBreak_CB, LineBreak_SA,
    LineBreak_SG, LineBreak_SP, LineBreak_CR, LineBreak_LF, LineBreak_BK
};

Q_CORE_EXPORT GraphemeBreak QT_FASTCALL graphemeBreakClass(uint ucs4);
inline GraphemeBreak graphemeBreakClass(QChar ch)
{ return graphemeBreakClass(ch.unicode()); }

Q_CORE_EXPORT WordBreak QT_FASTCALL wordBreakClass(uint ucs4);
inline WordBreak wordBreakClass(QChar ch)
{ return wordBreakClass(ch.unicode()); }

Q_CORE_EXPORT SentenceBreak QT_FASTCALL sentenceBreakClass(uint ucs4);
inline SentenceBreak sentenceBreakClass(QChar ch)
{ return sentenceBreakClass(ch.unicode()); }

Q_CORE_EXPORT LineBreakClass QT_FASTCALL lineBreakClass(uint ucs4);
inline LineBreakClass lineBreakClass(QChar ch)
{ return lineBreakClass(ch.unicode()); }

Q_CORE_EXPORT Script QT_FASTCALL script(uint ucs4);
inline Script script(QChar ch)
{ return script(ch.unicode()); }

} // namespace QUnicodeTables

QT_END_NAMESPACE

#endif // QUNICODETABLES_P_H
