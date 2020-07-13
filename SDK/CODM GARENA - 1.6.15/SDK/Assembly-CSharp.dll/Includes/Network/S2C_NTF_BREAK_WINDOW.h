#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CNTFBREAKWINDOW
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_NTF_BREAK_WINDOW"));
	}

	template <typename T = uint32_t> T& ClientUID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Dir() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CNTFBREAKWINDOW*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4FA38F8))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4FA3A0C))(0, data, DataIndex);
	}

};

}
