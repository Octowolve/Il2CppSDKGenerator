#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AK.Wwise {

class State
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AK.Wwise", "State"));
	}


	template <typename T = void> T SetValue() {
		return ((T (*)(State*))(Il2CppBase() + 0x4A20178))(this);
	}

};

}
