#pragma once
#include "log.h"
namespace infinite_sense {
inline void ProcessLOGData(const nlohmann::json &data) {
  if (data["f"] != "log") {
    return;
  }
  LOG(data["l"]) << data["msg"];
}

}  // namespace infinite_sense