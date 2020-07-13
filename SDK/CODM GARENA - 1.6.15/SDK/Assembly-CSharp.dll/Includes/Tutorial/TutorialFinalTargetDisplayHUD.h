#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalTargetDisplayHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalTargetDisplayHUD"));
	}

	template <typename T = uintptr_t> T& CentralRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& EdgeRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& MoveRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TitleLabel_Move() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& DistanceLabel_Move() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& KillRoot() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TitleLabel_Kill() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& DistanceLabel_Kill() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& EdgeTargetArrow() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& CentralBG() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CentralDistance() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& EdgeBG() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_ZOffset() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_TargetDisplay() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(uintptr_t targetDisplay) {
		return ((T (*)(TutorialFinalTargetDisplayHUD*, uintptr_t))(Il2CppBase() + 0x423C9AC))(this, targetDisplay);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TutorialFinalTargetDisplayHUD*))(Il2CppBase() + 0x423D254))(this);
	}
	template <typename T = void> T UpdateSignboard() {
		return ((T (*)(TutorialFinalTargetDisplayHUD*))(Il2CppBase() + 0x423CBC0))(this);
	}
	template <typename T = void> T UpdateLabel() {
		return ((T (*)(TutorialFinalTargetDisplayHUD*))(Il2CppBase() + 0x423D2F8))(this);
	}
	template <typename T = void> T UpdateTargetArraw(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(TutorialFinalTargetDisplayHUD*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x423D820))(this, worldPos, clampRect);
	}

};

}
