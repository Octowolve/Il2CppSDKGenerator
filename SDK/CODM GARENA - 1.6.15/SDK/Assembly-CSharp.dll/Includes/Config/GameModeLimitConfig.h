#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GameModeLimitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GameModeLimitConfig"));
	}

	template <typename T = Il2CppString*> T& Gamemodedesc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Ladder_level() {
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(GameModeLimitConfig*))(Il2CppBase() + 0x4647C28))(this);
	}
	template <typename T = Il2CppString*> T get_Gamemodedesc() {
		return ((T (*)(GameModeLimitConfig*))(Il2CppBase() + 0x4647CC8))(this);
	}
	template <typename T = void> T set_Gamemodedesc(Il2CppString* value) {
		return ((T (*)(GameModeLimitConfig*, Il2CppString*))(Il2CppBase() + 0x4647CD0))(this, value);
	}
	template <typename T = int32_t> T get_Game_mode() {
		return ((T (*)(GameModeLimitConfig*))(Il2CppBase() + 0x4647CD8))(this);
	}
	template <typename T = void> T set_Game_mode(int32_t value) {
		return ((T (*)(GameModeLimitConfig*, int32_t))(Il2CppBase() + 0x4647CE0))(this, value);
	}
	template <typename T = int32_t> T get_Ladder_level() {
		return ((T (*)(GameModeLimitConfig*))(Il2CppBase() + 0x4647CE8))(this);
	}
	template <typename T = void> T set_Ladder_level(int32_t value) {
		return ((T (*)(GameModeLimitConfig*, int32_t))(Il2CppBase() + 0x4647CF0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GameModeLimitConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4647CF8))(this, bytes, position);
	}

};

}
