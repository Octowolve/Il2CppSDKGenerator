#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrologueShakeCounterAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrologueShakeCounterAction"));
	}


	template <typename T = void> T OnEnter() {
		return ((T (*)(PrologueShakeCounterAction*))(Il2CppBase() + 0x4CDA478))(this);
	}

};

}
