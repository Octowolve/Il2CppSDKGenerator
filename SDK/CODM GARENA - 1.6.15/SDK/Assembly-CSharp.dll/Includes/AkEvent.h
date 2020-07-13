#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEvent"));
	}

	template <typename T = uintptr_t> T& actionOnEventType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& curveInterpolation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& enableActionOnEvent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& eventID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& EventName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_callbackData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& playingId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& soundEmitterObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& transitionDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AkEvent*))(Il2CppBase() + 0x48FD674))(this);
	}
	template <typename T = void> T Callback(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info) {
		return ((T (*)(AkEvent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48FD870))(this, in_cookie, in_type, in_info);
	}
	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkEvent*, uintptr_t))(Il2CppBase() + 0x48FDB0C))(this, in_gameObject);
	}
	template <typename T = void> T Stop(int32_t _transitionDuration, uintptr_t _curveInterpolation) {
		return ((T (*)(AkEvent*, int32_t, uintptr_t))(Il2CppBase() + 0x48FE130))(this, _transitionDuration, _curveInterpolation);
	}

};

}
