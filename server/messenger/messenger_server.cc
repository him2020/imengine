/*
 *  Copyright (c) 2016, https://github.com/nebula-im
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// TODO(@benqi): 使用zrpc-code-gen代码生成工具自动生成

#include "messenger/messenger_server.h"

// #include "nebula/base/timer_manager.h"

bool MessengerServer::Initialize() {
  // RegisterService("tcpd", "tcp_server");
  RegisterService("messenger_server", "rpc_server", "zrpc");
  RegisterService("push_client", "rpc_client", "zrpc");

  BaseServer::Initialize();
  
  return true;
}


int main(int argc, char* argv[]) {
    return nebula::DoMain<MessengerServer>(argc, argv);
}
