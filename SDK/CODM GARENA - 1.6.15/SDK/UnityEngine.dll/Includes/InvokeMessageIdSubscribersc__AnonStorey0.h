#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InvokeMessageIdSubscriberscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "<InvokeMessageIdSubscribers>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& messageId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(InvokeMessageIdSubscriberscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4ABB554))(this, x);
	}

};

}
