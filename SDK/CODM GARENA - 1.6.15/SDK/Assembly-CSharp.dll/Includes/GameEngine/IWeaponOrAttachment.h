#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IWeaponOrAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IWeaponOrAttachment"));
	}


	template <typename T = int32_t> T get_ShotFired() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponINIPath() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSoundPlayer() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetWeaponRoot() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetWeaponActorId() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T AttachObjectToSocket() {
		return ((T (*)(IWeaponOrAttachment*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnWeaponControllerLoaded(uintptr_t animatorController) {
		return ((T (*)(IWeaponOrAttachment*, uintptr_t))(Il2CppBase() + 0x0))(this, animatorController);
	}

};

}
