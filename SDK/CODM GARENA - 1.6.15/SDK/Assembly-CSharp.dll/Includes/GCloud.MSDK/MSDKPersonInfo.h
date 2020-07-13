#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKPersonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKPersonInfo"));
	}

	template <typename T = Il2CppString*> T& openid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& gender() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& pictureUrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& country() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& province() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& city() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& language() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = Il2CppString*> T get_Openid() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D96D8))(this);
	}
	template <typename T = void> T set_Openid(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D96E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserName() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D96E8))(this);
	}
	template <typename T = void> T set_UserName(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D96F0))(this, value);
	}
	template <typename T = int32_t> T get_Gender() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D96F8))(this);
	}
	template <typename T = void> T set_Gender(int32_t value) {
		return ((T (*)(MSDKPersonInfo*, int32_t))(Il2CppBase() + 0x46D9700))(this, value);
	}
	template <typename T = Il2CppString*> T get_PictureUrl() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D9708))(this);
	}
	template <typename T = void> T set_PictureUrl(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D9710))(this, value);
	}
	template <typename T = Il2CppString*> T get_Country() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D9718))(this);
	}
	template <typename T = void> T set_Country(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D9720))(this, value);
	}
	template <typename T = Il2CppString*> T get_Province() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D9728))(this);
	}
	template <typename T = void> T set_Province(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D9730))(this, value);
	}
	template <typename T = Il2CppString*> T get_City() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D9738))(this);
	}
	template <typename T = void> T set_City(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D9740))(this, value);
	}
	template <typename T = Il2CppString*> T get_Language() {
		return ((T (*)(MSDKPersonInfo*))(Il2CppBase() + 0x46D9748))(this);
	}
	template <typename T = void> T set_Language(Il2CppString* value) {
		return ((T (*)(MSDKPersonInfo*, Il2CppString*))(Il2CppBase() + 0x46D9750))(this, value);
	}

};

}
