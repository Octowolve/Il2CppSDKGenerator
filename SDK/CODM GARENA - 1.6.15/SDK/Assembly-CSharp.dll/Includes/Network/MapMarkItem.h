#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MapMarkItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MapMarkItem"));
	}

	template <typename T = uint32_t> T& Uid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapMarkItem*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x48302A0))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapMarkItem*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x48303A4))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4830498))(0, data, DataIndex);
	}

};

}
