#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITimeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITimeGroup"));
	}

	template <typename T = float> T& playOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& autoInvoke() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fElaseTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bTick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& waitFirstPlay() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& waitTimeFirstPlay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& bFirstRefresh() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTimeGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UITimeGroup*))(Il2CppBase() + 0x3B18240))(this);
	}
	template <typename T = void> T InvokeImpl(float fPlayOffset) {
		return ((T (*)(UITimeGroup*, float))(Il2CppBase() + 0x3B18300))(this, fPlayOffset);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITimeGroup*))(Il2CppBase() + 0x3B18478))(this);
	}
	template <typename T = void> T StartTick(float fPlayOffset) {
		return ((T (*)(UITimeGroup*, float))(Il2CppBase() + 0x3B183C4))(this, fPlayOffset);
	}
	template <typename T = void> T ResetTimeGroup() {
		return ((T (*)(UITimeGroup*))(Il2CppBase() + 0x3B18584))(this);
	}
	template <typename T = void> T OnPlayTimeGroup() {
		return ((T (*)(UITimeGroup*))(Il2CppBase() + 0x0))(this);
	}

};

}
