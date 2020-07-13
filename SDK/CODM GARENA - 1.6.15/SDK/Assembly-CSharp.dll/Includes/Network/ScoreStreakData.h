#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ScoreStreakData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ScoreStreakData"));
	}

	template <typename T = uint32_t> T& ScoreStreakId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& IsCarePackageSteak() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ScoreStreakData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E9D3EC))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ScoreStreakData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E8C934))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E8CBC8))(0, data, DataIndex);
	}

};

}
