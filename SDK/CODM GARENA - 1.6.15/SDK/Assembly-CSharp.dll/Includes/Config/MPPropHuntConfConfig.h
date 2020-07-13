#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MPPropHuntConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MPPropHuntConfConfig"));
	}

	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CostType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CostValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Enable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ItemSpriteName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C6CC))(this);
	}
	template <typename T = int32_t> T GetSecondaryKeyValue() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C774))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C76C))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(MPPropHuntConfConfig*, int32_t))(Il2CppBase() + 0x377C81C))(this, value);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C814))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(MPPropHuntConfConfig*, int32_t))(Il2CppBase() + 0x377C824))(this, value);
	}
	template <typename T = int32_t> T get_CostType() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C82C))(this);
	}
	template <typename T = void> T set_CostType(int32_t value) {
		return ((T (*)(MPPropHuntConfConfig*, int32_t))(Il2CppBase() + 0x377C834))(this, value);
	}
	template <typename T = int32_t> T get_CostValue() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C83C))(this);
	}
	template <typename T = void> T set_CostValue(int32_t value) {
		return ((T (*)(MPPropHuntConfConfig*, int32_t))(Il2CppBase() + 0x377C844))(this, value);
	}
	template <typename T = bool> T get_Enable() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C84C))(this);
	}
	template <typename T = void> T set_Enable(bool value) {
		return ((T (*)(MPPropHuntConfConfig*, bool))(Il2CppBase() + 0x377C854))(this, value);
	}
	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C85C))(this);
	}
	template <typename T = void> T set_Weight(int32_t value) {
		return ((T (*)(MPPropHuntConfConfig*, int32_t))(Il2CppBase() + 0x377C864))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemSpriteName() {
		return ((T (*)(MPPropHuntConfConfig*))(Il2CppBase() + 0x377C86C))(this);
	}
	template <typename T = void> T set_ItemSpriteName(Il2CppString* value) {
		return ((T (*)(MPPropHuntConfConfig*, Il2CppString*))(Il2CppBase() + 0x377C874))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MPPropHuntConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377C87C))(this, bytes, position);
	}

};

}
