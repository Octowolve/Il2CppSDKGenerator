#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MissingAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker.Actions", "MissingAction"));
	}

	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
