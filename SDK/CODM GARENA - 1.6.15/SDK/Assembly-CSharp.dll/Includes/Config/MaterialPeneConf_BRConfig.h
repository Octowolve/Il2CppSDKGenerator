#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MaterialPeneConfBRConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MaterialPeneConf_BRConfig"));
	}

	template <typename T = uintptr_t> T& EMaterialType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EBarrierType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaterialType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ThicknessLower() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ThicknessUpper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& BarrierType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A034))(this);
	}
	template <typename T = float> static T GetDecay(uintptr_t type, uintptr_t bType, float thickness) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x377A120))(0, type, bType, thickness);
	}
	template <typename T = int32_t> T get_MaterialType() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A110))(this);
	}
	template <typename T = void> T set_MaterialType(int32_t value) {
		return ((T (*)(MaterialPeneConfBRConfig*, int32_t))(Il2CppBase() + 0x377A53C))(this, value);
	}
	template <typename T = float> T get_ThicknessLower() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A344))(this);
	}
	template <typename T = void> T set_ThicknessLower(float value) {
		return ((T (*)(MaterialPeneConfBRConfig*, float))(Il2CppBase() + 0x377A544))(this, value);
	}
	template <typename T = float> T get_ThicknessUpper() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A34C))(this);
	}
	template <typename T = void> T set_ThicknessUpper(float value) {
		return ((T (*)(MaterialPeneConfBRConfig*, float))(Il2CppBase() + 0x377A54C))(this, value);
	}
	template <typename T = int32_t> T get_BarrierType() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A118))(this);
	}
	template <typename T = void> T set_BarrierType(int32_t value) {
		return ((T (*)(MaterialPeneConfBRConfig*, int32_t))(Il2CppBase() + 0x377A554))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A55C))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(MaterialPeneConfBRConfig*, Il2CppString*))(Il2CppBase() + 0x377A564))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MaterialPeneConfBRConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377A56C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(MaterialPeneConfBRConfig*))(Il2CppBase() + 0x377A70C))(this);
	}

};

}
