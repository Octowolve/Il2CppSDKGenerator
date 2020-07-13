#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpNewGuidAmendExpConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpNewGuidAmendExpConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Exp() {
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
		return ((T (*)(SpNewGuidAmendExpConfConfig*))(Il2CppBase() + 0x30E72F4))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpNewGuidAmendExpConfConfig*))(Il2CppBase() + 0x30E7394))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpNewGuidAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E739C))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(SpNewGuidAmendExpConfConfig*))(Il2CppBase() + 0x30E73A4))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(SpNewGuidAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E73AC))(this, value);
	}
	template <typename T = int32_t> T get_Exp() {
		return ((T (*)(SpNewGuidAmendExpConfConfig*))(Il2CppBase() + 0x30E73B4))(this);
	}
	template <typename T = void> T set_Exp(int32_t value) {
		return ((T (*)(SpNewGuidAmendExpConfConfig*, int32_t))(Il2CppBase() + 0x30E73BC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpNewGuidAmendExpConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E73C4))(this, bytes, position);
	}

};

}
