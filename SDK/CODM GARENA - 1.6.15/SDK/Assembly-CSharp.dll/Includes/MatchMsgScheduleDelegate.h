#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatchMsgScheduleDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatchMsgScheduleDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t origData) {
		return ((T (*)(MatchMsgScheduleDelegate*, uintptr_t))(Il2CppBase() + 0x1953E04))(this, origData);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t origData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MatchMsgScheduleDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19542FC))(this, origData, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MatchMsgScheduleDelegate*, uintptr_t))(Il2CppBase() + 0x1954328))(this, result);
	}

};

}
