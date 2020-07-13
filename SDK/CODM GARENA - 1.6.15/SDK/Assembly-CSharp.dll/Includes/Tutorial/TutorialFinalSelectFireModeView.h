#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalSelectFireModeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalSelectFireModeView"));
	}

	template <typename T = uintptr_t> T& OpenMirrorBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& OpenMirrorBtnBG() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpenMirrorGo() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& OpenMirrorUnGo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& HipShootBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& HipShootBtnBG() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& HipShootGo() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& HipShootUnGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelectStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateSelectStatus(uintptr_t modeType) {
		return ((T (*)(TutorialFinalSelectFireModeView*, uintptr_t))(Il2CppBase() + 0x423B204))(this, modeType);
	}
	template <typename T = void> T SetBtnBG(uintptr_t btnBG, bool selected) {
		return ((T (*)(TutorialFinalSelectFireModeView*, uintptr_t, bool))(Il2CppBase() + 0x423BDD0))(this, btnBG, selected);
	}

};

}
