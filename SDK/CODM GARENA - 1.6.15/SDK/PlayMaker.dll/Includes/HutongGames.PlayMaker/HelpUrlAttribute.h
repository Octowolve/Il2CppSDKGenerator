#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class HelpUrlAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "HelpUrlAttribute"));
	}

	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(HelpUrlAttribute*))(Il2CppBase() + 0x2F2262C))(this);
	}

};

}
