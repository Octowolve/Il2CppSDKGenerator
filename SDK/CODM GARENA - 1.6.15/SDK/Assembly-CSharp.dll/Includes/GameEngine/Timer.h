#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Timer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Timer"));
	}

	template <typename T = float> T& Interval() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OnTimer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& TimerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LastTriggerTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Started() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Loop() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& CanBePaused() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& FixedInterval() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_Interval() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436460))(this);
	}
	template <typename T = void> T set_Interval(float value) {
		return ((T (*)(Timer*, float))(Il2CppBase() + 0x3436468))(this, value);
	}
	template <typename T = uint32_t> T get_TimerID() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436470))(this);
	}
	template <typename T = void> T set_TimerID(uint32_t value) {
		return ((T (*)(Timer*, uint32_t))(Il2CppBase() + 0x3436448))(this, value);
	}
	template <typename T = float> T get_LastTriggerTime() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436478))(this);
	}
	template <typename T = void> T set_LastTriggerTime(float value) {
		return ((T (*)(Timer*, float))(Il2CppBase() + 0x3436480))(this, value);
	}
	template <typename T = bool> T get_Started() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436488))(this);
	}
	template <typename T = void> T set_Started(bool value) {
		return ((T (*)(Timer*, bool))(Il2CppBase() + 0x3436440))(this, value);
	}
	template <typename T = bool> T get_Loop() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436490))(this);
	}
	template <typename T = void> T set_Loop(bool value) {
		return ((T (*)(Timer*, bool))(Il2CppBase() + 0x3436438))(this, value);
	}
	template <typename T = bool> T get_CanBePaused() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436498))(this);
	}
	template <typename T = void> T set_CanBePaused(bool value) {
		return ((T (*)(Timer*, bool))(Il2CppBase() + 0x3436450))(this, value);
	}
	template <typename T = bool> T get_FixedInterval() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x34364A0))(this);
	}
	template <typename T = void> T set_FixedInterval(bool value) {
		return ((T (*)(Timer*, bool))(Il2CppBase() + 0x3436458))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x34364A8))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x343657C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x3436620))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x34369B0))(this);
	}

};

}
