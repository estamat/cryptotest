Shared Libraries
================

## wikiconsensus

The purpose of this library is to make the verification functionality that is critical to WIKI's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `wikiconsensus.h` located in  `src/script/wikiconsensus.h`.

#### Version

`wikiconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`wikiconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `wikiconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `wikiconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `wikiconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/wiki/bips/blob/master/bip-0016.mediawiki)) subscripts
- `wikiconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/wiki/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `wikiconsensus_ERR_OK` - No errors with input parameters *(see the return value of `wikiconsensus_verify_script` for the verification status)*
- `wikiconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `wikiconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `wikiconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NWIKI](https://github.com/NicolasDorier/NWIKI/blob/master/NWIKI/Script.cs#L814) (.NET Bindings)
- [node-libwikiconsensus](https://github.com/bitpay/node-libwikiconsensus) (Node.js Bindings)
- [java-libwikiconsensus](https://github.com/dexX7/java-libwikiconsensus) (Java Bindings)
- [wikiconsensus-php](https://github.com/Bit-Wasp/wikiconsensus-php) (PHP Bindings)
