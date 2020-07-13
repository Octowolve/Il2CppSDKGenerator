#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ShareLimitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ShareLimitConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Num() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(ShareLimitConfig*))(Il2CppBase() + 0x30DF6BC))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(ShareLimitConfig*))(Il2CppBase() + 0x30DF75C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(ShareLimitConfig*, int32_t))(Il2CppBase() + 0x30DF764))(this, value);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(ShareLimitConfig*))(Il2CppBase() + 0x30DF76C))(this);
	}
	template <typename T = void> T set_Num(int32_t value) {
		return ((T (*)(ShareLimitConfig*, int32_t))(Il2CppBase() + 0x30DF774))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ShareLimitConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DF77C))(this, bytes, position);
	}

};

}
