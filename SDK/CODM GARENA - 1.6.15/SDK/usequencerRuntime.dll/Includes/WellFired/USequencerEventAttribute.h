#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USequencerEventAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USequencerEventAttribute"));
	}

	template <typename T = Il2CppString*> T& eventPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_EventPath() {
		return ((T (*)(USequencerEventAttribute*))(Il2CppBase() + 0x485C904))(this);
	}

};

}
