//@abi table skininfo i64
struct skininfo {
    uint64_t code = 0;
    uint16_t count = 0;
    uint64_t v1 = 0;
    uint64_t v2 = 0;

    uint64_t primary_key() const {
        return code;
    }

    EOSLIB_SERIALIZE(
            skininfo,
            (code)
            (count)
            (v1)
            (v2)
    )
};

typedef eosio::multi_index< N(skininfo), skininfo > skininfo_table;
