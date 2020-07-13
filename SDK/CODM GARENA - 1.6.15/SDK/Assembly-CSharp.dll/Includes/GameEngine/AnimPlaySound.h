#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimPlaySound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimPlaySound"));
	}

	template <typename T = Il2CppString*> T& bankName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bankLoaded() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOneShot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlaySound(Il2CppString* strEvent) {
		return ((T (*)(AnimPlaySound*, Il2CppString*))(Il2CppBase() + 0x2B654F0))(this, strEvent);
	}
	template <typename T = void> T PlayOneShot(Il2CppString* strEvent) {
		return ((T (*)(AnimPlaySound*, Il2CppString*))(Il2CppBase() + 0x2B655E0))(this, strEvent);
	}

};

}
