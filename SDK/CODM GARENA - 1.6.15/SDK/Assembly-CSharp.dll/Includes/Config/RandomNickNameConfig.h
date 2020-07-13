#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RandomNickNameConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RandomNickNameConfig"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_AName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_BName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6DD8))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6E78))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(RandomNickNameConfig*, int32_t))(Il2CppBase() + 0x30D6E80))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_AName() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6E88))(this);
	}
	template <typename T = void> T set_LOCID_AName(Il2CppString* value) {
		return ((T (*)(RandomNickNameConfig*, Il2CppString*))(Il2CppBase() + 0x30D6E90))(this, value);
	}
	template <typename T = Il2CppString*> T get_AName() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6E98))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_BName() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6EA8))(this);
	}
	template <typename T = void> T set_LOCID_BName(Il2CppString* value) {
		return ((T (*)(RandomNickNameConfig*, Il2CppString*))(Il2CppBase() + 0x30D6EB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_BName() {
		return ((T (*)(RandomNickNameConfig*))(Il2CppBase() + 0x30D6EB8))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RandomNickNameConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30D6EC8))(this, bytes, position);
	}

};

}
