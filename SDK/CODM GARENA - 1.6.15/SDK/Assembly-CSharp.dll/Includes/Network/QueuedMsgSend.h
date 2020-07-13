#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class QueuedMsgSend
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "QueuedMsgSend"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& resendTimes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& sendTimes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& timeSend() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timeQueued() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& cmd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(QueuedMsgSend*))(Il2CppBase() + 0x5082E4C))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(QueuedMsgSend*, bool))(Il2CppBase() + 0x5082E54))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(QueuedMsgSend*))(Il2CppBase() + 0x5082E5C))(this);
	}

};

}
