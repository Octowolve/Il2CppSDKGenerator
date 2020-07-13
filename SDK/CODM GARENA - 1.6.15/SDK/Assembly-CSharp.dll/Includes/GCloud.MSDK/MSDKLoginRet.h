#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLoginRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLoginRet"));
	}

	template <typename T = Il2CppString*> T& openID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& token() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& tokenExpire() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& firstLogin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& regChannelDis() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& gender() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& birthdate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& pictureUrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& pf() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& pfKey() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& realNameAuth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& channelID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& channel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& channelInfo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& confirmCode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int64_t> T& confirmCodeExpireTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& bindList() {
		return *(T*)((uintptr_t)this + 0x70);
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

	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D532C))(this);
	}
	template <typename T = void> T set_OpenId(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D5334))(this, value);
	}
	template <typename T = Il2CppString*> T get_Token() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D533C))(this);
	}
	template <typename T = void> T set_Token(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D5344))(this, value);
	}
	template <typename T = int64_t> T get_TokenExpire() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D534C))(this);
	}
	template <typename T = void> T set_TokenExpire(int64_t value) {
		return ((T (*)(MSDKLoginRet*, int64_t))(Il2CppBase() + 0x46D5354))(this, value);
	}
	template <typename T = int32_t> T get_FirstLogin() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5364))(this);
	}
	template <typename T = void> T set_FirstLogin(int32_t value) {
		return ((T (*)(MSDKLoginRet*, int32_t))(Il2CppBase() + 0x46D536C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RegChannelDis() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5374))(this);
	}
	template <typename T = void> T set_RegChannelDis(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D537C))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5384))(this);
	}
	template <typename T = void> T set_UserName(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D538C))(this, value);
	}
	template <typename T = int32_t> T get_Gender() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5394))(this);
	}
	template <typename T = void> T set_Gender(int32_t value) {
		return ((T (*)(MSDKLoginRet*, int32_t))(Il2CppBase() + 0x46D539C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Birthdate() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53A4))(this);
	}
	template <typename T = void> T set_Birthdate(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D53AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PictureUrl() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53B4))(this);
	}
	template <typename T = void> T set_PictureUrl(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D53BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Pf() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53C4))(this);
	}
	template <typename T = void> T set_Pf(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D53CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PfKey() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53D4))(this);
	}
	template <typename T = void> T set_PfKey(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D53DC))(this, value);
	}
	template <typename T = bool> T get_RealNameAuth() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53E4))(this);
	}
	template <typename T = void> T set_RealNameAuth(bool value) {
		return ((T (*)(MSDKLoginRet*, bool))(Il2CppBase() + 0x46D53EC))(this, value);
	}
	template <typename T = int32_t> T get_ChannelId() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D53F4))(this);
	}
	template <typename T = void> T set_ChannelId(int32_t value) {
		return ((T (*)(MSDKLoginRet*, int32_t))(Il2CppBase() + 0x46D53FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Channel() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5404))(this);
	}
	template <typename T = void> T set_Channel(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D540C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChannelInfo() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5414))(this);
	}
	template <typename T = void> T set_ChannelInfo(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D541C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfirmCode() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5424))(this);
	}
	template <typename T = void> T set_ConfirmCode(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D542C))(this, value);
	}
	template <typename T = int64_t> T get_ConfirmCodeExpireTime() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D5434))(this);
	}
	template <typename T = void> T set_ConfirmCodeExpireTime(int64_t value) {
		return ((T (*)(MSDKLoginRet*, int64_t))(Il2CppBase() + 0x46D543C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BindList() {
		return ((T (*)(MSDKLoginRet*))(Il2CppBase() + 0x46D544C))(this);
	}
	template <typename T = void> T set_BindList(Il2CppString* value) {
		return ((T (*)(MSDKLoginRet*, Il2CppString*))(Il2CppBase() + 0x46D5454))(this, value);
	}

};

}
