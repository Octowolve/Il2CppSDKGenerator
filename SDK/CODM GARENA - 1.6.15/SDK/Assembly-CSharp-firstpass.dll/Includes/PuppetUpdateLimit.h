#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PuppetUpdateLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "PuppetUpdateLimit"));
	}

	template <typename T = int32_t> T& puppetsPerFrame() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Step(int32_t puppetCount) {
		return ((T (*)(PuppetUpdateLimit*, int32_t))(Il2CppBase() + 0x38D0B48))(this, puppetCount);
	}
	template <typename T = bool> T Update(Il2CppList<uintptr_t>* puppets, uintptr_t puppetMaster) {
		return ((T (*)(PuppetUpdateLimit*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x38D0640))(this, puppets, puppetMaster);
	}

};

}
