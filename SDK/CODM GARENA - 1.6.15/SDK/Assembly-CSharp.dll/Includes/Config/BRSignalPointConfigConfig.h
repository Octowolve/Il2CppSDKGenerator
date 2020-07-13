#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRSignalPointConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRSignalPointConfigConfig"));
	}

	template <typename T = int32_t> T& RangeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& StartValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EndValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& BuffId() {
		return *(T*)((uintptr_t)this + 0x18);
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
		return ((T (*)(BRSignalPointConfigConfig*))(Il2CppBase() + 0x2D54774))(this);
	}
	template <typename T = int32_t> T get_RangeType() {
		return ((T (*)(BRSignalPointConfigConfig*))(Il2CppBase() + 0x2D54814))(this);
	}
	template <typename T = void> T set_RangeType(int32_t value) {
		return ((T (*)(BRSignalPointConfigConfig*, int32_t))(Il2CppBase() + 0x2D5481C))(this, value);
	}
	template <typename T = int32_t> T get_StartValue() {
		return ((T (*)(BRSignalPointConfigConfig*))(Il2CppBase() + 0x2D54824))(this);
	}
	template <typename T = void> T set_StartValue(int32_t value) {
		return ((T (*)(BRSignalPointConfigConfig*, int32_t))(Il2CppBase() + 0x2D5482C))(this, value);
	}
	template <typename T = int32_t> T get_EndValue() {
		return ((T (*)(BRSignalPointConfigConfig*))(Il2CppBase() + 0x2D54834))(this);
	}
	template <typename T = void> T set_EndValue(int32_t value) {
		return ((T (*)(BRSignalPointConfigConfig*, int32_t))(Il2CppBase() + 0x2D5483C))(this, value);
	}
	template <typename T = int32_t> T get_BuffId() {
		return ((T (*)(BRSignalPointConfigConfig*))(Il2CppBase() + 0x2D54844))(this);
	}
	template <typename T = void> T set_BuffId(int32_t value) {
		return ((T (*)(BRSignalPointConfigConfig*, int32_t))(Il2CppBase() + 0x2D5484C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRSignalPointConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D54854))(this, bytes, position);
	}

};

}
