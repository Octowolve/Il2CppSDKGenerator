#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentAnnihilator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_Annihilator"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStartAssistanceSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_AssistanceEffectID() {
		return ((T (*)(WeaponFireComponentAnnihilator*))(Il2CppBase() + 0x2EC3D58))(this);
	}
	template <typename T = void> T LoadProperties(Il2CppString* path) {
		return ((T (*)(WeaponFireComponentAnnihilator*, Il2CppString*))(Il2CppBase() + 0x2EC3D64))(this, path);
	}
	template <typename T = void> T PlayStartAssistanceSound() {
		return ((T (*)(WeaponFireComponentAnnihilator*))(Il2CppBase() + 0x2EC3E6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadProperties(Il2CppString* P0) {
		return ((T (*)(WeaponFireComponentAnnihilator*, Il2CppString*))(Il2CppBase() + 0x2EC4060))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayStartAssistanceSound() {
		return ((T (*)(WeaponFireComponentAnnihilator*))(Il2CppBase() + 0x2EC4068))(this);
	}

};

}
