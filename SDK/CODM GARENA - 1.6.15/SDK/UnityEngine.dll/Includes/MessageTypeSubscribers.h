#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageTypeSubscribers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "MessageTypeSubscribers"));
	}

	template <typename T = Il2CppString*> T& m_messageTypeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& subscriberCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& messageCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_MessageTypeId() {
		return ((T (*)(MessageTypeSubscribers*))(Il2CppBase() + 0x4ABB670))(this);
	}

};

}
