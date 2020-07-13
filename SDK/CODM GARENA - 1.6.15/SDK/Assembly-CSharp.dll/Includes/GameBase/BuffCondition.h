#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffCondition"));
	}

	template <typename T = uintptr_t> T& m_Buff() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProbability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t condType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x374D9EC))(0, condType);
	}
	template <typename T = float> T get_Probability() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DBDC))(this);
	}
	template <typename T = void> T Init(uintptr_t buff) {
		return ((T (*)(BuffCondition*, uintptr_t))(Il2CppBase() + 0x374DC00))(this, buff);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DCA8))(this);
	}
	template <typename T = void> T Set() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DD4C))(this);
	}
	template <typename T = bool> T CheckProbability() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DDE4))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffCondition*, uintptr_t))(Il2CppBase() + 0x374DE84))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffCondition*, float))(Il2CppBase() + 0x374DF24))(this, deltaTime);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DFC4))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BuffCondition*, bool))(Il2CppBase() + 0x374DFCC))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(BuffCondition*))(Il2CppBase() + 0x374DFD4))(this);
	}

};

}
