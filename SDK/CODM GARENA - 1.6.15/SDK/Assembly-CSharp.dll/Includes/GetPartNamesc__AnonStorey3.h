#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPartNamescAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPartNames>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& partAssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& partIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& newPartNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0(uintptr_t data) {
		return ((T (*)(GetPartNamescAnonStorey3*, uintptr_t))(Il2CppBase() + 0x3EF568C))(this, data);
	}

};

}
