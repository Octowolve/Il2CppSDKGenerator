#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConditionConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConditionConfConfig"));
	}

	template <typename T = uintptr_t> T& m_ConditionEnumType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ConditionID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ConditionType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ConditionMin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ConditionMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConditionReachTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_ConditionEnumType() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F580))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F588))(this);
	}
	template <typename T = bool> T IsConditionReachTarget() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F69C))(this);
	}
	template <typename T = int32_t> T get_ConditionID() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F87C))(this);
	}
	template <typename T = void> T set_ConditionID(int32_t value) {
		return ((T (*)(ConditionConfConfig*, int32_t))(Il2CppBase() + 0x462F884))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConditionType() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F694))(this);
	}
	template <typename T = void> T set_ConditionType(Il2CppString* value) {
		return ((T (*)(ConditionConfConfig*, Il2CppString*))(Il2CppBase() + 0x462F88C))(this, value);
	}
	template <typename T = int32_t> T get_ConditionMin() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F86C))(this);
	}
	template <typename T = void> T set_ConditionMin(int32_t value) {
		return ((T (*)(ConditionConfConfig*, int32_t))(Il2CppBase() + 0x462F894))(this, value);
	}
	template <typename T = int32_t> T get_ConditionMax() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F874))(this);
	}
	template <typename T = void> T set_ConditionMax(int32_t value) {
		return ((T (*)(ConditionConfConfig*, int32_t))(Il2CppBase() + 0x462F89C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ConditionConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462F8A4))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ConditionConfConfig*))(Il2CppBase() + 0x462F9DC))(this);
	}

};

}
