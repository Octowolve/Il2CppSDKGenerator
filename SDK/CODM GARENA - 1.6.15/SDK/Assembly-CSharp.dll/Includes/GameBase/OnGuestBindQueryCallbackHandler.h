#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnGuestBindQueryCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnGuestBindQueryCallbackHandler"));
	}


	template <typename T = void> T Invoke(bool success, Il2CppList<int32_t>* channelList) {
		return ((T (*)(OnGuestBindQueryCallbackHandler*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x1622ECC))(this, success, channelList);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, Il2CppList<int32_t>* channelList, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnGuestBindQueryCallbackHandler*, bool, Il2CppList<int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1622F60))(this, success, channelList, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnGuestBindQueryCallbackHandler*, uintptr_t))(Il2CppBase() + 0x1623024))(this, result);
	}

};

}
