#define __STDC_FORMAT_MACROS
#include "build_version.h"
#include "rocksdb/utilities/transaction.h"
#include "rocksdb/c.h"
#include <stdint.h>
const char* rocksdb_build_git_sha = "rocksdb_build_git_sha:2b38e2dd6602a17a2010308580fd5d8c91dea650";
const char* rocksdb_build_git_date = "rocksdb_build_git_date:2019-06-04";
const char* rocksdb_build_compile_date = __DATE__;
#include <inttypes.h>

using rocksdb::Transaction;

extern "C" {

  struct rocksdb_transaction_t {
    Transaction* rep;
  };

  uint64_t get_transaction_id(rocksdb_transaction_t* txn) {
    printf("%" PRIu64 " bv\n", txn->rep->GetID());
    return txn->rep->GetID();
  }

}