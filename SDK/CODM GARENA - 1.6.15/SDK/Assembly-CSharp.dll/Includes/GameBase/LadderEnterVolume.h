#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LadderEnterVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LadderEnterVolume"));
	}

	template <typename T = uintptr_t> T& TargetLadderVolume() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsClimbEnter() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsCorssWindow() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = bool> T& LadderWithHandRail() {
		return *(T*)((uintptr_t)this + 0x66);
	}
	template <typename T = Il2CppList<int32_t>*> T& mBeforOther() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTopHorizontalPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMoveForwardDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetForwardAndUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_targetLadderVolume() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E26F20))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E26F28))(this);
	}
	template <typename T = float> T GetTopHorizontalPlane() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E27044))(this);
	}
	template <typename T = Il2CppVector3> T GetMoveForwardDirection() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E27118))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(LadderEnterVolume*, uintptr_t))(Il2CppBase() + 0x2E27240))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(LadderEnterVolume*, uintptr_t))(Il2CppBase() + 0x2E273E4))(this, other);
	}
	template <typename T = void> T ResetForwardAndUp() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E2758C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LadderEnterVolume*))(Il2CppBase() + 0x2E276E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(LadderEnterVolume*, uintptr_t))(Il2CppBase() + 0x2E276EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(LadderEnterVolume*, uintptr_t))(Il2CppBase() + 0x2E276F4))(this, P0);
	}

};

}
