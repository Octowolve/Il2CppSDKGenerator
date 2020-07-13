#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ReceiveDelivery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ReceiveDelivery"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bytesMsg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ByteCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Sequence() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(ReceiveDelivery*))(Il2CppBase() + 0x5082FE4))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(ReceiveDelivery*, bool))(Il2CppBase() + 0x5082FEC))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(ReceiveDelivery*))(Il2CppBase() + 0x5082FF4))(this);
	}

};

}
