#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RoundLoadoutItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RoundLoadoutItemConfConfig"));
	}

	template <typename T = Il2CppString*> T& ModeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& FireArmType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Desc_1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_ModeID() {
		return ((T (*)(RoundLoadoutItemConfConfig*))(Il2CppBase() + 0x30DB5F8))(this);
	}
	template <typename T = void> T set_ModeID(Il2CppString* value) {
		return ((T (*)(RoundLoadoutItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB600))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(RoundLoadoutItemConfConfig*))(Il2CppBase() + 0x30DB608))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(RoundLoadoutItemConfConfig*, int32_t))(Il2CppBase() + 0x30DB610))(this, value);
	}
	template <typename T = int32_t> T get_FireArmType() {
		return ((T (*)(RoundLoadoutItemConfConfig*))(Il2CppBase() + 0x30DB618))(this);
	}
	template <typename T = void> T set_FireArmType(int32_t value) {
		return ((T (*)(RoundLoadoutItemConfConfig*, int32_t))(Il2CppBase() + 0x30DB620))(this, value);
	}
	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(RoundLoadoutItemConfConfig*))(Il2CppBase() + 0x30DB628))(this);
	}
	template <typename T = void> T set_Weight(int32_t value) {
		return ((T (*)(RoundLoadoutItemConfConfig*, int32_t))(Il2CppBase() + 0x30DB630))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc_1() {
		return ((T (*)(RoundLoadoutItemConfConfig*))(Il2CppBase() + 0x30DB638))(this);
	}
	template <typename T = void> T set_Desc_1(Il2CppString* value) {
		return ((T (*)(RoundLoadoutItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB640))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RoundLoadoutItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DB648))(this, bytes, position);
	}

};

}
