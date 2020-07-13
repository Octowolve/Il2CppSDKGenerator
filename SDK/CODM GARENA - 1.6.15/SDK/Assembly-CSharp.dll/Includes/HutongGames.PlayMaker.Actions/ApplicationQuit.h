#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ApplicationQuit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ApplicationQuit"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(ApplicationQuit*))(Il2CppBase() + 0x4F2FB9C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ApplicationQuit*))(Il2CppBase() + 0x4F2FBA0))(this);
	}

};

}
