#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameAnimatorStateControllerLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameAnimatorStateControllerLayer"));
	}

	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LayerIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PreStateNameHash() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CurrStateNameHash() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& InTranstion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& StartTransitionTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TransitionNormalizeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TransitionDuaration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_CurrentStateConfig() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuningState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRunningIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStopTranstion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLeftHandType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsInit() {
		return ((T (*)(GameAnimatorStateControllerLayer*))(Il2CppBase() + 0x31EFC2C))(this);
	}
	template <typename T = void> T SetRuningState(int32_t nameHash, bool isEnter, bool inTranstion, float normalizeTime, float transitionDurationTime) {
		return ((T (*)(GameAnimatorStateControllerLayer*, int32_t, bool, bool, float, float))(Il2CppBase() + 0x31EFC34))(this, nameHash, isEnter, inTranstion, normalizeTime, transitionDurationTime);
	}
	template <typename T = bool> T IsRunningIK() {
		return ((T (*)(GameAnimatorStateControllerLayer*))(Il2CppBase() + 0x31EFE18))(this);
	}
	template <typename T = bool> T IsChangeClip() {
		return ((T (*)(GameAnimatorStateControllerLayer*))(Il2CppBase() + 0x31EFEE0))(this);
	}
	template <typename T = bool> T IsStopTranstion() {
		return ((T (*)(GameAnimatorStateControllerLayer*))(Il2CppBase() + 0x31EFF98))(this);
	}
	template <typename T = uintptr_t> T GetCurrentLeftHandType() {
		return ((T (*)(GameAnimatorStateControllerLayer*))(Il2CppBase() + 0x31F0050))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GameAnimatorStateControllerLayer*, float))(Il2CppBase() + 0x31F00FC))(this, deltaTime);
	}

};

}
