#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerDisable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerDisable"));
	}


	template <typename T = void> T OnDisable() {
		return ((T (*)(AkTriggerDisable*))(Il2CppBase() + 0x22AFCA8))(this);
	}

};

}
