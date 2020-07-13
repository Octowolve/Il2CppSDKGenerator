#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class PVETutorialView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "PVETutorialView"));
	}

	template <typename T = uintptr_t> T& PointToggle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& WeaponToggle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& PAPToggle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BuffToggle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& PVETutorialEnterBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TutorialObj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTutorialObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ShowTutorialObj(bool bShow, uintptr_t ObjParent, uintptr_t flow, float ZRot) {
		return ((T (*)(PVETutorialView*, bool, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4B06D20))(this, bShow, ObjParent, flow, ZRot);
	}

};

}
