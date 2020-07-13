#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SREQSPEAKMPMARK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_REQ_SPEAK_MP_MARK"));
	}

	template <typename T = uint32_t> T& MarkId() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SREQSPEAKMPMARK*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5049D44))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x5049E0C))(0, data, DataIndex);
	}

};

}
