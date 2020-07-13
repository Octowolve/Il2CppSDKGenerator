#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQSHAKEOFFDIZZY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_SHAKE_OFF_DIZZY"));
	}


	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQSHAKEOFFDIZZY*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5049994))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x5049998))(0, data, DataIndex);
	}

};

}
