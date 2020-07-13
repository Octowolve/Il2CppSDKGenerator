#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionSection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionSection"));
	}

	template <typename T = Il2CppString*> T& section() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Section() {
		return ((T (*)(ActionSection*))(Il2CppBase() + 0x2EEB848))(this);
	}

};

}
