#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Initialization {

class IInitializationContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Initialization", "IInitializationContext"));
	}


	template <typename T = bool> T IsContextSetupComplete() {
		return ((T (*)(IInitializationContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
