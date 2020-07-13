#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USequencerFriendlyNameAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USequencerFriendlyNameAttribute"));
	}

	template <typename T = Il2CppString*> T& friendlyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_FriendlyName() {
		return ((T (*)(USequencerFriendlyNameAttribute*))(Il2CppBase() + 0x485C934))(this);
	}

};

}
