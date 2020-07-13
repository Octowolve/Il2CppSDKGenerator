#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MaterialPeneConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MaterialPeneConfConfig"));
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
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377A98C))(this);
	}
	template <typename T = float> static T GetDecay(uintptr_t type, uintptr_t bType, float thickness) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x377AA78))(0, type, bType, thickness);
	}
	template <typename T = int32_t> T get_MaterialType() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377AA68))(this);
	}
	template <typename T = void> T set_MaterialType(int32_t value) {
		return ((T (*)(MaterialPeneConfConfig*, int32_t))(Il2CppBase() + 0x377ACAC))(this, value);
	}
	template <typename T = float> T get_ThicknessLower() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377AC9C))(this);
	}
	template <typename T = void> T set_ThicknessLower(float value) {
		return ((T (*)(MaterialPeneConfConfig*, float))(Il2CppBase() + 0x377ACB4))(this, value);
	}
	template <typename T = float> T get_ThicknessUpper() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377ACA4))(this);
	}
	template <typename T = void> T set_ThicknessUpper(float value) {
		return ((T (*)(MaterialPeneConfConfig*, float))(Il2CppBase() + 0x377ACBC))(this, value);
	}
	template <typename T = int32_t> T get_BarrierType() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377AA70))(this);
	}
	template <typename T = void> T set_BarrierType(int32_t value) {
		return ((T (*)(MaterialPeneConfConfig*, int32_t))(Il2CppBase() + 0x377ACC4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377ACCC))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(MaterialPeneConfConfig*, Il2CppString*))(Il2CppBase() + 0x377ACD4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MaterialPeneConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377ACDC))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(MaterialPeneConfConfig*))(Il2CppBase() + 0x377AE7C))(this);
	}

};

}
