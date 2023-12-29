#pragma once

#include "common/common.hpp"

// https://www.gnu.org/software/gnu-c-manual/gnu-c-manual.pdf
enum class data_type {
    int_type,

};

// 符号范围
enum class scope_type {
    CONSTANTS = 1,  // 常量
    LABELS,         // 标号
    GLOBAL,         // 全局变量
    PARAM,          // 参数
    LOCAL           // 局部变量， 第k层的变量为LOCAL+K
};

inline int local_scope_k(int k) {
    return static_cast<int>(scope_type::LOCAL)+k;
}

struct symbol {
    // 变量表示为名字，常量则是常量值
    string name;
    // scope 对应 scope_type
    int scope;
};

struct symbol_entry {
    symbol sym;
    symbol_entry* link;
};

struct table {
    int level;
    int prev;   // 上一个域的table
    
};
