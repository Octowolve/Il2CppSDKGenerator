#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BarrierDecayConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BarrierDecayConfConfig"));
	}

	template <typename T = uintptr_t> T& EBarrierType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BarrierType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Decay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_EBarrierType() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D418D4))(this);
	}
	template <typename T = void> T set_EBarrierType(uintptr_t value) {
		return ((T (*)(BarrierDecayConfConfig*, uintptr_t))(Il2CppBase() + 0x2D418DC))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D418E4))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D419C0))(this);
	}
	template <typename T = int32_t> T get_BarrierType() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D419B8))(this);
	}
	template <typename T = void> T set_BarrierType(int32_t value) {
		return ((T (*)(BarrierDecayConfConfig*, int32_t))(Il2CppBase() + 0x2D41A90))(this, value);
	}
	template <typename T = float> T get_Decay() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D41A98))(this);
	}
	template <typename T = void> T set_Decay(float value) {
		return ((T (*)(BarrierDecayConfConfig*, float))(Il2CppBase() + 0x2D41AA0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BarrierDecayConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D41AA8))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(BarrierDecayConfConfig*))(Il2CppBase() + 0x2D41C00))(this);
	}

};

}
