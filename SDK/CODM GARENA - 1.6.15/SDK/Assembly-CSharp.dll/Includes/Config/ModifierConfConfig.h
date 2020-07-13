#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ModifierConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ModifierConfConfig"));
	}

	template <typename T = int32_t> T& ModifierId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PropItemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BuffIdArray() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MutexGroup() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& ApplyMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ApplyZombieCountInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& IncreaseZombieHealth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& UseInEndless() {
		return *(T*)((uintptr_t)this + 0x34);
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
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BDB4))(this);
	}
	template <typename T = int32_t> T get_ModifierId() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BE54))(this);
	}
	template <typename T = void> T set_ModifierId(int32_t value) {
		return ((T (*)(ModifierConfConfig*, int32_t))(Il2CppBase() + 0x377BE5C))(this, value);
	}
	template <typename T = int32_t> T get_PropItemId() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BE64))(this);
	}
	template <typename T = void> T set_PropItemId(int32_t value) {
		return ((T (*)(ModifierConfConfig*, int32_t))(Il2CppBase() + 0x377BE6C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BE74))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ModifierConfConfig*, Il2CppString*))(Il2CppBase() + 0x377BE7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BE84))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BE94))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ModifierConfConfig*, Il2CppString*))(Il2CppBase() + 0x377BE9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BEA4))(this);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BEB4))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(ModifierConfConfig*, Il2CppString*))(Il2CppBase() + 0x377BEBC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BuffIdArray() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BEC4))(this);
	}
	template <typename T = void> T set_BuffIdArray(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ModifierConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x377BECC))(this, value);
	}
	template <typename T = int32_t> T get_MutexGroup() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BED4))(this);
	}
	template <typename T = void> T set_MutexGroup(int32_t value) {
		return ((T (*)(ModifierConfConfig*, int32_t))(Il2CppBase() + 0x377BEDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ApplyMode() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BEE4))(this);
	}
	template <typename T = void> T set_ApplyMode(Il2CppString* value) {
		return ((T (*)(ModifierConfConfig*, Il2CppString*))(Il2CppBase() + 0x377BEEC))(this, value);
	}
	template <typename T = int32_t> T get_ApplyZombieCountInterval() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BEF4))(this);
	}
	template <typename T = void> T set_ApplyZombieCountInterval(int32_t value) {
		return ((T (*)(ModifierConfConfig*, int32_t))(Il2CppBase() + 0x377BEFC))(this, value);
	}
	template <typename T = int32_t> T get_IncreaseZombieHealth() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BF04))(this);
	}
	template <typename T = void> T set_IncreaseZombieHealth(int32_t value) {
		return ((T (*)(ModifierConfConfig*, int32_t))(Il2CppBase() + 0x377BF0C))(this, value);
	}
	template <typename T = bool> T get_UseInEndless() {
		return ((T (*)(ModifierConfConfig*))(Il2CppBase() + 0x377BF14))(this);
	}
	template <typename T = void> T set_UseInEndless(bool value) {
		return ((T (*)(ModifierConfConfig*, bool))(Il2CppBase() + 0x377BF1C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ModifierConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377BF24))(this, bytes, position);
	}

};

}
