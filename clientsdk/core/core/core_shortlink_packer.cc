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

#include "core/core_shortlink_packer.h"


using namespace http;

void shortlink_pack(const std::string& _url, const std::map<std::string, std::string>& _headers, const AutoBuffer& _body, AutoBuffer& _out_buff) {

	Builder req_builder(kRequest);
	req_builder.Request().Method(RequestLine::kPost);
	req_builder.Request().Version(kVersion_1_0);

	req_builder.Fields().HeaderFiled(HeaderFields::MakeAcceptAll());
	req_builder.Fields().HeaderFiled(HeaderFields::KStringUserAgent, HeaderFields::KStringMicroMessenger);
	req_builder.Fields().HeaderFiled(HeaderFields::MakeCacheControlNoCache());
	req_builder.Fields().HeaderFiled(HeaderFields::MakeContentTypeOctetStream());
	req_builder.Fields().HeaderFiled(HeaderFields::MakeConnectionClose());

    char len_str[32] = {0};
	snprintf(len_str, sizeof(len_str), "%u", (unsigned int)_body.Length());
	req_builder.Fields().HeaderFiled(HeaderFields::KStringContentLength, len_str);

	for (std::map<std::string, std::string>::const_iterator iter = _headers.begin(); iter != _headers.end(); ++iter) {
		req_builder.Fields().HeaderFiled(iter->first.c_str(), iter->second.c_str());
	}

	req_builder.Request().Url(_url);
	req_builder.HeaderToBuffer(_out_buff);
	_out_buff.Write(_body.Ptr(), _body.Length());
}



