#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TCloud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TCloud"));
	}

	template <typename T = Il2CppString*> static T& COSAPI_CGI_URL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SIGN_EXPIRED_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HTTP_TIMEOUT_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& appId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& secretId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& secretKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& timeOut() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& httpRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& header() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& targetText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Lang() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isDone() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isError() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getExpiredTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTextTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestLanguageDetect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCloudRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Request() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToELanguageCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int64_t> T getExpiredTime() {
		return ((T (*)(TCloud*))(Il2CppBase() + 0x27B95E8))(this);
	}
	template <typename T = void> T RequestTextTranslate(Il2CppString* SourceTxt, Il2CppString* Source, Il2CppString* Target) {
		return ((T (*)(TCloud*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x27B973C))(this, SourceTxt, Source, Target);
	}
	template <typename T = void> T RequestLanguageDetect(Il2CppString* Text) {
		return ((T (*)(TCloud*, Il2CppString*))(Il2CppBase() + 0x27BA05C))(this, Text);
	}
	template <typename T = void> T SendCloudRequest(Il2CppDictionary<Il2CppString*, Il2CppString*>* param) {
		return ((T (*)(TCloud*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x27B99D4))(this, param);
	}
	template <typename T = void> T Request() {
		return ((T (*)(TCloud*))(Il2CppBase() + 0x27BA8A4))(this);
	}
	template <typename T = uintptr_t> static T ToELanguageCode(Il2CppString* code) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x27BC810))(0, code);
	}

};

}
