#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKAccountRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKAccountRet"));
	}

	template <typename T = int32_t> T& channelID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& channel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& seqID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& username() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& uid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& token() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& expiretime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& isRegister() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& isSetPassword() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& isReceiveEmail() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& verifyCodeExpireTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_ChannelID() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4A8))(this);
	}
	template <typename T = void> T set_ChannelID(int32_t value) {
		return ((T (*)(MSDKAccountRet*, int32_t))(Il2CppBase() + 0x46BC4B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Channel() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4B8))(this);
	}
	template <typename T = void> T set_Channel(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC4C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_SeqID() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4C8))(this);
	}
	template <typename T = void> T set_SeqID(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC4D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Username() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4D8))(this);
	}
	template <typename T = void> T set_Username(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC4E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Uid() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4E8))(this);
	}
	template <typename T = void> T set_Uid(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC4F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC4F8))(this);
	}
	template <typename T = void> T set_Token(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC500))(this, value);
	}
	template <typename T = Il2CppString*> T get_Expiretime() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC508))(this);
	}
	template <typename T = void> T set_Expiretime(Il2CppString* value) {
		return ((T (*)(MSDKAccountRet*, Il2CppString*))(Il2CppBase() + 0x46BC510))(this, value);
	}
	template <typename T = int32_t> T get_IsRegister() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC518))(this);
	}
	template <typename T = void> T set_IsRegister(int32_t value) {
		return ((T (*)(MSDKAccountRet*, int32_t))(Il2CppBase() + 0x46BC520))(this, value);
	}
	template <typename T = int32_t> T get_IsSetPassword() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC528))(this);
	}
	template <typename T = void> T set_IsSetPassword(int32_t value) {
		return ((T (*)(MSDKAccountRet*, int32_t))(Il2CppBase() + 0x46BC530))(this, value);
	}
	template <typename T = int32_t> T get_IsReceiveEmail() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC538))(this);
	}
	template <typename T = void> T set_IsReceiveEmail(int32_t value) {
		return ((T (*)(MSDKAccountRet*, int32_t))(Il2CppBase() + 0x46BC540))(this, value);
	}
	template <typename T = int32_t> T get_VerifyCodeExpireTime() {
		return ((T (*)(MSDKAccountRet*))(Il2CppBase() + 0x46BC548))(this);
	}
	template <typename T = void> T set_VerifyCodeExpireTime(int32_t value) {
		return ((T (*)(MSDKAccountRet*, int32_t))(Il2CppBase() + 0x46BC550))(this, value);
	}

};

}
