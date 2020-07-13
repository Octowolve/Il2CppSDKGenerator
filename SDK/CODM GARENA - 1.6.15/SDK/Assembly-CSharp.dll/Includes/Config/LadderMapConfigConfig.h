#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LadderMapConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LadderMapConfigConfig"));
	}

	template <typename T = int32_t> T& Mapid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MaxMatchTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RoundTarget() {
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
		return ((T (*)(LadderMapConfigConfig*))(Il2CppBase() + 0x376BFB8))(this);
	}
	template <typename T = int32_t> T get_Mapid() {
		return ((T (*)(LadderMapConfigConfig*))(Il2CppBase() + 0x376C058))(this);
	}
	template <typename T = void> T set_Mapid(int32_t value) {
		return ((T (*)(LadderMapConfigConfig*, int32_t))(Il2CppBase() + 0x376C060))(this, value);
	}
	template <typename T = int32_t> T get_MaxMatchTime() {
		return ((T (*)(LadderMapConfigConfig*))(Il2CppBase() + 0x376C068))(this);
	}
	template <typename T = void> T set_MaxMatchTime(int32_t value) {
		return ((T (*)(LadderMapConfigConfig*, int32_t))(Il2CppBase() + 0x376C070))(this, value);
	}
	template <typename T = int32_t> T get_RoundTarget() {
		return ((T (*)(LadderMapConfigConfig*))(Il2CppBase() + 0x376C078))(this);
	}
	template <typename T = void> T set_RoundTarget(int32_t value) {
		return ((T (*)(LadderMapConfigConfig*, int32_t))(Il2CppBase() + 0x376C080))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LadderMapConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376C088))(this, bytes, position);
	}

};

}
