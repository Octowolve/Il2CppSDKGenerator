#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CNTFSPEAKMPMARK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_NTF_SPEAK_MP_MARK"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& MarkId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CNTFSPEAKMPMARK*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FA7480))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4FA7550))(0, data, DataIndex);
	}

};

}
