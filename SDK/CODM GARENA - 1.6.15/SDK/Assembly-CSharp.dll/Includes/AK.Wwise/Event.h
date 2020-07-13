#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class Event
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "Event"));
	}


	template <typename T = void> T VerifyPlayingID(uint32_t playingId) {
		return ((T (*)(Event*, uint32_t))(Il2CppBase() + 0x4A1F948))(this, playingId);
	}
	template <typename T = uint32_t> T Post(uintptr_t gameObject) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4A1F94C))(this, gameObject);
	}
	template <typename T = uint32_t> T Post_1(uintptr_t gameObject, uintptr_t flags, uintptr_t callback, uintptr_t cookie) {
		return ((T (*)(Event*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A1FA24))(this, gameObject, flags, callback, cookie);
	}
	template <typename T = uint32_t> T Post_2(uintptr_t gameObject, uint32_t flags, uintptr_t callback, uintptr_t cookie) {
		return ((T (*)(Event*, uintptr_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A1FB3C))(this, gameObject, flags, callback, cookie);
	}
	template <typename T = void> T Stop(uintptr_t gameObject, int32_t transitionDuration, uintptr_t curveInterpolation) {
		return ((T (*)(Event*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4A1FC38))(this, gameObject, transitionDuration, curveInterpolation);
	}
	template <typename T = void> T ExecuteAction(uintptr_t gameObject, uintptr_t actionOnEventType, int32_t transitionDuration, uintptr_t curveInterpolation) {
		return ((T (*)(Event*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4A1FC60))(this, gameObject, actionOnEventType, transitionDuration, curveInterpolation);
	}
	template <typename T = void> T PostMIDI(uintptr_t gameObject, uintptr_t array) {
		return ((T (*)(Event*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A1FD50))(this, gameObject, array);
	}
	template <typename T = void> T PostMIDI_1(uintptr_t gameObject, uintptr_t array, int32_t count) {
		return ((T (*)(Event*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4A1FDAC))(this, gameObject, array, count);
	}
	template <typename T = void> T StopMIDI(uintptr_t gameObject) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4A1FE1C))(this, gameObject);
	}
	template <typename T = void> T StopMIDI_1() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4A1FEEC))(this);
	}

};

}
