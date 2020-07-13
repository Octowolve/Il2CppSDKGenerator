#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerEnable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerEnable"));
	}


	template <typename T = void> T OnEnable() {
		return ((T (*)(AkTriggerEnable*))(Il2CppBase() + 0x22AFCC8))(this);
	}

};

}
