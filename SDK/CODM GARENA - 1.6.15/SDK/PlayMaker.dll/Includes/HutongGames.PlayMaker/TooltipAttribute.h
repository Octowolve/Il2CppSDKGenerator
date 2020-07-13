#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class TooltipAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "TooltipAttribute"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(TooltipAttribute*))(Il2CppBase() + 0x2F23914))(this);
	}

};

}
