#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeSequence"));
	}

	template <typename T = bool> T& IsCutScene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HideDynamicObject() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& AutoPlay() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MatineeCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& VirtualCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& DisablePlayerCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& TeleportPlayerOnFinish() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& HideLocalPlayerOnFinish() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& ContinueVirtualCameraOnFinish() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = bool> T& IsSkippable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AudioConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& CutSceneFadeInTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& DisableAllPlayerInput() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DestroyAfterFinished() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& DisableProtocolProcessing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& StayInMatinee() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& IsMidCutScene() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = int32_t> T& DynamicLoadMatineeAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& MatineeSequenceName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& FinishCallback() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsShowHUDWithinMatinee() {
		return ((T (*)(MatineeSequence*))(Il2CppBase() + 0x19C62EC))(this);
	}
	template <typename T = Il2CppString*> T get_sequenceName() {
		return ((T (*)(MatineeSequence*))(Il2CppBase() + 0x19C94F0))(this);
	}

};

}
