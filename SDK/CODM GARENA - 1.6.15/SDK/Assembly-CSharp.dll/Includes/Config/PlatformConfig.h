#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PlatformConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PlatformConfig"));
	}

	template <typename T = int32_t> T& Channel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& TermsOfUseURL() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& PrivacyPolicyURL() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SupportURL() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AppStoreURL() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& GooglePlayURL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTermsOfUseURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrivacyPolicyURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0x3782DFC))(0);
	}
	template <typename T = Il2CppString*> static T GetTermsOfUseURL() {
		return ((T (*)(void *))(Il2CppBase() + 0x3782F0C))(0);
	}
	template <typename T = Il2CppString*> static T GetPrivacyPolicyURL() {
		return ((T (*)(void *))(Il2CppBase() + 0x3783240))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783574))(this);
	}
	template <typename T = int32_t> T get_Channel() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783614))(this);
	}
	template <typename T = void> T set_Channel(int32_t value) {
		return ((T (*)(PlatformConfig*, int32_t))(Il2CppBase() + 0x378361C))(this, value);
	}
	template <typename T = Il2CppString*> T get_TermsOfUseURL() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783238))(this);
	}
	template <typename T = void> T set_TermsOfUseURL(Il2CppString* value) {
		return ((T (*)(PlatformConfig*, Il2CppString*))(Il2CppBase() + 0x3783624))(this, value);
	}
	template <typename T = Il2CppString*> T get_PrivacyPolicyURL() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x378356C))(this);
	}
	template <typename T = void> T set_PrivacyPolicyURL(Il2CppString* value) {
		return ((T (*)(PlatformConfig*, Il2CppString*))(Il2CppBase() + 0x378362C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SupportURL() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783634))(this);
	}
	template <typename T = void> T set_SupportURL(Il2CppString* value) {
		return ((T (*)(PlatformConfig*, Il2CppString*))(Il2CppBase() + 0x378363C))(this, value);
	}
	template <typename T = Il2CppString*> T get_AppStoreURL() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783644))(this);
	}
	template <typename T = void> T set_AppStoreURL(Il2CppString* value) {
		return ((T (*)(PlatformConfig*, Il2CppString*))(Il2CppBase() + 0x378364C))(this, value);
	}
	template <typename T = Il2CppString*> T get_GooglePlayURL() {
		return ((T (*)(PlatformConfig*))(Il2CppBase() + 0x3783654))(this);
	}
	template <typename T = void> T set_GooglePlayURL(Il2CppString* value) {
		return ((T (*)(PlatformConfig*, Il2CppString*))(Il2CppBase() + 0x378365C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlatformConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3783664))(this, bytes, position);
	}

};

}
