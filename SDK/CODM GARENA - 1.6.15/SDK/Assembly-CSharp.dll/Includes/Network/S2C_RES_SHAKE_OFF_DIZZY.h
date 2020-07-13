#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CRESSHAKEOFFDIZZY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_RES_SHAKE_OFF_DIZZY"));
	}

	template <typename T = uint16_t> T& LeftTime() {
		return *(T*)((uintptr_t)this + 0xA);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CRESSHAKEOFFDIZZY*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E5F040))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E5F0F8))(0, data, DataIndex);
	}

};

}
