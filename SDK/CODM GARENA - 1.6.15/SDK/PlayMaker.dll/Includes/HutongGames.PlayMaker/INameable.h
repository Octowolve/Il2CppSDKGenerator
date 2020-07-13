#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class INameable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "INameable"));
	}


	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(INameable*))(Il2CppBase() + 0x0))(this);
	}

};

}
