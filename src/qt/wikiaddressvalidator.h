// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WIKI_QT_WIKIADDRESSVALIDATOR_H
#define WIKI_QT_WIKIADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class WIKIAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WIKIAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** WIKI address widget validator, checks for a valid wiki address.
 */
class WIKIAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WIKIAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // WIKI_QT_WIKIADDRESSVALIDATOR_H
