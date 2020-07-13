#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BaseObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BaseObject"));
	}

	template <typename T = uintptr_t> T& m_Tr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTimerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTimers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_CachedTransform() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360B09C))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360B21C))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(BaseObject*, Il2CppVector3))(Il2CppBase() + 0x360E304))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_Rotation() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360B4DC))(this);
	}
	template <typename T = void> T set_Rotation(Il2CppQuaternion value) {
		return ((T (*)(BaseObject*, Il2CppQuaternion))(Il2CppBase() + 0x360E354))(this, value);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360E3A8))(this);
	}
	template <typename T = uintptr_t> T SetTimer(float interval, bool loop, uintptr_t action, bool autoStart, bool fixedInterval) {
		return ((T (*)(BaseObject*, float, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x360E490))(this, interval, loop, action, autoStart, fixedInterval);
	}
	template <typename T = bool> T IsTimerActive(uintptr_t action) {
		return ((T (*)(BaseObject*, uintptr_t))(Il2CppBase() + 0x360E5D8))(this, action);
	}
	template <typename T = void> T ClearTimer(uint32_t timerID) {
		return ((T (*)(BaseObject*, uint32_t))(Il2CppBase() + 0x360E69C))(this, timerID);
	}
	template <typename T = void> T ClearTimer_1(uintptr_t action) {
		return ((T (*)(BaseObject*, uintptr_t))(Il2CppBase() + 0x360E758))(this, action);
	}
	template <typename T = void> T ClearAllTimers() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360BFB8))(this);
	}
	template <typename T = void> T UpdateTimers() {
		return ((T (*)(BaseObject*))(Il2CppBase() + 0x360BE28))(this);
	}

};

}
